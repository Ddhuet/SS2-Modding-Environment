"""Deterministic, paused-by-default native mGBA sessions on isolated input copies."""
from __future__ import annotations

import ctypes as C
import hashlib
import json
from pathlib import Path
import shutil
import tempfile
import uuid

KEYS = {"A": 1, "B": 2, "SELECT": 4, "START": 8, "RIGHT": 16,
        "LEFT": 32, "UP": 64, "DOWN": 128, "R": 256, "L": 512}

def key_mask(keys=0):
    if isinstance(keys, int):
        if not 0 <= keys <= 1023:
            raise ValueError("GBA key mask must be in 0..1023")
        return keys
    if isinstance(keys, str):
        keys = keys.replace("+", " ").replace(",", " ").split()
    mask = 0
    for key in keys:
        mask |= KEYS[key.upper()]
    return mask

def sha256(path):
    with Path(path).open("rb") as f:
        return hashlib.file_digest(f, "sha256").hexdigest()

def _library():
    path = Path(__file__).parent / "build" / "libss2_mgba.so"
    if not path.is_file():
        raise RuntimeError("Native harness missing: run python eu/scripts/build_emulator.py")
    lib = C.CDLL(str(path))
    signatures = {
        "open": ([C.c_char_p, C.c_char_p], C.c_void_p),
        "close": ([C.c_void_p], None),
        "frames": ([C.c_void_p, C.c_uint32, C.c_uint32], None),
        "frame": ([C.c_void_p], C.c_uint32),
        "read": ([C.c_void_p, C.c_uint32, C.c_int], C.c_uint32),
        "read_memory": ([C.c_void_p, C.c_uint32, C.c_void_p, C.c_uint32], None),
        "write": ([C.c_void_p, C.c_uint32, C.c_uint32, C.c_int], None),
        "register": ([C.c_void_p, C.c_char_p, C.POINTER(C.c_uint32)], C.c_int),
        "write_register": ([C.c_void_p, C.c_char_p, C.c_uint32], C.c_int),
        "step": ([C.c_void_p, C.c_uint32], None),
        "until": ([C.c_void_p, C.c_uint32, C.c_uint32, C.c_uint32,
                   C.c_uint32, C.POINTER(C.c_uint32)], C.c_int),
        "screenshot": ([C.c_void_p, C.c_char_p], C.c_int),
        "state": ([C.c_void_p, C.c_char_p, C.c_int], C.c_int),
        "export_save": ([C.c_void_p, C.c_char_p], C.c_int),
    }
    for name, (args, result) in signatures.items():
        fn = getattr(lib, "ss2_" + name)
        fn.argtypes, fn.restype = args, result
    return lib

