#!/usr/bin/env python3
"""Shining Soul II patch manager: tick patches, press Apply, get a patched ROM.

Folders next to this script:
    patches/     .ips, .ips32 and .bps files; add or remove files at any time, the list follows
    Input_ROM/   the ROM to patch: Shining_Soul_II_JP.gba, the English ROM ss2-en-phase1d.gba, or the
                 Chinese community ROM (SS2_SC_bug_fixed);
                 first .gba found is used, or pick one from the menu when there are several
    Output_ROM/  patched ROMs are written here (never overwritten: names carry a timestamp)

Run:  python3 patch_manager.py
Needs Python 3 with tkinter (Arch/Omarchy: `sudo pacman -S tk`). Standard library only.

Formats: IPS ("PATCH" ... "EOF", 24-bit offsets, RLE records, optional truncate size) and
IPS32 ("IPS32" ... "EEOF", 32-bit offsets) for patches that write above 16 MiB, and BPS ("BPS1").
Two base patches turn the Japanese ROM into a playable base and are applied first; tick one:
english_translation.bps (Japanese -> English ROM) or cn_baseline.bps (Japanese -> the Chinese
community ROM). Every mod is made against the English ROM: a .bps is decoded there and turned into
a list of changed bytes, so it stacks with the others like an IPS. On the Chinese ROM each mod is
replaced by its Chinese version patches/cn/<name>.bps (made by Tools/Scripts/make_cn_set.py);
mods without one are English-only (patches/cn/compat.json says why) and are refused there.
Same rules as the web patcher's patcher.js (buildRom), so both give byte-identical ROMs.
Before writing, the selected patches are checked against each other: two patches that write
different bytes to the same offset are refused (identical bytes are allowed).
"""
import datetime
import hashlib
import sys
import zlib
from pathlib import Path

# Frozen (PyInstaller .exe): the folders sit next to the executable, not in the unpack dir.
HERE = Path(sys.executable if getattr(sys, "frozen", False) else __file__).resolve().parent
PATCH_DIR = HERE / "patches"
INPUT_DIR = HERE / "Input_ROM"
OUTPUT_DIR = HERE / "Output_ROM"
EXTS = (".ips", ".ips32", ".bps")
TRANSLATION = "english_translation"   # stem of the Japanese -> English BPS, applied first
CN_BASE = "cn_baseline"               # stem of the Japanese -> Chinese community ROM BPS
BASES = (TRANSLATION, CN_BASE)
CN_DIR_NAME = "cn"                    # patches/cn/<name>.bps: Chinese versions of the mods
MIB16, MIB32 = 1 << 24, 1 << 25
ROM_EXTS = (".gba", ".bin")


# ---------------------------------------------------------------- patch logic

class PatchError(Exception):
    pass


def load_patch(path):
    """Parse an IPS/IPS32 file into {"name", "path", "writes": [(offset, bytes)], "truncate"}.
    A BPS gives {"name", "path", "bps": {...}}; its writes are filled in by build()."""
    data = Path(path).read_bytes()
    if data.startswith(b"BPS1"):
        return {"name": Path(path).stem, "path": Path(path), "bps": parse_bps(Path(path).name, data),
                "writes": None, "truncate": None}
    if data.startswith(b"IPS32"):
        pos, width, eof = 5, 4, b"EEOF"
    elif data.startswith(b"PATCH"):
        pos, width, eof = 5, 3, b"EOF"
    else:
        raise PatchError(f"{Path(path).name}: not an IPS or IPS32 file")
    writes, truncate = [], None
    while True:
        if data[pos:pos + len(eof)] == eof and (width == 4 or len(data) - pos in (3, 6)):
            rest = data[pos + len(eof):]
            if len(rest) == 3 and width == 3:
                truncate = int.from_bytes(rest, "big")
            break
        if pos + width + 2 > len(data):
            raise PatchError(f"{Path(path).name}: truncated (no {eof.decode()} marker)")
        off = int.from_bytes(data[pos:pos + width], "big")
        size = int.from_bytes(data[pos + width:pos + width + 2], "big")
        pos += width + 2
        if size == 0:  # RLE record
            count = int.from_bytes(data[pos:pos + 2], "big")
            writes.append((off, data[pos + 2:pos + 3] * count))
            pos += 3
        else:
            writes.append((off, data[pos:pos + size]))
            pos += size
    return {"name": Path(path).stem, "path": Path(path), "writes": writes, "truncate": truncate}


