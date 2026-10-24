/* summon_ai: the Archer's summoned pet hunts with the enemy_pathing flow field (CN baseline /
 * English ROM). Requires enemy_pathing (its RAM block, field and boot hook); without it the
 * PF magic is never written and every hook runs the vanilla code.
 *
 * Compiled as ONE freestanding Thumb blob at CODE_BASE by summon/build.py, with the same rules
 * as enemy_pathing (no relocations, no .rodata, no division). The pathing core is included, so
 * bfs_arm is the first code here too; it is byte-identical to enemy_pathing's copy, so both
 * blobs share the IWRAM copy of the BFS loop.
 *
 * The summon is the coroutine 0x080717B4 (one task per summon; it yields with 0x080003F0).
 * Its state lives in its stack frame F (= sp inside the routine) and three high registers:
 *   F+0x4C task descriptor, F+0x50 target enemy, F+0x58 owner actor, F+0x60 target id
 *   (enemy +0x02; 0xFF/0xFFFF none; <= 3 a player), F+0x68 hits left, F+0x70 x (24.8),
 *   F+0x74 facing 0..7, F+0x7C local player, F+0x80 owner index, F+0x88 orbit wait counter,
 *   F+0x90/0x94 orbit centre (24.8), F+0x9C/0xA0 -> s16 dx/dy at F+0x48/0x4A;
 *   r8 heading 0..255, r9 owner*5, r10 y (24.8).
 * Vanilla phases: orbit (yield 0x08071F32), chase (0x08072592), hit (0x080726B4), return
 * (0x08072A02). See docs/mods/summon_ai.md.
 *
 * Each hook site is `bl stub` (0x080BB238+) -> sm_trampN (here) -> sm_hook(N, F, R). R holds
 * r0..r3, r8, r10, r9 in and out; sm_hook returns the address to resume at (Thumb, |1). Every
 * resume point reloads what it needs from the frame, so no flags or other low registers are
 * live across a hook.
 *
 * New behaviour (single-player, owner = the local player, enemy targets only):
 *  - orbit: as vanilla, but the wait after a return is ORBIT_WAIT frames (vanilla 60) and its
 *    centre follows the owner; a pet more than ORBIT_LEASH px away walks back by the path.
 *  - search: the enemy closest to the owner by path (field distance), on screen, reachable,
 *    not recently given up on.
 *  - chase: straight at the target when the pet's cell sees the target's cell, otherwise along
 *    the target's own downhill path to the owner, walked backwards from the cell of it nearest
 *    the pet; the pet does not walk into walls. One attack per ATTACK_EVERY frames, then it
 *    stays on the same target. It returns when the target dies, leaves the screen, turns out
 *    unreachable (complete field, no path) or no progress for CHASE_STUCK frames, or when the
 *    owner was hurt during the fight and another enemy is now the closest to the owner.
 *  - return: by the owner's field (like an enemy), not through walls; if that makes no
 *    progress for RET_STUCK frames it flies straight as vanilla.
 */
#include "../../pathing/src/pf_core.h"

/* Trampolines: the stub loads r3 = &sm_trampN; sm_trampN puts N in r3; sm_tramp saves r0-r3, r8, r10,
 * r9 in R[0..6] on the stack, calls sm_hook(N, F = sp at the hook, R), restores them and jumps to the
 * returned address through ip. */
