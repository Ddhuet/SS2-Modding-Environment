/* pf_core.h: the enemy_pathing flow field (RAM block, BFS, line of sight, steering helpers).
 * Shared by enemy_pathing.c and summon/src/summon_ai.c; each includes it once into its own blob.
 * bfs_arm must stay the first code in the including file (build scripts check). */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;

#define FRAME (*(volatile u32 *)0x030023E4)     /* game frame counter */
#define MAP 0x03003210u                         /* map struct */
#define GRID (*(u16 *volatile *)(MAP + 0x68))  /* collision grid used by enemies (probe flags 2) */
#define GRID_W (*(volatile u16 *)(MAP + 0x78))
#define GRID_H (*(volatile u16 *)(MAP + 0x7A))
#define HEAP_CTL ((volatile u32 *)0x03002410)   /* heap ring head: +4 = first block */

#define ORIG_HEAP_INIT ((void (*)(void))0x08001405)
#define ORIG_APPROACH ((void (*)(u8 *, u32))0x08016781)
#define ORIG_KEEP ((u32(*)(u8 *))0x08017925)
#define ORIG_DIR ((u32(*)(s32, s32, s32, s32, s32))0x080166C9)  /* (x, y 24.8; tx, ty px; min dist) -> d-pad */

#define MAGIC 0x32504650u  /* "PFP2" */
#define BUFSZ 6144
#define QMASK 1023         /* u16 queue of buffer indices */
#define UNSEEN 0xFF
#define BLOCKED 0xFE
#define DMAX 250

/* Tunables */
#define BFS_CELLS 256       /* BFS cells expanded per frame (~100 cycles each from IWRAM) */
#define LOS_EVERY 4         /* line-of-sight / steering refresh period per enemy (staggered) */
#define REBUILD_MOVE 2      /* rebuild once the target is this many cells from the seed */
#define SEED_SLACK 4        /* steer by a field whose seed is within this many cells of the target */
#define FIELD_MAX_AGE 120   /* frames; rebuilt after 3/4 of this even if the target stands still */
#define LEASH_CELLS 80      /* keep a path-following enemy alive up to this path distance */
#define LEASH_FRAMES 600    /* ... for at most this many frames outside the cull box */
#define STEER_FRESH 30      /* frames since the last path step for the leash to apply */
#define LOOKAHEAD 6         /* cells followed down the field when choosing a visible aim point */

struct pf {
    u32 magic;
    /* BFS state, read and written by bfs_arm (offsets fixed: see the asm) */
    u8 *bb;                 /* +0x04 buffer */
    u16 *gk;                /* +0x08 grid pointer biased so gk[i] is the cell of buffer index i */
    u32 qh, qt, w, budget;  /* +0x0C.. */
    u32 slice_frame;
    u16 *sig_grid;
    u16 sig_w, sig_h;
    u32 sig_sum, sig_frame; /* sampled grid checksum, and the frame it was last checked */
    u8 state;               /* 0 no field, 2 building, 3 complete */
    u8 pad0[3];
    s16 oy, rows, sx, sy;   /* field: first map row of the band, rows, seed cell */
    u32 done_frame;         /* frame the field was completed */
    u32 stamp[5];           /* frame of the last path step, per enemy slot */
    u16 leash[5];           /* frames kept alive outside the cull box, per slot */
    u8 los[5];              /* cached line of sight, per slot: 0 unknown, 1 clear, 2 blocked */
    u8 steer[5];            /* cached steering code, per slot (0 none) */
    u16 steer_cell[5];      /* grid index the cached code was computed at */
};

#ifndef PF_BASE
#define PF_BASE 0x0203D000u
#endif
#define PF_SIZE 0x2100u
#define STR_(x) #x
#define STR(x) STR_(x)
#define PF ((struct pf *)PF_BASE)
#define FIELD ((u8 *)(PF_BASE + 0x100))
#define QUEUE_ADDR (PF_BASE + 0x1900)  /* 1024 x 2 B, to PF_BASE + 0x20FF */
#define QUEUE ((u16 *)QUEUE_ADDR)
#define IWRAM_CODE ((u32 *)0x03007800)  /* 288 B between the last IWRAM global (0x030077B3) and the stack */
#define ARM_WORDS 72
#ifndef CODE_BASE
#error CODE_BASE must be defined by build.py
#endif

