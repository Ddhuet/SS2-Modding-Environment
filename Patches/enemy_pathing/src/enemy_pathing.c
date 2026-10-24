/* enemy_pathing: flow-field pathfinding for SS2 enemies (CN baseline / English ROM).
 *
 * Compiled as ONE freestanding Thumb (ARMv4T) blob placed at CODE_BASE by build.py. It must not
 * contain relocations: helpers are static, game functions are called through absolute pointers,
 * there is no division (no libgcc) and no .rodata, and the ARM inner loop lives in this unit.
 *
 * Entry points (build.py reads their offsets with llvm-nm):
 *   pf_boot()             replaces `bl 0x08001404` (heap init) at 0x080006B8
 *   pf_approach(e, dist)  replaces `bl 0x08016780` (chase target) at 0x0801736E and 0x080173BA
 *   pf_keep(e)            replaces `bl 0x08017924` (cull test) at 0x08018DD4
 *
 * What it does: an enemy in the chase state whose target player is not in line of sight (8x8
 * collision cells) steers by a BFS distance field seeded at the player's cell, instead of the
 * game's straight line. With line of sight, the game's own logic runs untouched (including when
 * to attack), so enemies no longer attack walls. A path-following enemy outside the game's
 * 480x320 cull box is kept alive while its path is short.
 *
 * RAM (EWRAM, PF_BASE..PF_BASE+0x20FF): control block, one u8 field, u16 BFS queue.
 *  - Power-on: the heap end literal is lowered 0x0203FFF0 -> 0x0203CFF0 (0x08001488), so
 *    0x0203D000..0x0203FFFF is never heap; pf_boot() writes MAGIC there.
 *  - A savestate made without the mod: the block has no MAGIC. pf "adopts" the range if it lies
 *    in the heap's free tail: it splits that free block exactly like the game's malloc does and
 *    keeps the tail as a permanently used block. If the range is not free it stays dormant.
 * IWRAM 0x03007800..0x0300791F: copy of the ARM BFS loop (checked and recopied before each use).
 *
 * Field layout: a band of R full-width map rows (stride = map width W) with one guard row above
 * and below, so buffer index = grid index - (oy - 1) * W. Columns 0 and W-1 are forced BLOCKED,
 * which stops the +-1 neighbours from wrapping between rows. Bytes: distance 0..DMAX, UNSEEN,
 * BLOCKED. Cells are classified lazily: only cells the BFS touches cost a grid read. Distances
 * are final once written, so enemies steer from a field that is still being built.
 */
#include "pf_core.h"

void pf_boot(void)
{
    ORIG_HEAP_INIT();
    init_block();
}

void pf_approach(u8 *e, u32 dist)
{
    struct pf *p = PF;
    ORIG_APPROACH(e, dist);
    if (!map_check()) return;
    if (e[0x201] & 2) return;  /* chasing another enemy, not a player */
    u32 slot = *(u16 *)e;
    if (slot >= 5) return;
    s32 tx = *(s32 *)(e + 0x24), ty = *(s32 *)(e + 0x28);
    s32 sx = tx >> 3, sy = (ty + 2) >> 3;
    s32 ex = (*(s32 *)(e + 0x14)) >> 11, ey = ((*(s32 *)(e + 0x18)) + 0x200) >> 11;
    u32 refresh = ((FRAME + slot) & (LOS_EVERY - 1)) == 0;
    if (p->los[slot] == 0 || refresh) p->los[slot] = los(ex, ey, sx, sy) ? 1 : 2;
    if (p->los[slot] == 1) return;  /* clear line: vanilla chase/attack */

    if (p->slice_frame != FRAME) {  /* at most one field step per frame, shared by all enemies */
        p->slice_frame = FRAME;
        s32 mx = p->sx - sx, my = p->sy - sy;
        if (p->state == 2) slice();
        else if (p->state == 0 || mx >= REBUILD_MOVE || mx <= -REBUILD_MOVE || my >= REBUILD_MOVE ||
                 my <= -REBUILD_MOVE || FRAME - p->done_frame > FIELD_MAX_AGE * 3 / 4)
            start_build(sx, sy);
    }
    if (!field_usable(sx, sy)) return;
    s32 cell = ey * GRID_W + ex;
    if (!p->steer[slot] || p->steer_cell[slot] != (u16)cell || refresh) {
        s32 c = steer(e);
        if (c > 0 || p->state == 3) p->steer[slot] = c < 0 ? 0 : c;  /* building: keep the old aim */
        p->steer_cell[slot] = cell;
    }
    s32 c = p->steer[slot];
    if (!c) return;
    *(u16 *)(e + 4) = c;  /* overrides a vanilla 0 too: no attacking through walls */
    p->stamp[slot] = FRAME;
}

u32 pf_keep(u8 *e)
{
    struct pf *p = PF;
    u32 r = ORIG_KEEP(e), slot = *(u16 *)e;
    if (p->magic != MAGIC || slot >= 5) return r;
    if (r) { p->leash[slot] = 0; return r; }
    if (p->state < 2 || FRAME - p->stamp[slot] > STEER_FRESH || p->leash[slot] >= LEASH_FRAMES) return 0;
    s32 i = enemy_index(e), W = GRID_W, k;
    if (i < 0) return 0;
    const u8 *b = FIELD;
    u32 d = b[i];  /* enemies often stand on slope cells (BLOCKED in the field): use the best neighbour */
    for (k = 0; k < 8; k++) {
        u32 v = b[i + STEP_DX(k) + STEP_DY(k) * W];
        if (v < d) d = v;
    }
    if (d > LEASH_CELLS && !(d == UNSEEN && p->state == 2 && p->leash[slot])) return 0;
    p->leash[slot]++;
    return 1;
}