asm(".text\n.syntax unified\n.thumb\n.align 2\n"
    /* bfs_run copies 72 words (bfs_arm is 68) and checks words 0, 36, 71 against its own blob. These
     * 4 words are the ones that follow bfs_arm in enemy_pathing's shipped blob (never executed), so both
     * mods leave the same IWRAM copy and neither keeps recopying it. summon/build.py checks them. */
    ".word 0x4813b580, 0xf82af000, 0x21004812, 0x66416601\n"
    ".global sm_tramp0\n.thumb_func\nsm_tramp0:\n  movs r3, #0\n  b sm_tramp\n"
    ".global sm_tramp1\n.thumb_func\nsm_tramp1:\n  movs r3, #1\n  b sm_tramp\n"
    ".global sm_tramp2\n.thumb_func\nsm_tramp2:\n  movs r3, #2\n  b sm_tramp\n"
    ".global sm_tramp3\n.thumb_func\nsm_tramp3:\n  movs r3, #3\n  b sm_tramp\n"
    ".global sm_tramp4\n.thumb_func\nsm_tramp4:\n  movs r3, #4\n  b sm_tramp\n"
    ".global sm_tramp5\n.thumb_func\nsm_tramp5:\n  movs r3, #5\n  b sm_tramp\n"
    ".thumb_func\nsm_tramp:\n"
    "  sub sp, #28\n  str r0, [sp, #0]\n  str r1, [sp, #4]\n  str r2, [sp, #8]\n  str r3, [sp, #12]\n"
    "  mov r0, r8\n  str r0, [sp, #16]\n  mov r0, sl\n  str r0, [sp, #20]\n  mov r0, sb\n  str r0, [sp, #24]\n"
    "  adds r0, r3, #0\n  add r1, sp, #28\n  mov r2, sp\n  bl sm_hook\n  mov ip, r0\n"
    "  ldr r0, [sp, #16]\n  mov r8, r0\n  ldr r0, [sp, #20]\n  mov sl, r0\n  ldr r0, [sp, #24]\n  mov sb, r0\n"
    "  ldr r0, [sp, #0]\n  ldr r1, [sp, #4]\n  ldr r2, [sp, #8]\n  ldr r3, [sp, #12]\n  add sp, #28\n  bx ip\n");

/* Hook numbers (summon/build.py has the sites) and resume addresses (Thumb |1). */
enum { H_ORBIT, H_SEARCH, H_CONTACT, H_CHASE, H_AFTER, H_HOME };
#define AT(a) ((a) | 1u)
#define ORBIT_CONT AT(0x08071B8A)   /* after `ldr r0,[sp,#0x88]; adds r3,r0,#0` (wants r0 = r3 = counter) */
#define ORBIT_ENTRY AT(0x08071B76)  /* where the vanilla return goes on arrival */
#define SEARCH_CONT AT(0x08071BE6)  /* after the search call (wants r0 = target id or 0xFF) */
#define CONTACT_CONT AT(0x080720AC) /* vanilla contact scan (wants r2 = r9 = 0) */
#define CHASE_CHECKS AT(0x0807227E) /* the chase's end-of-summon checks, then target dx/dy and distance */
#define CHASE_MOVE AT(0x0807237C)   /* vanilla chase step (distance > 7) */
#define HIT AT(0x08072598)          /* attack */
#define CHASE_DRAW AT(0x08072486)   /* chase: animate, draw, yield, loop */
#define CHASE_LOOP AT(0x08072070)   /* chase loop head */
#define RETURN AT(0x080727A4)       /* return phase entry (sets r9) */
#define END AT(0x08072A70)          /* summon ends */
#define HOME_OWNER AT(0x080727B2)   /* vanilla return step, owner is a player */
#define HOME_OTHER AT(0x080727DC)   /* vanilla return step, owner is an enemy */
#define HOME_DRAW AT(0x080728EA)    /* return: animate, draw, yield, loop */

#define ORIG_SEARCH ((u32(*)(u32, u32))0x08074665)  /* (half-angle, range px) -> enemy id or 0xFF */
#define ARCTAN2 ((u32(*)(s32, s32))0x080B9A81)      /* BIOS ArcTan2(x, y) -> 0..0xFFFF */
#define SQRT ((u32(*)(u32))0x080B9A9D)              /* BIOS Sqrt */
#define SIN ((const s16 *)0x080BAC14)               /* 256 steps per turn, x256 (cos = SIN[a + 0x40]) */
#define FACING ((const u8 *)0x0843EED0)             /* heading >> 4 -> facing 0..7 */
#define LINK (*(volatile u32 *)0x03002870)          /* bit 1: link (multiplayer) session */
#define ACTOR(i) ((u8 *)0x03003D80 + (i) * 0x154)  /* player actor: +0x94/+0x98 pos 24.8, +0xCC HP */
#define POOL (*(u8 *volatile *)0x030057B4)          /* enemies: 5 x 0x454 */
#define POOL_USED (*(volatile u32 *)0x030057BC)
#define CAM_X (*(volatile u16 *)(MAP + 0x7C))       /* screen top-left, px */
#define CAM_Y (*(volatile u16 *)(MAP + 0x7E))

