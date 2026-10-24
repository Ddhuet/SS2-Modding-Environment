"""Render grid.bin (+ entity marks) to PNG. usage: python3 render_grid.py RUNDIR W H [x,y,label ...]"""
import sys
from PIL import Image, ImageDraw
d, W, H = sys.argv[1], int(sys.argv[2]), int(sys.argv[3])
raw = open(d + "/grid.bin", "rb").read()
S = 8
im = Image.new("RGB", (W*S, H*S)); dr = ImageDraw.Draw(im)
for y in range(H):
    for x in range(W):
        c = raw[(y*W+x)*2] | raw[(y*W+x)*2+1] << 8; k = (c >> 8) & 15
        col = (40,40,40) if k == 1 else (200,200,200) if k == 0 else (120,120,220)
        dr.rectangle([x*S, y*S, x*S+S-1, y*S+S-1], fill=col)
for m in sys.argv[4:]:
    x, y, lab = m.split(","); x, y = float(x), float(y)
    dr.ellipse([x-3, y-3, x+3, y+3], fill=(255,0,0) if lab != "P" else (0,200,0)); dr.text((x+4, y-6), lab, fill=(255,255,0))
im.save(d + "/grid.png"); print(d + "/grid.png")
