"""events.py RUN_DIR...: list phase changes into home (with reason), target switches, attacks, owner HP drops."""
import json, sys
WHY = ["-", "gone", "no_path", "stuck", "rescue", "leash"]
for d in sys.argv[1:]:
    log = json.load(open(d + "/log.json")); ev = []
    for a, b in zip(log, log[1:]):
        if a.get("ph") != "home" and b.get("ph") == "home":
            ev.append(f"{b['i']}:home({WHY[b.get('sm', {}).get('why', 0)]})")
        if a.get("ph") != "hit" and b.get("ph") == "hit": ev.append(f"{b['i']}:atk{b['tgt']:#x}")
        if a.get("ph") == "orbit" and b.get("ph") == "chase": ev.append(f"{b['i']}:chase{b['tgt']:#x}")
        if b["hp"] < a["hp"]: ev.append(f"{b['i']}:OUCH{a['hp']}->{b['hp']}")
    print(d.split("/")[-1].rsplit("-", 1)[0], " ".join(ev))