def parse_bps(name, data):
    """BPS header and footer: {"data", "start", "source_size", "target_size", "source_crc", "target_crc"}."""
    if len(data) < 19 or not data.startswith(b"BPS1"):
        raise PatchError(f"{name}: not a BPS file")
    if zlib.crc32(data[:-4]) != int.from_bytes(data[-4:], "little"):
        raise PatchError(f"{name}: the patch file is damaged (checksum mismatch)")
    bps = {"name": name, "data": data}
    pos = 4
    bps["source_size"], pos = bps_number(data, pos, name)
    bps["target_size"], pos = bps_number(data, pos, name)
    meta, pos = bps_number(data, pos, name)
    bps["start"] = pos + meta
    bps["source_crc"] = int.from_bytes(data[-12:-8], "little")
    bps["target_crc"] = int.from_bytes(data[-8:-4], "little")
    return bps


def bps_number(data, pos, name):
    value, shift = 0, 1
    while True:
        if pos >= len(data) - 12:
            raise PatchError(f"{name}: truncated")
        b = data[pos]
        pos += 1
        value += (b & 0x7F) * shift
        if b & 0x80:
            return value, pos
        shift <<= 7
        value += shift


def apply_bps(source, bps, crc=None):
    """Decode a BPS against source; checks source and result size/CRC32."""
    name, d = bps["name"], bps["data"]
    crc = zlib.crc32(source) if crc is None else crc
    if len(source) != bps["source_size"] or crc != bps["source_crc"]:
        raise PatchError(f"{name} was made for a different ROM (expected CRC32 {bps['source_crc']:08X}, "
                         f"size {bps['source_size']}; this one is {crc:08X}, size {len(source)}).")
    out = bytearray(bps["target_size"])
    pos, end, o, src_rel, tgt_rel = bps["start"], len(d) - 12, 0, 0, 0
    while pos < end:
        cmd, pos = bps_number(d, pos, name)
        n, action = (cmd >> 2) + 1, cmd & 3
        if o + n > len(out):
            raise PatchError(f"{name}: writes past the end of the ROM")
        if action == 0:            # SourceRead
            out[o:o + n] = source[o:o + n]
        elif action == 1:          # TargetRead
            out[o:o + n] = d[pos:pos + n]
            pos += n
        else:                      # SourceCopy / TargetCopy
            r, pos = bps_number(d, pos, name)
            delta = -(r >> 1) if r & 1 else r >> 1
            if action == 2:
                src_rel += delta
                out[o:o + n] = source[src_rel:src_rel + n]
                src_rel += n
            else:
                tgt_rel += delta
                for i in range(n):  # may overlap
                    out[o + i] = out[tgt_rel]
                    tgt_rel += 1
        o += n
    if o != len(out) or zlib.crc32(out) != bps["target_crc"]:
        raise PatchError(f"{name}: the result failed its checksum")
    return bytes(out)


def bps_writes(base, bps, crc=None):
    """The bytes a BPS changes in base, as IPS-style writes."""
    target = apply_bps(base, bps, crc)
    writes, i, n = [], 0, len(target)
    while i < n:
        if i < len(base) and target[i] == base[i]:
            i += 1
            continue
        start = i
        while i < n and not (i < len(base) and target[i] == base[i]):
            i += 1
        writes.append((start, target[start:i]))
    return writes


def is_translation(p):
    return p["name"].lower() == TRANSLATION and "bps" in p


def is_base(p):
    return p["name"].lower() in BASES and "bps" in p