_Static_assert(__builtin_offsetof(struct pf, bb) == 0x04, "bfs_arm offsets");
_Static_assert(__builtin_offsetof(struct pf, qh) == 0x0C, "bfs_arm offsets");
_Static_assert(__builtin_offsetof(struct pf, budget) == 0x18, "bfs_arm offsets");
_Static_assert(sizeof(struct pf) <= 0x100, "control block");

/* bfs_arm(PF): expand up to PF->budget cells. Returns 0 budget used, 1 queue empty, 2 overflow.
 * ARM code; it must be the first thing in the blob (build.py checks) because pf copies it from
 * CODE_BASE to IWRAM_CODE and runs it there (1-cycle 32-bit fetch, cheap branches).
 * r0 b, r1 gk, r2 queue, r3 qh, r4 qt, r5 i, r6 d, r7 tmp, r8 budget, r9 mask, r10 W, r11 PF, r12 j.
 * Open cell: (v & 0xFFF) < 0x100 and != 1 (class bits 8..11 zero, low byte not the enemy barrier). */
asm(".text\n.syntax unified\n.arm\n.align 2\n.type bfs_arm, %function\nbfs_arm:\n"
    "  stmfd sp!, {r4-r11, lr}\n  mov r11, r0\n"
    "  ldr r3, [r11, #0x0C]\n  ldr r4, [r11, #0x10]\n  ldr r10, [r11, #0x14]\n  ldr r8, [r11, #0x18]\n"
    "  ldr r0, [r11, #0x04]\n  ldr r1, [r11, #0x08]\n  ldr r2, 90f\n  ldr r9, 91f\n"
    "1:\n  cmp r3, r4\n  moveq r0, #1\n  beq 9f\n"
    "  subs r8, r8, #1\n  movmi r0, #0\n  bmi 9f\n"
    "  add r7, r2, r3, lsl #1\n  ldrh r5, [r7]\n  add r3, r3, #1\n  and r3, r3, r9\n"
    "  ldrb r6, [r0, r5]\n  add r6, r6, #1\n  cmp r6, #250\n  bhi 1b\n"
    "  sub r12, r5, #1\n  ldrb r7, [r0, r12]\n  cmp r7, #0xFF\n  moveq lr, pc\n  beq 20f\n"
    "  add r12, r5, #1\n  ldrb r7, [r0, r12]\n  cmp r7, #0xFF\n  moveq lr, pc\n  beq 20f\n"
    "  sub r12, r5, r10\n  ldrb r7, [r0, r12]\n  cmp r7, #0xFF\n  moveq lr, pc\n  beq 20f\n"
    "  add r12, r5, r10\n  ldrb r7, [r0, r12]\n  cmp r7, #0xFF\n  moveq lr, pc\n  beq 20f\n"
    "  b 1b\n"
    "20:\n  add r7, r1, r12, lsl #1\n  ldrh r7, [r7]\n  mov r7, r7, lsl #20\n  mov r7, r7, lsr #20\n"
    "  cmp r7, #1\n  cmpne r7, #0x100\n  movhs r7, #0xFE\n  strbhs r7, [r0, r12]\n  movhs pc, lr\n"  /* ==1 also sets C */
    "  strb r6, [r0, r12]\n  add r7, r2, r4, lsl #1\n  strh r12, [r7]\n  add r4, r4, #1\n  and r4, r4, r9\n"
    "  cmp r4, r3\n  movne pc, lr\n  mov r0, #2\n"
    "9:\n  str r3, [r11, #0x0C]\n  str r4, [r11, #0x10]\n  ldmfd sp!, {r4-r11, lr}\n  bx lr\n"
    "90:\n  .word " STR(QUEUE_ADDR) "\n91:\n  .word 1023\n"
    ".size bfs_arm, .-bfs_arm\n.global bfs_arm_end\nbfs_arm_end:\n.thumb\n");

