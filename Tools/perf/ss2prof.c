/* ss2prof: cycle-exact profiler for Shining Soul II (CN baseline / English ROM family)
 * on the project's mGBA 0.10.5 core. See tools/perf/README.md.
 *
 * Every instruction's cost in bus cycles (wait states included) is charged to its PC
 * (self) and to every function on a shadow call stack (inclusive). The game runs
 * cooperative tasks with one stack each, so one shadow stack is kept per task.
 * HALT (VBlankIntrWait) and event/DMA time are kept apart from CPU time.
 */
#include <mgba/core/core.h>
#include <mgba/core/blip_buf.h>
#include <mgba/core/log.h>
#include <mgba/core/serialize.h>
#include <mgba/core/timing.h>
#include <mgba/internal/arm/arm.h>
#include <mgba/internal/gba/gba.h>
#include <mgba-util/vfs.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* Game constants (identical in CN baseline, English phase1d and the modpack). */
#define TASK_CURRENT   0x030012D4u  /* current task record */
#define SCHED_SP       0x030012E0u  /* scheduler's saved sp */
#define PC_RESUME      0x08000308u  /* mov sp,r1: switch into a task */
#define PC_YIELD_OUT   0x08000414u  /* mov sp,r0: yield back to scheduler */
#define PC_EXIT_OUT    0x08000360u  /* mov sp,r0: task exit back to scheduler */
#define PC_VBLANKWAIT  0x080B9AA2u  /* svc 5 (VBlankIntrWait) used once per game frame */
#define FRAME_CYCLES   280896

static void quiet_log(struct mLogger* l, int cat, enum mLogLevel level, const char* fmt, va_list args) {
    (void) l; (void) cat;
    if (level == mLOG_FATAL || level == mLOG_ERROR) { vfprintf(stderr, fmt, args); fputc('\n', stderr); }
}
static struct mLogger logger = { quiet_log, NULL };

/* ---- open-addressing u64 -> {a,b,c} map ---- */
typedef struct { uint64_t key, a, b, c; } Ent;
typedef struct { Ent* e; size_t cap, n; } Map;
static void minit(Map* m, size_t cap) {
    m->cap = cap; m->n = 0; m->e = malloc(cap * sizeof(Ent));
    for (size_t i = 0; i < cap; i++) { m->e[i].key = ~0ULL; m->e[i].a = m->e[i].b = m->e[i].c = 0; }
}
static Ent* mget(Map* m, uint64_t k) {
    size_t h = ((k * 0x9E3779B97F4A7C15ULL) >> 20) % m->cap;
    for (;;) {
        Ent* e = &m->e[h];
        if (e->key == k) return e;
        if (e->key == ~0ULL) {
            if (m->n * 2 > m->cap) { fprintf(stderr, "map full\n"); exit(2); }
            e->key = k; m->n++; return e;
        }
        h = (h + 1) % m->cap;
    }
}
#define EACH(m, e) for (Ent* e = (m).e; e < (m).e + (m).cap; e++) if (e->key != ~0ULL)

/* ---- shadow stacks, one per task ---- */
#define MAXD 256
#define MAXCTX 128
#define IRQ_FUNC 0x18u
typedef struct { uint32_t func, ret, mode, sp, fresh; } Frame;
typedef struct { uint32_t id; int depth; Frame st[MAXD]; uint64_t cycles, resumes, fcyc; } Ctx;
static Frame st[MAXD]; static int depth;
static Ctx ctxs[MAXCTX]; static int nctx, cur = -1;
static uint64_t overflow;

static Ctx* ctx_for(uint32_t id) {
    for (int i = 0; i < nctx; i++) if (ctxs[i].id == id) return &ctxs[i];
    if (nctx == MAXCTX) { fprintf(stderr, "too many tasks\n"); exit(3); }
    ctxs[nctx].id = id; ctxs[nctx].depth = 0;
    return &ctxs[nctx++];
}
static void switch_ctx(uint32_t id) {
    if (cur >= 0) { ctxs[cur].depth = depth; memcpy(ctxs[cur].st, st, sizeof(Frame) * depth); }
    Ctx* c = ctx_for(id); cur = c - ctxs;
    depth = c->depth; memcpy(st, c->st, sizeof(Frame) * depth); c->resumes++;
}