def cn_version(name):
    """(path of the Chinese version of a mod or None, reason it has none)."""
    import json
    d = PATCH_DIR / CN_DIR_NAME
    try:
        entry = json.loads((d / "compat.json").read_text(encoding="utf-8"))[name]
    except (OSError, ValueError, KeyError):
        return None, "it has no Chinese version"
    english = PATCH_DIR / entry.get("file", "")
    if not english.is_file() or hashlib.sha256(english.read_bytes()).hexdigest() != entry.get("en_sha256"):
        return None, "its Chinese version is out of date (run Tools/Scripts/make_cn_set.py)"
    path = d / f"{name}.bps"
    if entry.get("cn") and path.is_file():
        return path, ""
    return None, entry.get("reason", "it has no Chinese version")


def pad_rom(rom):
    """Pad output that went past 16 MiB to the full 32 MiB a GBA cartridge maps."""
    return rom + bytes(MIB32 - len(rom)) if MIB16 < len(rom) < MIB32 else rom


def conflicts(patches):
    """List of (patch A, patch B, first offset) where two patches write different bytes."""
    owner = {}
    found = {}
    for p in patches:
        for off, data in p["writes"]:
            for i, b in enumerate(data):
                prev = owner.get(off + i)
                if prev is not None and prev[1] != b and prev[0] != p["name"]:
                    found.setdefault((prev[0], p["name"]), off + i)
                owner[off + i] = (p["name"], b)
    return [(a, b, o) for (a, b), o in found.items()]


def apply_patches(rom, patches):
    out = bytearray(rom)
    for p in patches:
        for off, data in p["writes"]:
            if off + len(data) > len(out):
                out.extend(b"\0" * (off + len(data) - len(out)))
            out[off:off + len(data)] = data
        if p["truncate"] is not None:
            del out[p["truncate"]:]
    return bytes(out)


def list_patches():
    PATCH_DIR.mkdir(exist_ok=True)
    return sorted((p for p in PATCH_DIR.iterdir() if p.suffix.lower() in EXTS and p.is_file()),
                  key=lambda p: (p.stem.lower() not in BASES, p.stem.lower() != TRANSLATION, p.name.lower()))


def list_roms():
    INPUT_DIR.mkdir(exist_ok=True)
    return sorted((p for p in INPUT_DIR.iterdir() if p.suffix.lower() in ROM_EXTS and p.is_file()),
                  key=lambda p: p.name.lower())


def expected_base():
    f = PATCH_DIR / "base_rom.sha256"
    if not f.exists():
        return set()
    return {line.split()[0].lower() for line in f.read_text().splitlines() if line.strip()}


def pretty(stem):
    names = {TRANSLATION: "English translation", CN_BASE: "Chinese (CN community ROM)"}
    return names.get(stem.lower(), stem.replace("_", " ").capitalize())


def output_name(rom_path, names):
    stamp = datetime.datetime.now().strftime("%Y%m%d-%H%M%S")
    tag = "+".join(names) if len(names) <= 3 else f"{len(names)}_patches"
    return OUTPUT_DIR / f"{rom_path.stem}+{tag}_{stamp}{rom_path.suffix}"


def find_translation():
    p = PATCH_DIR / f"{TRANSLATION}.bps"
    return load_patch(p) if p.is_file() else None


def find_cn_base():
    p = PATCH_DIR / f"{CN_BASE}.bps"
    return load_patch(p) if p.is_file() else None


def rom_kind(crc, tr=None, cnb=None):
    """'jp', 'en', 'cn' or None, from the base patches' source/target CRC32s."""
    if tr and crc == tr["bps"]["source_crc"] or cnb and crc == cnb["bps"]["source_crc"]:
        return "jp"
    if tr and crc == tr["bps"]["target_crc"]:
        return "en"
    if cnb and crc == cnb["bps"]["target_crc"]:
        return "cn"
    return None