/* k: 0 UL, 1 UR, 2 DL, 3 DR, 4 L, 5 R, 6 U, 7 D. Packed (value + 1) per nibble: no .rodata. */
#define STEP_DX(k) ((s32)((0x11202020u >> ((k) * 4)) & 0xF) - 1)
#define STEP_DY(k) ((s32)((0x20112200u >> ((k) * 4)) & 0xF) - 1)

static inline int open_cell(u32 v) { return (v & 0x0FFF) != 0x0001 && (v & 0x0F00) == 0; }

static int open_at(s32 x, s32 y)
{
    if (x < 0 || y < 0 || x >= (s32)GRID_W || y >= (s32)GRID_H) return 0;
    return open_cell(GRID[y * GRID_W + x]);
}

/* Cell line of sight (Bresenham). Diagonal steps need both side cells open, so it cannot see
 * through a one-cell diagonal crack. The start cell is not tested (enemies may stand on slopes). */
static int los(s32 x0, s32 y0, s32 x1, s32 y1)
{
    s32 dx = x1 - x0, dy = y1 - y0;
    s32 sx = dx < 0 ? -1 : 1, sy = dy < 0 ? -1 : 1;
    if (dx < 0) dx = -dx;
    if (dy < 0) dy = -dy;
    s32 err = dx - dy;
    while (x0 != x1 || y0 != y1) {
        s32 e2 = 2 * err, mx = 0, my = 0;
        if (e2 > -dy) { err -= dy; mx = sx; }
        if (e2 < dx) { err += dx; my = sy; }
        if (mx && my && !(open_at(x0 + mx, y0) && open_at(x0, y0 + my))) return 0;
        x0 += mx;
        y0 += my;
        if (!open_at(x0, y0)) return 0;
    }
    return 1;
}

static s32 clampi(s32 v, s32 lo, s32 hi) { return v < lo ? lo : v > hi ? hi : v; }

/* BIOS CpuFastSet (SWI 0x0C), fill mode; words is a multiple of 8. */
static void fast_fill(void *dst, u32 words, u32 value)
{
    volatile u32 src = value;
    register u32 r0 asm("r0") = (u32)&src;
    register u32 r1 asm("r1") = (u32)dst;
    register u32 r2 asm("r2") = words | (1u << 24);
    asm volatile("svc #0x0C" : "+r"(r0), "+r"(r1), "+r"(r2) : : "r3", "memory");
}

/* Start a field at seed (sx, sy): clear to UNSEEN, wall the band, seed the target cell (or the
 * open cells around it). The clear is ~10k cycles, so the BFS itself starts next frame. */
static void start_build(s32 sx, s32 sy)
{
    struct pf *p = PF;
    u8 *b = FIELD;
    u16 *q = QUEUE;
    s32 W = GRID_W, H = GRID_H, rows = H, y, x, r, dx, dy, n = 0;
    while ((rows + 2) * W > BUFSZ) rows--;  /* no division: no libgcc */
    s32 oy = clampi(sy - (rows >> 1), 0, H - rows);
    u16 *gk = GRID + (oy - 1) * W;
    fast_fill(b, BUFSZ / 4, 0xFFFFFFFFu);
    for (x = 0; x < W; x++) { b[x] = BLOCKED; b[(rows + 1) * W + x] = BLOCKED; }
    for (y = 1; y <= rows; y++) { b[y * W] = BLOCKED; b[y * W + W - 1] = BLOCKED; }
    p->oy = oy;
    p->rows = rows;
    p->sx = sx;
    p->sy = sy;
    p->bb = b;
    p->gk = gk;
    p->w = W;
    p->qh = p->qt = 0;
    for (r = 0; r <= 1 && n == 0; r++)
        for (dy = -r; dy <= r; dy++)
            for (dx = -r; dx <= r; dx++) {
                s32 cx = sx + dx, by = sy + dy - oy + 1;
                if (cx < 1 || cx >= W - 1 || by < 1 || by > rows) continue;
                u32 i = by * W + cx;
                if (b[i] != UNSEEN) continue;
                if (!open_cell(gk[i])) { b[i] = BLOCKED; continue; }
                b[i] = 0;
                q[p->qt++] = i;
                n++;
            }
    p->state = n ? 2 : 0;  /* target cell enclosed: no field */
}