/* Tunables */
#define ORBIT_WAIT 15      /* frames circling after a return before the next search (vanilla 60) */
#define ORBIT_LEASH 56     /* px; farther from the owner while circling: walk back by the path */
#define ATTACK_EVERY 60    /* frames from one attack to the next */
#define CONTACT 7          /* px; attack range (vanilla) */
#define CHASE_SPEED 3      /* px/frame (vanilla) */
#define HOME_SPEED 3       /* px/frame (vanilla) */
#define CHASE_STUCK 150    /* frames without getting 4 px closer (straight or along the path): give up */
#define SKIP_FRAMES 300    /* ... and do not pick it again for this long */
#define HOME_STUCK 90      /* frames without getting closer on the way back: fly straight (vanilla) */
#define AIM_EVERY 4        /* frames between path aims (also on every cell change) */
#define CHAIN_MAX 120      /* cells followed along the target's path */
#define LOOK 6             /* cells of path ahead tested for line of sight */
#define MAX_PATH 60        /* cells; an enemy farther than this by path counts as unreachable */
#define SCREEN_SIDE 12     /* px a target's feet may be past the left/right edge (sprite half-width) */
#define SCREEN_BELOW 24    /* px its feet may be below the bottom edge (sprites stand ~24 px tall) */

struct sm {                /* PF_BASE + 0xC0 (spare part of enemy_pathing's 0x100 control block) */
    u32 magic;
    u32 key;               /* task descriptor of the summon this state belongs to */
    u32 hit_frame;         /* frame the last attack started */
    u32 aim_frame;
    u32 skip_until;
    u16 skip_id;
    u16 last_hp;
    u16 best, stuck;       /* chase progress (px), frames without progress */
    u16 hbest, hstuck;     /* return progress */
    s16 aim_x, aim_y;      /* cached aim point, px */
    u16 aim_cell, tgt_id, tgt_cell;
    u8 hurt;               /* owner lost HP since this fight started */
    u8 ghost;              /* return flies straight (path made no progress) */
    u8 aim_ok;
    u8 sees;               /* pet's cell sees the target (cached with the aim) */
    u8 why;                /* last reason to return (WHY_*), for tests */
    u16 plen;              /* path length to the target, cells (cached with the aim) */
};
#define SM ((struct sm *)(PF_BASE + 0xC0))
#define SM_MAGIC 0x31414D53u  /* "SMA1" */
enum { WHY_NONE, WHY_GONE, WHY_NO_PATH, WHY_STUCK, WHY_RESCUE, WHY_LEASH };
_Static_assert(sizeof(struct pf) <= 0xC0 && sizeof(struct sm) <= 0x40, "summon state must fit the control block");

static s32 iabs(s32 v) { return v < 0 ? -v : v; }
static s32 cheb(s32 dx, s32 dy) { dx = iabs(dx); dy = iabs(dy); return dx > dy ? dx : dy; }
static s32 cell_x(s32 x) { return x >> 11; }           /* 24.8 px -> cell, as enemy_pathing */
static s32 cell_y(s32 y) { return (y + 0x200) >> 11; }

/* Pet passability, as the summon's own probe 0x0800A950: class 0 and not the barrier byte, or bit 12. */
static int pet_open(s32 x, s32 y)
{
    s32 cx = cell_x(x), cy = cell_y(y);
    if (cx < 0 || cy < 0 || cx >= (s32)GRID_W || cy >= (s32)GRID_H) return 0;
    u32 v = GRID[cy * GRID_W + cx];
    return ((v & 0x0F00) == 0 && (v & 0xFF) != 1) || (v & 0x1000);
}