def build_rom(rom, patches, tr=None, cnb=None):
    """Base patch first (if chosen), then the mods as one conflict-checked set of writes, then padding.
    tr / cnb are the English / Chinese base patches (chosen or not), used to recognise the input ROM.
    On the Chinese ROM every mod is swapped for its patches/cn/ version.
    Returns (rom bytes, base patch applied or None, mods)."""
    bases = [p for p in patches if is_base(p)]
    mods = [p for p in patches if not is_base(p)]
    if len(bases) > 1:
        raise PatchError(f"Tick only one of {pretty(TRANSLATION)} and {pretty(CN_BASE)}.")
    chosen = bases[0] if bases else None
    if chosen and chosen["name"].lower() == TRANSLATION:
        tr = chosen
    elif chosen:
        cnb = chosen
    crc, applied = zlib.crc32(rom), None
    kind = rom_kind(crc, tr, cnb)
    if chosen:
        b = chosen["bps"]
        if not (len(rom) == b["target_size"] and crc == b["target_crc"]):  # not that base yet
            if crc != b["source_crc"]:
                other = {"en": "English", "cn": "Chinese"}.get(kind)
                raise PatchError(f"{chosen['path'].name} needs the Japanese ROM, Shining_Soul_II_JP.gba "
                                 f"(CRC32 {b['source_crc']:08X}). " +
                                 (f"This is already the {other} ROM: untick {pretty(chosen['name'])}."
                                  if other else f"Your ROM's CRC32 is {crc:08X}."))
            rom, crc, applied = apply_bps(rom, b, crc), b["target_crc"], chosen["name"]
            kind = rom_kind(crc, tr, cnb)
    elif mods and kind == "jp":
        raise PatchError(f"This is the Japanese ROM; tick {pretty(TRANSLATION)} (or {pretty(CN_BASE)} "
                         f"for the Chinese game) first.")
    if kind == "cn":
        swapped = []
        for p in mods:
            path, why = cn_version(p["name"])
            if path is None:
                raise PatchError(f"{p['path'].name} only works on the English ROM: {why}.")
            swapped.append(load_patch(path))
        mods = swapped
    for p in mods:
        if "bps" in p:
            p["writes"] = bps_writes(rom, p["bps"], crc)
    clash = conflicts(mods)
    if clash:
        raise PatchError("These patches write different bytes to the same place:\n" +
                         "\n".join(f"  {a} / {b} at 0x{o:08X}" for a, b, o in clash))
    return pad_rom(apply_patches(rom, mods)), applied, mods


def build(rom_path, patch_paths):
    """Apply patches to the ROM; return (output path, sha256). Raises PatchError."""
    rom = rom_path.read_bytes()
    patches = [load_patch(p) for p in patch_paths]
    out, applied, mods = build_rom(rom, patches, find_translation(), find_cn_base())
    OUTPUT_DIR.mkdir(exist_ok=True)
    path = output_name(rom_path, [p["name"] for p in mods] or [applied or TRANSLATION])
    path.write_bytes(out)
    sha = hashlib.sha256(out).hexdigest()
    path.with_suffix(".txt").write_text(
        f"input   {rom_path.name}  sha256 {hashlib.sha256(rom).hexdigest()}\n"
        f"output  {path.name}  sha256 {sha}\n" +
        (f"base patch {applied}.bps applied first\n" if applied else "") +
        "".join(f"  {p['name']} -> {p['path'].relative_to(PATCH_DIR)}\n" for p in mods
                if p["path"].parent.name == CN_DIR_NAME) +
        "patches (applied in this order):\n" +
        "".join(f"  {p['path'].name}  sha256 {hashlib.sha256(p['path'].read_bytes()).hexdigest()}\n"
                for p in patches))
    return path, sha


# ---------------------------------------------------------------- GUI