/* Copy the ARM BFS loop to IWRAM if it is missing or damaged, then run it. */
static u32 bfs_run(struct pf *p)
{
    const u32 *src = (const u32 *)CODE_BASE;
    u32 *dst = IWRAM_CODE, n;
    if (dst[0] != src[0] || dst[ARM_WORDS - 1] != src[ARM_WORDS - 1] || dst[ARM_WORDS / 2] != src[ARM_WORDS / 2])
        for (n = 0; n < ARM_WORDS; n++) dst[n] = src[n];
    return ((u32(*)(struct pf *))IWRAM_CODE)(p);
}

static void slice(void)
{
    struct pf *p = PF;
    p->budget = BFS_CELLS;
    u32 r = bfs_run(p);
    if (r == 2) p->state = 0;  /* frontier larger than the queue: drop this field */
    else if (r == 1) { p->state = 3; p->done_frame = FRAME; }
}

/* Buffer index of an enemy's cell in the field, or -1. */
static s32 enemy_index(u8 *e)
{
    struct pf *p = PF;
    s32 W = GRID_W;
    s32 cx = (*(s32 *)(e + 0x14)) >> 11, cy = ((*(s32 *)(e + 0x18)) + 0x200) >> 11;
    s32 by = cy - p->oy + 1;
    if (cx < 0 || cx >= W || by < 1 || by > p->rows) return -1;
    return by * W + cx;
}

/* One downhill step from buffer index i: returns the neighbour k (0..7) or -1. Diagonals need
 * both side cells open, so a step never cuts a wall corner. Works on a partly built field:
 * UNSEEN counts as not reached. */
static s32 best_step(const u8 *b, s32 W, s32 i)
{
    u32 best = b[i], k, pick = 8;
    if (best >= BLOCKED) best = BLOCKED;
    s32 l = b[i - 1] < BLOCKED, r = b[i + 1] < BLOCKED, u = b[i - W] < BLOCKED, dn = b[i + W] < BLOCKED;
    for (k = 0; k < 8; k++) {
        s32 dx = STEP_DX(k), dy = STEP_DY(k);
        if (dx && dy && !((dx < 0 ? l : r) && (dy < 0 ? u : dn))) continue;
        u32 v = b[i + dx + dy * W];
        if (v < best) { best = v; pick = k; }
    }
    return pick < 8 ? (s32)pick : -1;
}

static u32 code_of(s32 dx, s32 dy)
{
    return (dx > 0 ? 0x10 : dx < 0 ? 0x20 : 0) | (dy > 0 ? 0x80 : dy < 0 ? 0x40 : 0);
}

/* Steering code for an enemy without line of sight, or -1. Follows the field downhill up to
 * LOOKAHEAD cells, then aims (game direction function: ArcTan2 rounded to 8 ways) at the
 * farthest of those cells it can see. That keeps diagonal corridors and stairs smooth instead
 * of alternating between two directions. */
static s32 steer(u8 *e)
{
    const u8 *b = FIELD;
    s32 W = GRID_W, i = enemy_index(e), n, k;
    s32 x, y, px[LOOKAHEAD], py[LOOKAHEAD];
    if (i < 0) return -1;
    s32 cx = (*(s32 *)(e + 0x14)) >> 11, cy = ((*(s32 *)(e + 0x18)) + 0x200) >> 11;
    for (n = 0, x = cx, y = cy; n < LOOKAHEAD; n++) {
        s32 s = best_step(b, W, i);
        if (s < 0) break;
        x += STEP_DX(s);
        y += STEP_DY(s);
        i += STEP_DX(s) + STEP_DY(s) * W;
        px[n] = x;
        py[n] = y;
        if (b[i] == 0) { n++; break; }
    }
    if (n == 0) return -1;
    for (k = n - 1; k > 0; k--)
        if (los(cx, cy, px[k], py[k])) break;
    if (k > 0) {
        u32 c = ORIG_DIR(*(s32 *)(e + 0x14), *(s32 *)(e + 0x18), px[k] * 8 + 4, py[k] * 8 + 2, 0);
        if (c) return c;
    }
    return code_of(px[0] - cx, py[0] - cy);
}