/* Buffer index of a cell in the field, or -1 (also for the forced-blocked edge columns). */
static s32 buf_index(s32 cx, s32 cy)
{
    struct pf *p = PF;
    s32 W = GRID_W, by = cy - p->oy + 1;
    if (cx < 1 || cx >= W - 1 || by < 1 || by > p->rows) return -1;
    return by * W + cx;
}

/* Field distance of a cell; a blocked cell (slope, pet in a wall) takes its best neighbour. */
static u32 dist_at(s32 cx, s32 cy)
{
    s32 i = buf_index(cx, cy), W = GRID_W, k;
    if (i < 0) return UNSEEN;
    const u8 *b = FIELD;
    u32 d = b[i];
    if (d >= BLOCKED)
        for (k = 0; k < 8; k++) {
            u32 v = b[i + STEP_DX(k) + STEP_DY(k) * W];
            if (v < d) d = v;
        }
    return d;
}

/* One field step per frame, shared with enemy_pathing (same seed rule as pf_approach). */
static void field_service(s32 sx, s32 sy)
{
    struct pf *p = PF;
    if (p->slice_frame == FRAME) return;
    p->slice_frame = FRAME;
    s32 mx = p->sx - sx, my = p->sy - sy;
    if (p->state == 2) slice();
    else if (p->state == 0 || mx >= REBUILD_MOVE || mx <= -REBUILD_MOVE || my >= REBUILD_MOVE ||
             my <= -REBUILD_MOVE || FRAME - p->done_frame > FIELD_MAX_AGE * 3 / 4)
        start_build(sx, sy);
}

/* Aim from the pet's cell toward the owner, down the field (enemy steering): the farthest of the
 * next LOOK cells it can see. 0 if the field has no route from here yet. */
static int home_aim(s32 pcx, s32 pcy, s32 *ax, s32 *ay)
{
    const u8 *b = FIELD;
    s32 W = GRID_W, i = buf_index(pcx, pcy), x = pcx, y = pcy, n, k, px[LOOK], py[LOOK];
    if (i < 0) return 0;
    for (n = 0; n < LOOK; n++) {
        s32 s = best_step(b, W, i);
        if (s < 0) break;
        x += STEP_DX(s);
        y += STEP_DY(s);
        i += STEP_DX(s) + STEP_DY(s) * W;
        px[n] = x;
        py[n] = y;
        if (b[i] == 0) { n++; break; }
    }
    if (n == 0) return 0;
    for (k = n - 1; k > 0; k--)
        if (los(pcx, pcy, px[k], py[k])) break;
    *ax = px[k] * 8 + 4;
    *ay = py[k] * 8 + 2;
    return 1;
}

/* Aim from the pet's cell toward a target that it cannot see: walk the target's downhill path to
 * the owner, find the cell of it nearest the pet, and aim at the cell up to LOOK steps before it
 * (toward the target) that the pet can see. Only the last LOOK+1 cells are kept (ring buffer):
 * no big arrays on the summon task's 3 KB stack. 0 if the pet cannot see the path. *plen: path
 * length from the pet to the target in cells (the aimed cell's index + the straight part). */
static int chase_aim(s32 pcx, s32 pcy, s32 tcx, s32 tcy, s32 *ax, s32 *ay, s32 *plen)
{
    const u8 *b = FIELD;
    s32 W = GRID_W, i = buf_index(tcx, tcy), x = tcx, y = tcy, k, j, best = 0x7FFF, wn = 0, at = 0;
    s32 rx[8], ry[8], wx[LOOK + 1], wy[LOOK + 1];
    if (i < 0) return 0;
    for (k = 0; k < CHAIN_MAX; k++) {
        rx[k & 7] = x;
        ry[k & 7] = y;
        s32 c = cheb(pcx - x, pcy - y);
        if (c < best) {
            best = c;
            at = k;
            wn = k < LOOK ? k + 1 : LOOK + 1;
            for (j = 0; j < wn; j++) {  /* oldest (nearest the target) first */
                wx[j] = rx[(k - wn + 1 + j) & 7];
                wy[j] = ry[(k - wn + 1 + j) & 7];
            }
            if (c == 0) break;
        }
        if (b[i] == 0) break;
        s32 s = best_step(b, W, i);
        if (s < 0) break;
        x += STEP_DX(s);
        y += STEP_DY(s);
        i += STEP_DX(s) + STEP_DY(s) * W;
    }
    for (j = 0; j < wn; j++)
        if (los(pcx, pcy, wx[j], wy[j])) {
            *ax = wx[j] * 8 + 4;
            *ay = wy[j] * 8 + 2;
            *plen = at - (wn - 1 - j) + cheb(pcx - wx[j], pcy - wy[j]);  /* along the path, then straight */
            return 1;
        }
    return 0;
}