static Map pcs, funcs, edges, rets, ctxf, swis, irqs, copies;

static void push(uint32_t func, uint32_t ret, uint32_t mode, uint32_t sp) {
    if (depth >= MAXD) { overflow++; return; }
    st[depth] = (Frame) { func, ret, mode, sp, 1 }; depth++;
    mget(&funcs, func)->c++;
}

/* ---- input schedule: "N[:KEYS] ..." with KEYS like A, B+LEFT ---- */
static uint32_t keymask(const char* s) {
    static const char* names[] = { "A", "B", "SELECT", "START", "RIGHT", "LEFT", "UP", "DOWN", "R", "L" };
    uint32_t m = 0; char buf[128]; strncpy(buf, s, sizeof buf - 1); buf[sizeof buf - 1] = 0;
    char* sv = NULL;
    for (char* t = strtok_r(buf, "+", &sv); t; t = strtok_r(NULL, "+", &sv)) {
        int ok = 0;
        for (int i = 0; i < 10; i++) if (!strcmp(t, names[i])) { m |= 1u << i; ok = 1; }
        if (!ok) { fprintf(stderr, "bad key %s\n", t); exit(1); }
    }
    return m;
}
static uint32_t* schedule(const char* seq, int* total) {
    uint32_t* k = NULL; int n = 0; char* s = strdup(seq);
    char* sv = NULL;
    for (char* tok = strtok_r(s, " ", &sv); tok; tok = strtok_r(NULL, " ", &sv)) {
        char* colon = strchr(tok, ':'); uint32_t m = 0;
        if (colon) { *colon = 0; m = keymask(colon + 1); }
        char* save = strdup(tok); int cnt = atoi(save); free(save);
        k = realloc(k, sizeof(uint32_t) * (n + cnt));
        for (int i = 0; i < cnt; i++) k[n++] = m;
    }
    free(s); *total = n; return k;
}

static void usage(void) {
    fprintf(stderr,
        "usage: ss2prof [options] ROM OUTDIR\n"
        "  --state FILE     load an mGBA savestate (.ss0/.ss1); otherwise cold boot\n"
        "  --save FILE      cartridge save for a cold boot (read only; never written back)\n"
        "  --frames N       frames to run with no input (default 300)\n"
        "  --seq \"N[:KEYS] ...\"  input schedule instead of --frames (KEYS e.g. A, B+LEFT)\n"
        "  --skip N         run the first N frames unprofiled (default 2)\n"
        "  --waitcnt V      what-if: write WAITCNT once after load (diagnostic)\n"
        "  --poke ADDR=VAL  what-if: write one byte of RAM after load (diagnostic; repeatable)\n"
        "  --watch PC       count executions of PC per frame (default 0x080B9AA2 = VBlankIntrWait)\n"
        "  --shot-every N   screenshot every N frames into OUTDIR/shots/\n");
    exit(1);
}

