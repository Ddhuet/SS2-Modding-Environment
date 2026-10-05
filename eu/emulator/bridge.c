/* Small project-owned adapter to mGBA's public C core. */
#include <mgba/core/core.h>
#include <mgba/core/blip_buf.h>
#include <mgba/core/log.h>
#include <mgba/core/serialize.h>
#include <mgba-util/vfs.h>
#include <stdio.h>
#include <stdlib.h>

struct SS2Core { struct mCore* core; color_t* pixels; };
static void quiet_log(struct mLogger* l, int cat, enum mLogLevel level,
                      const char* fmt, va_list args) {
    (void)l; (void)cat;
    if (level == mLOG_FATAL || level == mLOG_ERROR) {
        vfprintf(stderr, fmt, args); fputc('\n', stderr);
    }
}
static struct mLogger logger = { quiet_log, NULL };

void* ss2_open(const char* rom, const char* save) {
    mLogSetDefaultLogger(&logger);
    struct SS2Core* h = calloc(1, sizeof(*h));
    if (!h) return NULL;
    h->core = mCoreCreate(mPLATFORM_GBA);
    if (!h->core || !h->core->init(h->core)) { free(h); return NULL; }
    mCoreInitConfig(h->core, "ss2-headless");
    mCoreConfigSetDefaultValue(&h->core->config, "idleOptimization", "ignore");
    h->core->loadConfig(h->core, &h->core->config);
    h->pixels = calloc(240 * 160, sizeof(color_t));
    if (!h->pixels) goto fail;
    h->core->setVideoBuffer(h->core, h->pixels, 240);
    if (!mCoreLoadFile(h->core, rom)) goto fail;
    if (save && !mCoreLoadSaveFile(h->core, save, false)) goto fail;
    h->core->rtc.override = RTC_FIXED;
    h->core->rtc.value = 946684800;
    h->core->reset(h->core);
    blip_set_rates(h->core->getAudioChannel(h->core, 0), h->core->frequency(h->core), 32768);
    blip_set_rates(h->core->getAudioChannel(h->core, 1), h->core->frequency(h->core), 32768);
    return h;
fail:
    mCoreConfigDeinit(&h->core->config);
    h->core->deinit(h->core);
    free(h->pixels); free(h); return NULL;
}
void ss2_close(struct SS2Core* h) {
    if (!h) return;
    mCoreConfigDeinit(&h->core->config);
    h->core->deinit(h->core);
    free(h->pixels); free(h);
}
void ss2_frames(struct SS2Core* h, uint32_t count, uint32_t keys) {
    h->core->setKeys(h->core, keys);
    for (uint32_t i = 0; i < count; ++i) {
        h->core->runFrame(h->core);
        blip_clear(h->core->getAudioChannel(h->core, 0));
        blip_clear(h->core->getAudioChannel(h->core, 1));
    }
}
uint32_t ss2_frame(struct SS2Core* h) { return h->core->frameCounter(h->core); }
uint32_t ss2_read(struct SS2Core* h, uint32_t addr, int width) {
    if (width == 1) return h->core->busRead8(h->core, addr);
    if (width == 2) return h->core->busRead16(h->core, addr);
    return h->core->busRead32(h->core, addr);
}
void ss2_read_memory(struct SS2Core* h, uint32_t addr, uint8_t* out, uint32_t size) {
    for (uint32_t i = 0; i < size; ++i) out[i] = h->core->busRead8(h->core, addr + i);
}
void ss2_write(struct SS2Core* h, uint32_t addr, uint32_t value, int width) {
    if (width == 1) h->core->busWrite8(h->core, addr, value);
    else if (width == 2) h->core->busWrite16(h->core, addr, value);
    else h->core->busWrite32(h->core, addr, value);
}
int ss2_register(struct SS2Core* h, const char* name, uint32_t* out) {
    return h->core->readRegister(h->core, name, out);
}
int ss2_write_register(struct SS2Core* h, const char* name, uint32_t value) {
    return h->core->writeRegister(h->core, name, &value);
}
void ss2_step(struct SS2Core* h, uint32_t count) {
    for (uint32_t i = 0; i < count; ++i) h->core->step(h->core);
}
/* Pause before the instruction at address. Public PC is one prefetched
 * instruction ahead at step boundaries (2 bytes Thumb, 4 bytes ARM). */
int ss2_until(struct SS2Core* h, uint32_t address, uint32_t budget,
              uint32_t frames, uint32_t keys, uint32_t* executed) {
    uint32_t first = h->core->frameCounter(h->core), last = first, pc, cpsr;
    h->core->setKeys(h->core, keys);
    for (uint32_t i = 0; ; ++i) {
        h->core->readRegister(h->core, "pc", &pc);
        h->core->readRegister(h->core, "cpsr", &cpsr);
        *executed = i;
        if (pc - ((cpsr & 0x20) ? 2 : 4) == address) return 1;
        if (i >= budget) return 0;
        if (h->core->frameCounter(h->core) - first >= frames) return 2;
        h->core->step(h->core);
        uint32_t current = h->core->frameCounter(h->core);
        if (current != last) {
            blip_clear(h->core->getAudioChannel(h->core, 0));
            blip_clear(h->core->getAudioChannel(h->core, 1));
            last = current;
        }
    }
}
int ss2_screenshot(struct SS2Core* h, const char* path) {
    struct VFile* vf = VFileOpen(path, O_CREAT | O_EXCL | O_RDWR);
    if (!vf) return 0;
    int ok = mCoreTakeScreenshotVF(h->core, vf); vf->close(vf); return ok;
}
int ss2_state(struct SS2Core* h, const char* path, int load) {
    struct VFile* vf = VFileOpen(path, load ? O_RDONLY : O_CREAT | O_EXCL | O_RDWR);
    if (!vf) return 0;
    int flags = SAVESTATE_SCREENSHOT | SAVESTATE_SAVEDATA | SAVESTATE_RTC;
    int ok = load ? mCoreLoadStateNamed(h->core, vf, flags) : mCoreSaveStateNamed(h->core, vf, flags);
    vf->close(vf); return ok;
}
int ss2_export_save(struct SS2Core* h, const char* path) {
    void* data = NULL;
    size_t size = h->core->savedataClone(h->core, &data);
    if (!size || !data) return 0;
    struct VFile* f = VFileOpen(path, O_CREAT | O_EXCL | O_RDWR);
    if (!f) { free(data); return 0; }
    int ok = f->write(f, data, size) == (ssize_t) size;
    if (!f->close(f)) ok = 0;
    free(data); return ok;
}