def run_gui():
    try:
        import tkinter as tk
        from tkinter import ttk, messagebox
    except ImportError as e:
        sys.exit(f"tkinter is not available ({e}).\nInstall it, e.g. on Arch/Omarchy: sudo pacman -S tk")

    for d in (PATCH_DIR, INPUT_DIR, OUTPUT_DIR):
        d.mkdir(exist_ok=True)
    root = tk.Tk()
    root.title("Shining Soul II Patch Manager")
    root.minsize(460, 420)

    top = ttk.Frame(root, padding=10)
    top.pack(fill="both", expand=True)

    ttk.Label(top, text="Input ROM (Input_ROM folder)").pack(anchor="w")
    rom_var = tk.StringVar()
    rom_box = ttk.Combobox(top, textvariable=rom_var, state="readonly")
    rom_box.pack(fill="x")
    rom_info = ttk.Label(top, text="", foreground="gray")
    rom_info.pack(anchor="w", pady=(2, 8))

    head = ttk.Frame(top)
    head.pack(fill="x")
    ttk.Label(head, text="Patches (patches folder)").pack(side="left")
    ttk.Button(head, text="None", width=6, command=lambda: set_all(False)).pack(side="right")
    ttk.Button(head, text="All", width=6, command=lambda: set_all(True)).pack(side="right", padx=4)

    box = ttk.Frame(top, relief="sunken", borderwidth=1)
    box.pack(fill="both", expand=True, pady=4)
    canvas = tk.Canvas(box, highlightthickness=0)
    scroll = ttk.Scrollbar(box, orient="vertical", command=canvas.yview)
    inner = ttk.Frame(canvas)
    inner.bind("<Configure>", lambda e: canvas.configure(scrollregion=canvas.bbox("all")))
    canvas.create_window((0, 0), window=inner, anchor="nw")
    canvas.configure(yscrollcommand=scroll.set)
    canvas.pack(side="left", fill="both", expand=True)
    scroll.pack(side="right", fill="y")
    for w in (canvas, inner):
        w.bind("<Button-4>", lambda e: canvas.yview_scroll(-1, "units"))
        w.bind("<Button-5>", lambda e: canvas.yview_scroll(1, "units"))
        w.bind("<MouseWheel>", lambda e: canvas.yview_scroll(-1 if e.delta > 0 else 1, "units"))

    status = ttk.Label(top, text="", wraplength=430, justify="left")
    status.pack(fill="x", pady=(6, 4))
    apply_btn = ttk.Button(top, text="Apply")
    apply_btn.pack(fill="x")

    state = {"patches": [], "roms": [], "vars": {}, "rom_sha": {}, "rom_crc": {}, "cbs": {}, "kind": None}
    bases = {"tr": find_translation(), "cnb": find_cn_base()}

    def language():
        """'cn' when the output will be the Chinese game, else 'en'."""
        v = state["vars"]
        if v.get(f"{CN_BASE}.bps") and v[f"{CN_BASE}.bps"].get():
            return "cn"
        if v.get(f"{TRANSLATION}.bps") and v[f"{TRANSLATION}.bps"].get():
            return "en"
        return "cn" if state["kind"] == "cn" else "en"

    def refresh_available():
        """Grey out what can't apply: English-only mods on the Chinese game, bases on a non-JP ROM."""
        def mark(p, ok, why):
            cb = state["cbs"][p.name]
            if not ok:
                state["vars"][p.name].set(False)
            cb.state(["!disabled"] if ok else ["disabled"])
            cb.config(text=cb.base_text + ("" if ok else why))
        base_ok = state["kind"] in (None, "jp")
        for p in state["patches"]:  # bases first: unticking them can change the language
            if p.stem.lower() in BASES:
                mark(p, base_ok, "  (your ROM is already patched)")
        lang = language()
        for p in state["patches"]:
            if p.stem.lower() not in BASES:
                mark(p, lang == "en" or cn_version(p.stem)[0] is not None, "  (English only)")
        update_status()

    def base_ticked(name):
        if state["vars"][name].get():
            for other in (f"{b}.bps" for b in BASES):
                if other != name and other in state["vars"]:
                    state["vars"][other].set(False)
        refresh_available()

    def set_all(on):
        for name, v in state["vars"].items():
            if Path(name).stem.lower() not in BASES and "disabled" not in state["cbs"][name].state():
                v.set(on)
        update_status()

    def selected():
        return [p for p in state["patches"] if state["vars"][p.name].get()]

    def update_status(*_):
        n = len(selected())
        status.config(text=f"{n} of {len(state['patches'])} patches selected.", foreground="")

    def rom_changed(*_):
        roms = {p.name: p for p in state["roms"]}
        p = roms.get(rom_var.get())
        if p is None:
            rom_info.config(text="Put a .gba file in Input_ROM.", foreground="red")
            return
        key = (p.name, p.stat().st_mtime, p.stat().st_size)
        if key not in state["rom_sha"]:
            data = p.read_bytes()
            state["rom_sha"][key] = hashlib.sha256(data).hexdigest()
            state["rom_crc"][key] = zlib.crc32(data)
        sha = state["rom_sha"][key]
        was, state["kind"] = state["kind"], rom_kind(state["rom_crc"][key], bases["tr"], bases["cnb"])
        tr_var = state["vars"].get(f"{TRANSLATION}.bps")
        if (state["kind"] == "jp" and was not in (None, "jp") and tr_var is not None
                and not any(state["vars"][f"{b}.bps"].get() for b in BASES if f"{b}.bps" in state["vars"])):
            tr_var.set(True)  # back on the Japanese ROM: default to English again
        refresh_available()
        known = expected_base()
        if known and sha not in known:
            rom_info.config(text=f"SHA-256 {sha[:16]}…  (not the ROM these patches were made for)",
                            foreground="#b36b00")
        else:
            rom_info.config(text=f"SHA-256 {sha[:16]}…" + ("  (matches the patches' base)" if known else ""),
                            foreground="gray")

    def rescan():
        patches, roms = list_patches(), list_roms()
        if [p.name for p in patches] != [p.name for p in state["patches"]]:
            for w in inner.winfo_children():
                w.destroy()
            old = {k: v.get() for k, v in state["vars"].items()}
            state["vars"] = {}
            for p in patches:
                v = tk.BooleanVar(value=old.get(p.name, p.stem.lower() == TRANSLATION))
                state["vars"][p.name] = v
                kind = {".ips32": "  (IPS32)", ".bps": "  (BPS)"}.get(p.suffix.lower(), "")
                label = pretty(p.stem) + ("  (base, applied first)" if p.stem.lower() in BASES else kind)
                cmd = (lambda n=p.name: base_ticked(n)) if p.stem.lower() in BASES else update_status
                cb = ttk.Checkbutton(inner, text=label, variable=v, command=cmd)
                cb.base_text = label
                state["cbs"][p.name] = cb
                cb.pack(anchor="w", padx=4, pady=1)
                cb.bind("<Button-4>", lambda e: canvas.yview_scroll(-1, "units"))
                cb.bind("<Button-5>", lambda e: canvas.yview_scroll(1, "units"))
            state["patches"] = patches
            bases.update(tr=find_translation(), cnb=find_cn_base())
            refresh_available()
        if [p.name for p in roms] != [p.name for p in state["roms"]]:
            state["roms"] = roms
            rom_box["values"] = [p.name for p in roms]
            if rom_var.get() not in rom_box["values"]:
                rom_var.set(roms[0].name if roms else "")
            rom_changed()
        root.after(1500, rescan)

    def do_apply():
        roms = {p.name: p for p in state["roms"]}
        rom = roms.get(rom_var.get())
        chosen = selected()
        if rom is None:
            messagebox.showerror("No ROM", "Put a .gba file in the Input_ROM folder.")
            return
        if not chosen:
            messagebox.showinfo("Nothing selected", "Tick at least one patch.")
            return
        try:
            path, sha = build(rom, chosen)
        except (PatchError, OSError) as e:
            status.config(text=str(e), foreground="red")
            messagebox.showerror("Patching failed", str(e))
            return
        status.config(text=f"Wrote Output_ROM/{path.name}\n({len(chosen)} patches, SHA-256 {sha[:16]}…)",
                      foreground="green")

    apply_btn.config(command=do_apply)
    rom_var.trace_add("write", rom_changed)
    rescan()
    root.mainloop()


if __name__ == "__main__":
    run_gui()