/* Move the pet (x in F+0x70, y in R[5]) up to speed px toward (ax, ay) px, without entering a
 * closed cell or cutting a closed corner (a pet already inside a wall may move freely, toward
 * the open aim). Sets the heading (r8) and facing like the vanilla step. Returns 1 if it moved. */
static int step_toward(u8 *F, u32 *R, s32 ax, s32 ay, s32 speed, int ghost)
{
    s32 x = *(s32 *)(F + 0x70), y = (s32)R[5];
    s32 dx = ax - (x >> 8), dy = ay - (y >> 8);
    if (!dx && !dy) return 0;
    u32 a = (ARCTAN2(dx, dy) >> 8) & 0xFF;
    s32 vx, vy;
    if (dx * dx + dy * dy <= speed * speed) { vx = dx << 8; vy = dy << 8; }
    else { vx = speed * SIN[(a + 0x40) & 0xFF]; vy = speed * SIN[a]; }
    R[4] = a;
    *(u32 *)(F + 0x74) = FACING[a >> 4];
    s32 nx = x + vx, ny = y + vy;
    if (!ghost && pet_open(x, y)) {
        int both = pet_open(nx, ny) && (cell_x(nx) == cell_x(x) || cell_y(ny) == cell_y(y) ||
                                       (pet_open(nx, y) && pet_open(x, ny)));
        if (!both) {
            if (vx && pet_open(nx, y)) ny = y;
            else if (vy && pet_open(x, ny)) nx = x;
            else return 0;
        }
    }
    *(s32 *)(F + 0x70) = nx;
    R[5] = ny;
    return 1;
}

/* Line of sight to a target cell; a target standing on a closed (slope) cell counts as seen if
 * one of its open 4-neighbours is. */
static int los_target(s32 pcx, s32 pcy, s32 tcx, s32 tcy)
{
    s32 k;
    if (los(pcx, pcy, tcx, tcy)) return 1;
    if (open_at(tcx, tcy)) return 0;
    for (k = 4; k < 8; k++)
        if (open_at(tcx + STEP_DX(k), tcy + STEP_DY(k)) && los(pcx, pcy, tcx + STEP_DX(k), tcy + STEP_DY(k))) return 1;
    return 0;
}

static u8 *enemy_by_id(u32 id)
{
    u32 k;
    for (k = 0; k < 5; k++) {
        u8 *e = POOL + k * 0x454;
        if ((POOL_USED >> k & 1) && *(u16 *)(e + 2) == id) return e;
    }
    return 0;
}

static int alive(u8 *e) { return *(u16 *)(e + 0xC) != 0xB && *(s16 *)(e + 0x5C) != 0 && e[0x1DC] != 0; }

static int on_screen(u8 *e)
{
    s32 x = *(s32 *)(e + 0x14) >> 8, y = *(s32 *)(e + 0x18) >> 8, cx = CAM_X, cy = CAM_Y;
    return x >= cx - SCREEN_SIDE && x < cx + 240 + SCREEN_SIDE && y >= cy && y < cy + 160 + SCREEN_BELOW;
}

/* Owner position (px) and its field seed; field_ok says the field is seeded there. */
struct ctx { u8 *owner; s32 ox, oy, ocx, ocy; int field_ok; };