static int field_usable(s32 sx, s32 sy)
{
    struct pf *p = PF;
    s32 dx = p->sx - sx, dy = p->sy - sy;
    if (p->state < 2) return 0;
    if (dx < -SEED_SLACK || dx > SEED_SLACK || dy < -SEED_SLACK || dy > SEED_SLACK) return 0;
    return p->state == 2 || FRAME - p->done_frame <= FIELD_MAX_AGE;
}

/* 32 cells on the two diagonals: a new floor (often the same heap address and size) or a
 * regenerated random map changes this. */
static u32 grid_sum(void)
{
    const u16 *g = GRID;
    s32 W = GRID_W, H = GRID_H, k;
    u32 sum = 0;
    for (k = 0; k < 16; k++) {
        s32 y = (k * H) >> 4, x = (k * W) >> 4;
        sum = (sum << 3 | sum >> 29) ^ g[y * W + x] ^ ((u32)g[y * W + W - 1 - x] << 16);
    }
    return sum;
}

static void init_block(void)
{
    u32 *w = (u32 *)PF, n;
    for (n = 0; n < sizeof(struct pf) / 4; n++) w[n] = 0;
    PF->magic = MAGIC;
}

/* Savestate made without the mod: claim PF_BASE..+PF_SIZE if it lies in a free heap block that
 * reaches past it, by splitting that block the way malloc 0x08001494 does (block header: +0 prev
 * block | bit31 used, +4 next block). The tail becomes a used block that is never freed.
 * Vanilla quirk: the last free block's next pointer can be damaged by stray game writes (seen in
 * user states: 0x0203FF01 for 0x0203FFF0, and 0xFFFFFFFF). The game only does arithmetic on it,
 * so the address is masked here; the new block keeps it, or the real end sentinel if it is wild. */
static int adopt(void)
{
    u32 x = PF_BASE - 0x10, a = HEAP_CTL[1], n;
    for (n = 0; n < 1024; n++) {
        if (a < 0x02000000 || a >= 0x02040000 || (a & 3)) return 0;
        volatile u32 *h = (volatile u32 *)a;
        u32 next = h[1], na = next & ~3u;
        if (a <= x && x < na) {
            if ((h[0] >> 31) || na < PF_BASE + PF_SIZE || x - a < 0x20) return 0;
            volatile u32 *t = (volatile u32 *)x, *c = (volatile u32 *)na;
            t[0] = a | 0x80000000u;
            t[1] = na < 0x02040000 ? next : 0x0203FFF0u;  /* seen in a user state: next = 0xFFFFFFFF */
            t[2] = t[3] = 0;
            if (na < 0x02040000) c[0] = x | (c[0] & 0x80000000u);
            h[1] = x;
            return 1;
        }
        if (na <= a) return 0;
        a = na;
    }
    return 0;
}

static int map_check(void)
{
    struct pf *p = PF;
    if (p->magic != MAGIC) {
        if ((FRAME & 63) != 0 || !adopt()) return 0;
        init_block();
    }
    if (GRID_W < 3 || GRID_W > BUFSZ / 32 || GRID_H < 3) return 0;
    if (p->sig_grid != GRID || p->sig_w != GRID_W || p->sig_h != GRID_H || p->sig_frame != FRAME) {
        u32 sum = grid_sum();
        if (p->sig_grid != GRID || p->sig_w != GRID_W || p->sig_h != GRID_H || p->sig_sum != sum) {
            u32 k;
            p->sig_grid = GRID;
            p->sig_w = GRID_W;
            p->sig_h = GRID_H;
            p->sig_sum = sum;
            p->state = 0;
            for (k = 0; k < 5; k++) p->steer[k] = 0;
        }
        p->sig_frame = FRAME;
    }
    return 1;
}

