"""Overlay track.json on the grid. usage: render_track.py RUNDIR W H"""
import sys, json
from PIL import Image, ImageDraw
d, W, H = sys.argv[1], int(sys.argv[2]), int(sys.argv[3])
raw = open(d + "/grid.bin", "rb").read(); S = 8
im = Image.new("RGB", (W*S, H*S)); dr = ImageDraw.Draw(im)
for y in range(H):
    for x in range(W):
        v = raw[(y*W+x)*2] | raw[(y*W+x)*2+1] << 8; k = (v >> 8) & 15
        if (v & 0xFF) == 1: k |= 1
        col = (40,40,40) if k == 1 else (200,200,200) if k == 0 else (120,120,220)
        if (v & 0xFF) == 1: col = (150, 60, 60)
        dr.rectangle([x*S, y*S, x*S+S-1, y*S+S-1], fill=col)
tr = json.load(open(d + "/track.json"))
cols = [(255,0,0),(255,140,0),(255,0,255),(0,120,255),(0,180,180),(0,160,0)]
for i in range(len(tr[0])):
    pts = [tuple(t[i][:2]) for t in tr]
    dr.line(pts, fill=cols[i], width=2)
    dr.ellipse([pts[-1][0]-3, pts[-1][1]-3, pts[-1][0]+3, pts[-1][1]+3], fill=cols[i])
    dr.text((pts[0][0]+4, pts[0][1]-8), str(i) if i < 5 else "P", fill=cols[i])
im = im.crop((300, 100, 700, 330)).resize((800, 460), Image.NEAREST)
im.save(d + "/track.png"); print(d + "/track.png")