static void get_ctx(u8 *F, struct ctx *c)
{
    c->owner = ACTOR(*(u32 *)(F + 0x80));
    c->ox = *(s32 *)(c->owner + 0x94) >> 8;
    c->oy = *(s32 *)(c->owner + 0x98) >> 8;
    c->ocx = c->ox >> 3;
    c->ocy = (c->oy + 2) >> 3;
    field_service(c->ocx, c->ocy);
    c->field_ok = field_usable(c->ocx, c->ocy);
}

/* Reachability score of an enemy for the owner: field distance (cells), or the cell distance if
 * the owner sees it. 0x7FFF: unknown yet (field still building). 0xFFFF: unreachable. */
static u32 score(struct ctx *c, u8 *e)
{
    s32 ex = cell_x(*(s32 *)(e + 0x14)), ey = cell_y(*(s32 *)(e + 0x18));
    if (c->field_ok) {
        u32 d = dist_at(ex, ey);
        if (d <= MAX_PATH) return d;
        if (d <= DMAX) return 0xFFFF;  /* reachable, but a long detour */
    }
    if (los(c->ocx, c->ocy, ex, ey)) return cheb(ex - c->ocx, ey - c->ocy);
    return c->field_ok && PF->state == 3 ? 0xFFFF : 0x7FFF;
}

/* Closest on-screen, alive, reachable enemy to the owner: its id, or 0xFF. */
static u32 closest(struct ctx *c)
{
    struct sm *m = SM;
    u32 k, best = 0x7FFF, id = 0xFF;
    for (k = 0; k < 5; k++) {
        u8 *e = POOL + k * 0x454;
        if (!(POOL_USED >> k & 1) || !alive(e) || !on_screen(e)) continue;
        u32 eid = *(u16 *)(e + 2);
        if (eid == m->skip_id && (s32)(m->skip_until - FRAME) > 0) continue;
        u32 s = score(c, e);
        if (s < best) { best = s; id = eid; }
    }
    return id;
}

/* The mod runs only in a single-player session for a summon owned by the local player, on a map
 * enemy_pathing can serve. Otherwise every hook resumes the vanilla code. */
static int active(u8 *F)
{
    u32 owner = *(u32 *)(F + 0x80);
    if (owner > 3 || owner != *(u32 *)(F + 0x7C) || (LINK & 2)) return 0;
    /* enemy_pathing writes the magic at boot (or adopts the RAM in an old savestate); never adopt
     * from here, so without enemy_pathing this mod only ever reads one word */
    if (PF->magic != MAGIC || !map_check()) return 0;
    struct sm *m = SM;
    u32 key = *(u32 *)(F + 0x4C);
    if (m->magic != SM_MAGIC || m->key != key) {
        u32 *w = (u32 *)m, n;
        for (n = 0; n < sizeof(struct sm) / 4; n++) w[n] = 0;
        m->magic = SM_MAGIC;
        m->key = key;
        m->hit_frame = FRAME - ATTACK_EVERY;
        m->last_hp = *(u16 *)(ACTOR(owner) + 0xCC);
    }
    u16 hp = *(u16 *)(ACTOR(owner) + 0xCC);
    if (hp < m->last_hp) m->hurt = 1;
    m->last_hp = hp;
    /* dx/dy pointers used by the draw calls: set by the orbit step, but a return may start first */
    *(u32 *)(F + 0x9C) = (u32)(F + 0x48);
    *(u32 *)(F + 0xA0) = (u32)(F + 0x4A);
    return 1;
}

static u32 go_home(struct sm *m, u32 why)
{
    m->why = why;
    m->hbest = 0xFFFF;
    m->hstuck = 0;
    return RETURN;  /* hits cannot have changed since the last H_AFTER check */
}

