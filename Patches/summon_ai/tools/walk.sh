#!/bin/bash
# walk.sh TAG: scripted walking on every state, vanilla vs mod
cd /home/david/Documents/SS2_Modding
T=$1
K="0:- 40:RIGHT 100:- 160:LEFT 260:- 320:DOWN 370:- 430:UP 520:- 600:LEFT+DOWN 660:- 720:RIGHT+UP 790:-"
for st in Corridor_Two_Enemies_Squirrel Dumb_Stuck_Wall Stuck_Wall_2 Stuck_Wall_3 Stuck_Wall_4 Through_Wall Bottom_Of_Wall Open_Area_One_Enemy_Squirrel; do
  for v in van mod; do
    rom="Patches/summon_ai/Starting_Info/Shining Soul II (English)+4_patches.gba"; [ $v = mod ] && rom=Patches/summon_ai/test.gba
    ( Tools/.venv/bin/python Patches/summon_ai/tools/run_summon.py $st.ss0 900 --rom "$rom" --tag $T-$v-$st --keys "$K" --every 100000 --png > Patches/summon_ai/runs/$T-$v-$st.txt 2>&1 ) &
  done
done
wait
for st in Corridor_Two_Enemies_Squirrel Dumb_Stuck_Wall Stuck_Wall_2 Stuck_Wall_3 Stuck_Wall_4 Through_Wall Bottom_Of_Wall Open_Area_One_Enemy_Squirrel; do
  for v in van mod; do echo "$st $v: $(grep SUMMARY Patches/summon_ai/runs/$T-$v-$st.txt | cut -c9-150 || tail -2 Patches/summon_ai/runs/$T-$v-$st.txt)"; done
done