int main(int argc, char** argv) {
    const char *state = NULL, *save = NULL, *seq = NULL, *rom = NULL, *out = NULL;
    const char* pokes[32]; int npokes = 0;
    int frames = 300, skip = 2, shot_every = 0; long waitcnt = -1; uint32_t watch = PC_VBLANKWAIT;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--state") && i + 1 < argc) state = argv[++i];
        else if (!strcmp(argv[i], "--save") && i + 1 < argc) save = argv[++i];
        else if (!strcmp(argv[i], "--frames") && i + 1 < argc) frames = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--seq") && i + 1 < argc) seq = argv[++i];
        else if (!strcmp(argv[i], "--skip") && i + 1 < argc) skip = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--waitcnt") && i + 1 < argc) waitcnt = strtol(argv[++i], 0, 0);
        else if (!strcmp(argv[i], "--poke") && i + 1 < argc && npokes < 32) pokes[npokes++] = argv[++i];
        else if (!strcmp(argv[i], "--watch") && i + 1 < argc) watch = strtoul(argv[++i], 0, 0);
        else if (!strcmp(argv[i], "--shot-every") && i + 1 < argc) shot_every = atoi(argv[++i]);
        else if (argv[i][0] == '-') usage();
        else if (!rom) rom = argv[i];
        else if (!out) out = argv[i];
        else usage();
    }
    if (!rom || !out) usage();
    int total; uint32_t* keys;
    if (seq) keys = schedule(seq, &total);
    else { total = frames; keys = calloc(total, sizeof(uint32_t)); }
    if (skip > total) skip = total;

    char path[4096];
    snprintf(path, sizeof path, "mkdir -p '%s/shots'", out);
    if (system(path)) { fprintf(stderr, "cannot create %s\n", out); return 1; }

    mLogSetDefaultLogger(&logger);
    struct mCore* core = mCoreCreate(mPLATFORM_GBA);
    core->init(core);
    mCoreInitConfig(core, "ss2prof");
    mCoreConfigSetDefaultValue(&core->config, "idleOptimization", "ignore");
    core->loadConfig(core, &core->config);
    static color_t px[240 * 160]; core->setVideoBuffer(core, px, 240);
    if (!mCoreLoadFile(core, rom)) { fprintf(stderr, "cannot load ROM\n"); return 1; }
    if (save) {
        /* Temporary save: data is copied into the core and never written back to the file. */
        struct VFile* sf = VFileOpen(save, O_RDONLY);
        if (!sf || !core->loadTemporarySave(core, sf)) { fprintf(stderr, "cannot load save\n"); return 1; }
    }
    core->rtc.override = RTC_FIXED; core->rtc.value = 946684800;
    core->reset(core);
    if (state) {
        struct VFile* vf = VFileOpen(state, O_RDONLY);
        if (!vf || !mCoreLoadStateNamed(core, vf, SAVESTATE_RTC)) { fprintf(stderr, "cannot load state\n"); return 1; }
        vf->close(vf);
    }
    if (waitcnt >= 0) core->busWrite16(core, 0x04000204, (uint16_t) waitcnt);
    for (int i = 0; i < npokes; i++) {
        char* eq = strchr(pokes[i], '=');
        if (!eq) usage();
        core->busWrite8(core, strtoul(pokes[i], 0, 0), strtoul(eq + 1, 0, 0));
    }

    minit(&pcs, 1 << 21); minit(&funcs, 1 << 17); minit(&edges, 1 << 18); minit(&rets, 1 << 17);
    minit(&ctxf, 1 << 18); minit(&swis, 1 << 10); minit(&irqs, 1 << 10); minit(&copies, 1 << 14);

    struct GBA* gba = core->board; struct ARMCore* cpu = core->cpu;
    for (int f = 0; f < skip; f++) {
        core->setKeys(core, keys[f]); core->runFrame(core);
        blip_clear(core->getAudioChannel(core, 0)); blip_clear(core->getAudioChannel(core, 1));
    }

    snprintf(path, sizeof path, "%s/frames.tsv", out); FILE* ff = fopen(path, "w");
    fprintf(ff, "frame\tbusy\thalt\tevents\tinsns\tirq\twatch\tkeys\n");
    snprintf(path, sizeof path, "%s/ctxframes.tsv", out); FILE* cf = fopen(path, "w");
    uint64_t tot_busy = 0, tot_halt = 0, tot_ev = 0, region[16] = { 0 }, region_arm[16] = { 0 };
    int swi_pending = -1; uint32_t swi_ret = 0;
    int nprof = total - skip;

    for (int f = skip; f < total; f++) {
        core->setKeys(core, keys[f]);
        uint32_t fc = core->frameCounter(core);
        uint64_t busy = 0, halt = 0, ev = 0, insns = 0, irqc = 0, wh = 0;
        while (core->frameCounter(core) == fc) {
            if (cpu->cycles >= cpu->nextEvent) {
                /* Events (timers, DMA, IRQ entry) and HALT happen here, outside an instruction. */
                uint32_t pmode = cpu->cpsr.priv, ppc = cpu->gprs[15] - (cpu->cpsr.t ? 2 : 4);
                int h = cpu->halted;
                uint32_t t0 = (uint32_t) mTimingCurrentTime(&gba->timing);
                cpu->irqh.processEvents(cpu);
                uint64_t dt = (uint32_t) ((uint32_t) mTimingCurrentTime(&gba->timing) - t0);
                if (h || cpu->halted) halt += dt;
                else { ev += dt; for (int i = 0; i < depth; i++) mget(&funcs, st[i].func)->a += dt; }
                if (cpu->cpsr.priv == MODE_IRQ && pmode != MODE_IRQ) {
                    if (cur < 0) switch_ctx(0);
                    push(IRQ_FUNC, ppc, pmode, 0); st[depth - 1].fresh = 0;
                    mget(&irqs, core->busRead16(core, 0x04000202) & core->busRead16(core, 0x04000200))->b++;
                }
                continue;
            }
            int thumb = cpu->cpsr.t; uint32_t mode = cpu->cpsr.priv, isz = thumb ? 2 : 4;
            uint32_t pc = cpu->gprs[15] - isz, lr0 = cpu->gprs[14];
            uint16_t op16 = thumb ? core->busRead16(core, pc) : 0;
            if (pc == watch) wh++;
            if (thumb && (op16 & 0xFF00) == 0xDF00) {
                uint32_t n = op16 & 0xFF; Ent* w = mget(&swis, n); w->b++;
                if (n == 0x0B || n == 0x0C) {
                    /* key: swi(8) | src region(4) | dst region(4) | dst offset(24) | ctrl(24: count 21, fill, 32-bit) */
                    uint32_t r1 = cpu->gprs[1], r2 = cpu->gprs[2];
                    uint32_t ctrl = (r2 & 0x1FFFFF) | (((r2 >> 24) & 1) << 21) | (((r2 >> 26) & 1) << 22);
                    uint64_t k = ((uint64_t) n << 56) | ((uint64_t) ((cpu->gprs[0] >> 24) & 0xF) << 52)
                               | ((uint64_t) ((r1 >> 24) & 0xF) << 48) | ((uint64_t) (r1 & 0xFFFFFF) << 24) | ctrl;
                    mget(&copies, k)->b++;
                }
                swi_pending = n; swi_ret = pc + 2;
            }
            uint32_t t0 = (uint32_t) mTimingCurrentTime(&gba->timing);
            ARMRun(cpu);
            uint64_t dt = (uint32_t) ((uint32_t) mTimingCurrentTime(&gba->timing) - t0);
            insns++; busy += dt;
            region[(pc >> 24) & 15] += dt; if (!thumb) region_arm[(pc >> 24) & 15] += dt;
            Ent* p = mget(&pcs, pc); p->a += dt; p->b++;
            if (swi_pending >= 0) { mget(&swis, swi_pending)->a += dt; if (pc == swi_ret) swi_pending = -1; }

            if (cur < 0) switch_ctx(core->busRead32(core, SCHED_SP) == (uint32_t) cpu->gprs[13] ? 0 : core->busRead32(core, TASK_CURRENT));
            ctxs[cur].cycles += dt; ctxs[cur].fcyc += dt;
            uint32_t self = depth ? st[depth - 1].func : 0;
            mget(&funcs, self)->b += dt;
            mget(&ctxf, ((uint64_t) ctxs[cur].id << 32) | self)->b += dt;
            if (!depth) mget(&funcs, 0)->a += dt;
            for (int i = 0; i < depth; i++) {
                int dup = 0;
                for (int j = 0; j < i; j++) if (st[j].func == st[i].func) { dup = 1; break; }
                if (!dup) {
                    mget(&funcs, st[i].func)->a += dt;
                    mget(&ctxf, ((uint64_t) ctxs[cur].id << 32) | st[i].func)->a += dt;
                }
                mget(&edges, ((uint64_t) (i ? st[i - 1].func : 0) << 32) | st[i].func)->a += dt;
            }
            for (int i = 0; i < depth; i++) if (st[i].func == IRQ_FUNC) { irqc += dt; break; }

            /* Task switches change stacks: swap shadow stacks with them. */
            if (pc == PC_RESUME) { switch_ctx(core->busRead32(core, TASK_CURRENT)); continue; }
            if (pc == PC_YIELD_OUT || pc == PC_EXIT_OUT) { switch_ctx(0); continue; }

            int nthumb = cpu->cpsr.t; uint32_t npc = cpu->gprs[15] - (nthumb ? 2 : 4);
            uint32_t nmode = cpu->cpsr.priv, lr = cpu->gprs[14], sp = cpu->gprs[13];
            if (npc == 0x18 && nmode == MODE_IRQ && mode != MODE_IRQ) { push(IRQ_FUNC, 0xFFFFFFFF, mode, 0); st[depth - 1].fresh = 0; continue; }
            /* `bl _call_via_rN` veneer: the frame's first instruction is `bx rN`; retarget. */
            if (depth && st[depth - 1].fresh) {
                st[depth - 1].fresh = 0;
                if (thumb && (op16 & 0xFF80) == 0x4700 && st[depth - 1].func == pc) {
                    st[depth - 1].func = npc; st[depth - 1].fresh = 1; mget(&funcs, npc)->c++;
                    continue;
                }
            }
            if (npc != pc + isz && (lr & ~1u) == pc + isz && lr != lr0) {
                /* A call. The compiler also uses `bl` as a far jump inside big functions; such
                 * "calls" never return, so a repeat with the same return address and sp
                 * collapses onto the earlier frame instead of growing the stack. */
                for (int i = depth - 1; i >= 0; i--) {
                    if (st[i].func == IRQ_FUNC) break;
                    if (st[i].ret == pc + isz && st[i].sp == sp) { depth = i; break; }
                }
                push(npc, pc + isz, nmode, sp);
                continue;
            }
            if (npc != pc + isz) {
                for (int i = depth - 1; i >= 0 && i >= depth - 12; i--) {
                    if (st[i].func == IRQ_FUNC) { if (nmode == st[i].mode && mode != nmode) depth = i; break; }
                    if (st[i].ret == npc) { mget(&rets, st[i].func)->a++; depth = i; break; }
                }
                while (depth && st[depth - 1].func != IRQ_FUNC && nmode == st[depth - 1].mode && st[depth - 1].sp < sp) depth--;
            }
        }
        tot_busy += busy; tot_halt += halt; tot_ev += ev;
        fprintf(ff, "%d\t%llu\t%llu\t%llu\t%llu\t%llu\t%llu\t%x\n", f, (unsigned long long) busy, (unsigned long long) halt,
                (unsigned long long) ev, (unsigned long long) insns, (unsigned long long) irqc, (unsigned long long) wh, keys[f]);
        fprintf(cf, "%d", f);
        for (int i = 0; i < nctx; i++) {
            if (ctxs[i].fcyc) fprintf(cf, "\t%08x:%llu", ctxs[i].id, (unsigned long long) ctxs[i].fcyc);
            ctxs[i].fcyc = 0;
        }
        fprintf(cf, "\n");
        if (shot_every && (f - skip) % shot_every == 0) {
            snprintf(path, sizeof path, "%s/shots/%06d.png", out, f);
            struct VFile* sv = VFileOpen(path, O_CREAT | O_TRUNC | O_RDWR); mCoreTakeScreenshotVF(core, sv); sv->close(sv);
        }
        blip_clear(core->getAudioChannel(core, 0)); blip_clear(core->getAudioChannel(core, 1));
    }
    fclose(ff); fclose(cf);

    FILE* o;