class Session:
    """One synchronous core. Every operation executes while emulation is paused.

    `run_frames(n, keys)` holds exactly those keys for n emulator frames.
    The following call defaults to releasing all keys. Files written by the
    adapter must be under run_dir; input paths are never emulator write targets.
    Runs are retained for review, even when a temporary directory is chosen.
    This API is single-threaded; use separate processes for concurrent runs.
    """
    def __init__(self, rom, save=None, run_dir=None):
        self._handle = None
        self._lib = _library()
        if run_dir is None:
            self.run_dir = Path(tempfile.mkdtemp(prefix="ss2-mgba-")).resolve()
        else:
            self.run_dir = Path(run_dir).absolute()
            # Existing folders may contain symlinks/hardlinks to source inputs.
            # Claim a new directory exclusively, including for empty folders.
            self.run_dir.mkdir(parents=True, exist_ok=False)
            self.run_dir = self.run_dir.resolve()
        self.rom_path = self.run_dir / "game.gba"
        self.save_path = self.run_dir / "game.sav"
        # Never overwrite a prior run or permit a source equal to its output.
        if self.rom_path.exists() or self.save_path.exists():
            raise FileExistsError(f"Run directory already contains emulator inputs: {self.run_dir}")
        source_rom = Path(rom).resolve(strict=True)
        source_save = Path(save).resolve(strict=True) if save else None
        source_hashes = {str(source_rom): sha256(source_rom)}
        self.rom_sha256 = source_hashes[str(source_rom)]
        if source_save:
            source_hashes[str(source_save)] = sha256(source_save)
        with source_rom.open("rb") as source, self.rom_path.open("xb") as dest:
            shutil.copyfileobj(source, dest)
        if source_save:
            with source_save.open("rb") as source, self.save_path.open("xb") as dest:
                shutil.copyfileobj(source, dest)
        self._protected_inputs = [source_rom, self.rom_path]
        if source_save: self._protected_inputs.append(source_save)
        if self.save_path.exists(): self._protected_inputs.append(self.save_path)
        self._handle = self._lib.ss2_open(bytes(self.rom_path), bytes(self.save_path))
        if not self._handle:
            raise RuntimeError("mGBA could not load isolated ROM/save")
        self._source_hashes = source_hashes
        self._write_manifest()

    def _write_manifest(self):
        data = {"backend": "mGBA 0.10.5", "revision": "26b7884bc25a5933960f3cdcd98bac1ae14d42e2",
                "source_sha256": self._source_hashes, "rom_path": str(self.rom_path),
                "save_path": str(self.save_path), "frame": self.frame,
                "rtc_fixed_unix": 946684800}
        self._write_json("session.json", data)

    def _write_json(self, path, data):
        target = self._output(path)
        with tempfile.NamedTemporaryFile(mode="w", dir=self.run_dir,
                                         prefix=".manifest-", delete=False) as output:
            temporary = Path(output.name)
            output.write(json.dumps(data, indent=2) + "\n")
        temporary.replace(target)

    def _core(self):
        if not self._handle:
            raise RuntimeError("Session is closed")
        return self._handle

    @property
    def frame(self):
        return self._lib.ss2_frame(self._core())

    def run_frames(self, count, keys=0):
        if not isinstance(count, int) or not 0 <= count <= 1_000_000:
            raise ValueError("Frame count must be an integer in 0..1000000")
        self._lib.ss2_frames(self._core(), count, key_mask(keys))
        return self.frame

    def press(self, keys, frames=1, release_frames=1):
        self.run_frames(frames, keys)
        return self.run_frames(release_frames)

    def step(self, count=1):
        if not isinstance(count, int) or not 0 <= count <= 10_000_000:
            raise ValueError("Instruction count must be an integer in 0..10000000")
        self._lib.ss2_step(self._core(), count)

    def run_until(self, address, *, instructions=10_000_000, frames=120, keys=0):
        """Bounded native observation, paused before a CPU instruction address.

        No RAM/register writes. The supplied keys remain held after return.
        A hit is tested before budget exhaustion, including at zero steps.
        """
        self._address(address, 2)
        if not isinstance(instructions, int) or not 0 <= instructions <= 10_000_000:
            raise ValueError("Instruction budget must be in 0..10000000")
        if not isinstance(frames, int) or not 0 <= frames <= 10000:
            raise ValueError("Frame budget must be in 0..10000")
        executed = C.c_uint32()
        first = self.frame
        reason = self._lib.ss2_until(self._core(), address, instructions, frames,
                                    key_mask(keys), C.byref(executed))
        registers = {name: self.register(name) for name in
                     [*[f"r{i}" for i in range(13)], "sp", "lr", "pc", "cpsr"]}
        return {"hit": reason == 1,
                "stop": {0: "instruction_budget", 1: "hit", 2: "frame_budget"}[reason],
                "address": address, "instructions": executed.value,
                "frames": self.frame - first, "registers": registers}

    @staticmethod
    def _address(address, width=1):
        if not isinstance(address, int) or not 0 <= address <= 0xFFFFFFFF - width + 1:
            raise ValueError("Invalid 32-bit address")
        if address % width:
            raise ValueError("Unaligned memory access")
        return address

    def read(self, address, width=1):
        if width not in (1, 2, 4):
            raise ValueError("Width must be 1, 2, or 4")
        return self._lib.ss2_read(self._core(), self._address(address, width), width)

    def read8(self, address): return self.read(address, 1)
    def read16(self, address): return self.read(address, 2)
    def read32(self, address): return self.read(address, 4)

    def read_memory(self, address, size):
        if not isinstance(size, int) or not 0 <= size <= 0x1000000:
            raise ValueError("Memory size must be in 0..0x1000000")
        self._address(address)
        if address + size > 0x100000000:
            raise ValueError("Memory range overflows")
        out = (C.c_uint8 * size)()
        self._lib.ss2_read_memory(self._core(), address, out, size)
        return bytes(out)

    def write(self, address, value, width=1):
        if width not in (1, 2, 4):
            raise ValueError("Width must be 1, 2, or 4")
        self._address(address, width)
        if not (0x02000000 <= address and address + width <= 0x02040000 or
                0x03000000 <= address and address + width <= 0x03008000):
            raise ValueError("Controlled writes are limited to GBA EWRAM/IWRAM")
        if not isinstance(value, int) or not 0 <= value < 1 << (width * 8):
            raise ValueError("Value does not fit memory width")
        self._lib.ss2_write(self._core(), address, value, width)

    def write8(self, address, value): self.write(address, value, 1)
    def write16(self, address, value): self.write(address, value, 2)
    def write32(self, address, value): self.write(address, value, 4)

    def register(self, name):
        out = C.c_uint32()
        if not self._lib.ss2_register(self._core(), name.encode("ascii"), C.byref(out)):
            raise ValueError(f"Unknown CPU register: {name}")
        return out.value

    def write_register(self, name, value):
        if not isinstance(value, int) or not 0 <= value <= 0xFFFFFFFF:
            raise ValueError("Register value must fit 32 bits")
        if not self._lib.ss2_write_register(self._core(), name.encode("ascii"), value):
            raise ValueError(f"Unknown CPU register: {name}")

    def _output(self, path):
        path = Path(path)
        if not path.is_absolute():
            path = self.run_dir / path
        path = path.resolve()
        if not path.is_relative_to(self.run_dir):
            raise ValueError("Output must remain under the isolated run directory")
        if path == self.rom_path or path == self.save_path:
            raise ValueError("Artifact cannot overwrite ROM/save inputs")
        if path.exists() and any(path.samefile(source) for source in self._protected_inputs if source.exists()):
            raise ValueError("Artifact aliases a protected source ROM/save or emulator input")
        path.parent.mkdir(parents=True, exist_ok=True)
        return path

    def _publish(self, path, writer):
        target = self._output(path)
        temporary = target.parent / (".artifact-" + uuid.uuid4().hex)
        # Native writers create this unpredictable path with O_EXCL, so a
        # preexisting symlink/hardlink can never become a truncation target.
        if not writer(bytes(temporary)):
            if temporary.exists() and not temporary.is_symlink(): temporary.unlink()
            raise RuntimeError(f"Artifact write failed: {target}")
        temporary.replace(target)
        return target

    def screenshot(self, path="screenshots/frame.png"):
        return self._publish(path, lambda p: self._lib.ss2_screenshot(self._core(), p))

    def save_state(self, path="states/snapshot.ss1"):
        path = self._publish(path, lambda p: self._lib.ss2_state(self._core(), p, 0))
        self._write_json(str(path) + ".json", {
            "format": "ss2-mgba-state-v1", "rom_sha256": self.rom_sha256,
            "state_sha256": sha256(path), "backend_revision": "26b7884bc25a5933960f3cdcd98bac1ae14d42e2",
            "frame": self.frame})
        return path

    def load_state(self, path):
        path = Path(path)
        if not path.is_absolute(): path = self.run_dir / path
        path = path.resolve(strict=True)
        metadata_path = Path(str(path) + ".json")
        try:
            metadata = json.loads(metadata_path.read_text())
        except (OSError, ValueError) as exc:
            raise ValueError("Savestate needs a valid ROM-bound sidecar from save_state()") from exc
        if not isinstance(metadata, dict) or metadata.get("format") != "ss2-mgba-state-v1":
            raise ValueError("Unsupported savestate metadata format")
        if metadata.get("backend_revision") != "26b7884bc25a5933960f3cdcd98bac1ae14d42e2":
            raise ValueError("Savestate backend revision mismatch")
        if metadata.get("rom_sha256") != self.rom_sha256:
            raise ValueError("Savestate ROM SHA-256 mismatch")
        if metadata.get("state_sha256") != sha256(path):
            raise ValueError("Savestate content SHA-256 mismatch")
        if not self._lib.ss2_state(self._core(), bytes(path), 1):
            raise RuntimeError("Savestate load failed")
        return self.frame

    def flush_save(self):
        # Core deinit unmaps/flushed backed SRAM. Avoid truncating that mapping:
        # export through a separate file, then replace only after core closes.
        return self._publish("save-export.sav", lambda p: self._lib.ss2_export_save(self._core(), p))

    def close(self):
        if not self._handle: return
        export = None
        try:
            # At frame zero an unloaded cartridge save may not have a size yet.
            try:
                export = self.flush_save()
            except RuntimeError:
                pass
            self._write_manifest()
        finally:
            self._lib.ss2_close(self._handle)
            self._handle = None
        if export: export.replace(self.save_path)

    def __enter__(self): return self
    def __exit__(self, *exc): self.close()

__all__ = ["Session", "KEYS", "key_mask", "sha256"]