static u32 chase(u8 *F, u32 *R)
{
    struct sm *m = SM;
    struct ctx c;
    u32 id = *(u32 *)(F + 0x60);
    u8 *e = *(u8 **)(F + 0x50);
    get_ctx(F, &c);
    if (id <= 3 || id >= 0xFF || enemy_by_id(id) != e || !alive(e) || !on_screen(e)) return go_home(m, WHY_GONE);
    s32 d = R[0];  /* px, computed by the game */
    if (m->tgt_id != id) {
        m->tgt_id = id;
        m->best = 0xFFFF;
        m->stuck = 0;
        m->aim_ok = 0;
        m->plen = 0x7FF;
        m->aim_frame = FRAME - AIM_EVERY;
    }
    s32 tdx = *(s16 *)(F + 0x48), tdy = *(s16 *)(F + 0x4A);  /* to the target, set by the game */
    if (d <= CONTACT || (iabs(tdx) <= CONTACT && iabs(tdy) <= CONTACT)) {  /* vanilla: distance, or the 7 px box */
        m->stuck = 0;
        m->best = d;
        if (FRAME - m->hit_frame >= ATTACK_EVERY) {
            m->hit_frame = FRAME;
            return HIT;
        }
        return CHASE_DRAW;  /* waiting for the next attack: stay */
    }
    s32 ecx = cell_x(*(s32 *)(e + 0x14)), ecy = cell_y(*(s32 *)(e + 0x18));
    s32 x = *(s32 *)(F + 0x70), y = R[5], pcx = cell_x(x), pcy = cell_y(y);
    u16 cell = pcy * GRID_W + pcx, tcell = ecy * GRID_W + ecx;
    if (m->aim_cell != cell || m->tgt_cell != tcell || FRAME - m->aim_frame >= AIM_EVERY) {
        m->aim_cell = cell;
        m->tgt_cell = tcell;
        m->aim_frame = FRAME;
        m->sees = d <= 16 || los_target(pcx, pcy, ecx, ecy);
        if (!m->sees) {
            if (c.field_ok && PF->state == 3 && dist_at(ecx, ecy) > MAX_PATH) {
                m->skip_id = id;
                m->skip_until = FRAME + SKIP_FRAMES;
                return go_home(m, WHY_NO_PATH);  /* complete field, no path to it */
            }
            s32 tx = c.ox, ty = c.oy, plen = m->plen;
            int ok = 0;
            if (c.field_ok) {
                if (chase_aim(pcx, pcy, ecx, ecy, &tx, &ty, &plen)) ok = 1;
                else if (home_aim(pcx, pcy, &tx, &ty)) {  /* rejoin its path via the owner */
                    u32 a = dist_at(pcx, pcy), b = dist_at(ecx, ecy);
                    if (a <= DMAX && b <= DMAX) plen = a + b;
                    ok = 1;
                } else { tx = c.ox; ty = c.oy; ok = PF->state == 3; }  /* no route from here: head for the owner */
            }
            if (ok) {  /* field building and no route yet: keep the old aim */
                m->plen = plen;
                m->aim_ok = 1;
                m->aim_x = tx;
                m->aim_y = ty;
            }
        }
    }
    s32 prog = m->sees ? d : m->plen * 8;  /* px to go: straight, or along the path */
    if (prog + 4 <= m->best) { m->best = prog; m->stuck = 0; }
    else if (++m->stuck > CHASE_STUCK) {
        m->skip_id = id;
        m->skip_until = FRAME + SKIP_FRAMES;
        return go_home(m, WHY_STUCK);
    }
    s32 ax = *(s32 *)(e + 0x14) >> 8, ay = *(s32 *)(e + 0x18) >> 8;
    if (!m->sees && m->aim_ok) { ax = m->aim_x; ay = m->aim_y; }
    /* close to the target it may stand on a slope cell: no collision for the last cell */
    step_toward(F, R, ax, ay, CHASE_SPEED, d <= 12);
    return CHASE_DRAW;
}

static u32 home(u8 *F, u32 *R)
{
    struct sm *m = SM;
    struct ctx c;
    get_ctx(F, &c);
    s32 x = *(s32 *)(F + 0x70), y = R[5];
    s32 dx = c.ox - (x >> 8), dy = c.oy - (y >> 8);
    *(s16 *)(F + 0x48) = dx;
    *(s16 *)(F + 0x4A) = dy;
    s32 d = SQRT(dx * dx + dy * dy);
    if (d <= 7) {
        m->ghost = 0;
        m->hbest = 0xFFFF;
        m->hstuck = 0;
        return ORBIT_ENTRY;
    }
    if (d + 4 <= m->hbest) { m->hbest = d; m->hstuck = 0; }
    else if (++m->hstuck > HOME_STUCK) m->ghost = 1;
    s32 ax = c.ox, ay = c.oy, pcx = cell_x(x), pcy = cell_y(y), tx, ty;
    if (!m->ghost && c.field_ok && !los(pcx, pcy, c.ocx, c.ocy) && home_aim(pcx, pcy, &tx, &ty)) { ax = tx; ay = ty; }
    step_toward(F, R, ax, ay, HOME_SPEED, m->ghost);
    return HOME_DRAW;
}