#define OPEN(name) (snprintf(path, sizeof path, "%s/" name, out), o = fopen(path, "w"))
    OPEN("pcs.tsv"); EACH(pcs, e) fprintf(o, "%08llx\t%llu\t%llu\n", (unsigned long long) e->key, (unsigned long long) e->a, (unsigned long long) e->b); fclose(o);
    OPEN("funcs.tsv"); EACH(funcs, e) fprintf(o, "%08llx\t%llu\t%llu\t%llu\t%llu\n", (unsigned long long) e->key, (unsigned long long) e->a,
        (unsigned long long) e->b, (unsigned long long) e->c, (unsigned long long) mget(&rets, e->key)->a); fclose(o);
    OPEN("edges.tsv"); EACH(edges, e) fprintf(o, "%08llx\t%08llx\t%llu\n", (unsigned long long) (e->key >> 32), (unsigned long long) (e->key & 0xFFFFFFFF), (unsigned long long) e->a); fclose(o);
    OPEN("ctxf.tsv"); EACH(ctxf, e) fprintf(o, "%08llx\t%08llx\t%llu\t%llu\n", (unsigned long long) (e->key >> 32), (unsigned long long) (e->key & 0xFFFFFFFF), (unsigned long long) e->a, (unsigned long long) e->b); fclose(o);
    OPEN("ctx.tsv"); for (int i = 0; i < nctx; i++) fprintf(o, "%08x\t%llu\t%llu\n", ctxs[i].id, (unsigned long long) ctxs[i].cycles, (unsigned long long) ctxs[i].resumes); fclose(o);
    OPEN("swis.tsv"); EACH(swis, e) fprintf(o, "%02llx\t%llu\t%llu\n", (unsigned long long) e->key, (unsigned long long) e->b, (unsigned long long) e->a); fclose(o);
    OPEN("irqs.tsv"); EACH(irqs, e) fprintf(o, "%04llx\t%llu\n", (unsigned long long) e->key, (unsigned long long) e->b); fclose(o);
    /* copies: swi, src region, dst, ctrl as passed in r2 (count | fill bit 24 | 32-bit bit 26), calls */
    OPEN("copies.tsv"); EACH(copies, e) {
        uint64_t k = e->key; uint32_t c = k & 0xFFFFFF;
        uint32_t ctrl = (c & 0x1FFFFF) | (((c >> 21) & 1) << 24) | (((c >> 22) & 1) << 26);
        uint32_t dst = (uint32_t) (((k >> 48) & 0xF) << 24) | (uint32_t) ((k >> 24) & 0xFFFFFF);
        fprintf(o, "%02llx\t%02llx\t%08x\t%08x\t%llu\n", (unsigned long long) (k >> 56), (unsigned long long) ((k >> 52) & 0xF), dst, ctrl, (unsigned long long) e->b);
    } fclose(o);
    OPEN("summary.tsv");
    fprintf(o, "frames\t%d\nframe_cycles\t%d\nbusy\t%llu\nhalt\t%llu\nevents\t%llu\nwaitcnt\t%04x\nshadow_overflow\t%llu\n", nprof, FRAME_CYCLES,
            (unsigned long long) tot_busy, (unsigned long long) tot_halt, (unsigned long long) tot_ev, core->busRead16(core, 0x04000204), (unsigned long long) overflow);
    for (int r = 0; r < 16; r++) if (region[r]) fprintf(o, "region_%x\t%llu\t%llu\n", r, (unsigned long long) region[r], (unsigned long long) region_arm[r]);
    fclose(o);
    snprintf(path, sizeof path, "%s/iwram.bin", out); o = fopen(path, "wb");
    for (uint32_t a = 0x03000000; a < 0x03008000; a++) fputc(core->busRead8(core, a), o);
    fclose(o);
    snprintf(path, sizeof path, "%s/end.png", out);
    struct VFile* sv = VFileOpen(path, O_CREAT | O_TRUNC | O_RDWR); mCoreTakeScreenshotVF(core, sv); sv->close(sv);
    uint64_t all = tot_busy + tot_halt + tot_ev;
    printf("%d frames: busy %.1f%%  halt %.1f%%  events %.1f%%  (avg busy %.0f of %d cycles)\n", nprof,
           100.0 * tot_busy / all, 100.0 * tot_halt / all, 100.0 * tot_ev / all, (double) tot_busy / (nprof ? nprof : 1), FRAME_CYCLES);
    core->deinit(core);
    return 0;
}
