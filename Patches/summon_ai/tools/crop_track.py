import json, sys
from PIL import Image
d, out = sys.argv[1], sys.argv[2]; log = json.load(open(d + "/log.json"))
xs = [p for r in log for p in ([r["pet"]] if r.get("pet") else []) + [r["own"]] + [(e[1], e[2]) for e in r["en"]]]
x0 = max(0, min(p[0] for p in xs) - 40); x1 = max(p[0] for p in xs) + 40
y0 = max(0, min(p[1] for p in xs) - 40); y1 = max(p[1] for p in xs) + 40
im = Image.open(d + "/track.png").crop((x0 * 2, y0 * 2, x1 * 2, y1 * 2))
im = im.resize((im.width * 2, im.height * 2), Image.NEAREST); im.save(out); print(out, im.size)