__attribute__((used)) static u32 sm_hook(u32 n, u8 *F, u32 *R)
{
    struct sm *m = SM;
    if (n == H_ORBIT) {  /* top of the orbit step; replaced `ldr r0,[sp,#0x88]; adds r3,r0,#0` */
        u32 cnt = *(u32 *)(F + 0x88);
        if (active(F)) {
            struct ctx c;
            get_ctx(F, &c);
            s32 dx = c.ox - (*(s32 *)(F + 0x70) >> 8), dy = c.oy - ((s32)R[5] >> 8);
            m->hbest = 0xFFFF;
            m->hstuck = 0;
            if (dx * dx + dy * dy > ORBIT_LEASH * ORBIT_LEASH) return go_home(m, WHY_LEASH);
            if (cnt <= 0x3C) {  /* during the wait: circle where the owner is now */
                *(s32 *)(F + 0x90) = *(s32 *)(c.owner + 0x94);
                *(s32 *)(F + 0x94) = *(s32 *)(c.owner + 0x98);
                if (cnt < 0x3C - ORBIT_WAIT) cnt = 0x3C - ORBIT_WAIT;
            }
        }
        R[0] = R[3] = cnt;
        return ORBIT_CONT;
    }
    if (n == H_SEARCH) {  /* replaced `bl 0x08074664` (r0 half-angle, r1 range) */
        if (active(F)) {
            struct ctx c;
            get_ctx(F, &c);
            R[0] = closest(&c);
            if (R[0] != 0xFF) { m->hurt = 0; m->tgt_id = 0; }
        } else R[0] = ORIG_SEARCH(R[0], R[1]);
        return SEARCH_CONT;
    }
    if (n == H_CONTACT) {  /* replaced `movs r2,#0; mov sb,r2` before the contact scan */
        R[2] = R[6] = 0;
        return active(F) && *(u32 *)(F + 0x60) > 3 ? CHASE_CHECKS : CONTACT_CONT;
    }
    if (n == H_CHASE) {  /* replaced `cmp r0,#7; bhi` (r0 = distance to the target) */
        if (active(F) && *(u32 *)(F + 0x60) > 3) return chase(F, R);
        return R[0] > 7 ? CHASE_MOVE : HIT;
    }
    if (n == H_AFTER) {  /* replaced `ldr r2,[sp,#0x68]; cmp r2,#0` at the return entry */
        if (*(u32 *)(F + 0x68) == 0) return END;
        if (!active(F)) return RETURN;
        if (FRAME - m->hit_frame > 30) return RETURN;  /* vanilla give-up, not an attack */
        /* right after an attack (or the target died during it): keep fighting? */
        u32 id = *(u32 *)(F + 0x60);
        u8 *e = *(u8 **)(F + 0x50);
        if (id <= 3 || id >= 0xFF || enemy_by_id(id) != e || !alive(e) || !on_screen(e)) return go_home(m, WHY_GONE);
        if (m->hurt) {
            struct ctx c;
            m->hurt = 0;
            get_ctx(F, &c);
            if (closest(&c) != id) return go_home(m, WHY_RESCUE);  /* the owner is being hit by someone else */
        }
        return CHASE_LOOP;
    }
    if (n == H_HOME) {  /* replaced `ldr r0,[sp,#0x80]; cmp r0,#3` at the return loop head */
        if (active(F)) return home(F, R);
        return *(u32 *)(F + 0x80) > 3 ? HOME_OTHER : HOME_OWNER;
    }
    return END;  /* not reached */
}
