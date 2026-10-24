#!/usr/bin/env python3
"""Show a unified diff of two functions' disassembly (CN baseline vs US), addresses stripped.

    Tools/.venv/bin/python Tools/Scripts/func_pair_diff.py A_ADDR A_LEN B_ADDR B_LEN [A.gba B.gba]

Operands are kept; use it after func_diff.py to read what changed in one pair.
"""
import difflib
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from thumbdis import disasm  # noqa: E402


def main():
    aa, al, ba, bl = (int(v, 0) for v in sys.argv[1:5])
    ra = Path(sys.argv[5] if len(sys.argv) > 5 else "ROMs/Shining_Soul_II_CN_Baseline.gba").read_bytes()
    rb = Path(sys.argv[6] if len(sys.argv) > 6 else "ROMs/Shining_Soul_II_USA.gba").read_bytes()
    la = disasm(ra, aa, al)
    lb = disasm(rb, ba, bl)
    strip = lambda ls: [l[10:] for l in ls]
    for line in difflib.unified_diff(strip(la), strip(lb), f"A {aa:08X}", f"B {ba:08X}", n=3, lineterm=""):
        print(line)


if __name__ == "__main__":
    main()
