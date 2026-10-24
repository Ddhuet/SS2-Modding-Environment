"""Find all Thumb BL call sites targeting given addresses. usage: find_bl.py ROM addr..."""
import sys
rom = open(sys.argv[1], "rb").read()
targets = {int(a, 16) for a in sys.argv[2:]}
for off in range(0, min(len(rom), 0x01000000) - 4, 2):
    h1 = rom[off] | rom[off+1] << 8; h2 = rom[off+2] | rom[off+3] << 8
    if h1 & 0xF800 == 0xF000 and h2 & 0xF800 == 0xF800:
        hi = h1 & 0x7FF
        if hi & 0x400: hi -= 0x800
        t = 0x08000000 + off + 4 + (hi << 12) + ((h2 & 0x7FF) << 1)
        if t in targets: print(f"{t:08X} <- {0x08000000+off:08X}")
