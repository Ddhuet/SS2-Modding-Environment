#!/bin/bash
# batch.sh FRAMES TAG [ROM...]: every Patches/summon_ai/Starting_Info/*.ss0 (except 1/2 and Ready_To_Cast) on vanilla and on Patches/summon_ai/test.gba
cd /home/david/Documents/SS2_Modding
F=$1; T=$2
for st in Corridor_Two_Enemies_Squirrel Dumb_Stuck_Wall Stuck_Wall_2 Stuck_Wall_3 Stuck_Wall_4 Through_Wall Bottom_Of_Wall Open_Area_One_Enemy_Squirrel; do
  for v in van mod; do
    rom="Patches/summon_ai/Starting_Info/Shining Soul II (English)+4_patches.gba"; [ $v = mod ] && rom=Patches/summon_ai/test.gba
    ( Tools/.venv/bin/python Patches/summon_ai/tools/run_summon.py $st.ss0 $F --rom "$rom" --tag $T-$v-$st --every 100000 --png > Patches/summon_ai/runs/$T-$v-$st.txt 2>&1 ) &
  done
done
wait
for st in Corridor_Two_Enemies_Squirrel Dumb_Stuck_Wall Stuck_Wall_2 Stuck_Wall_3 Stuck_Wall_4 Through_Wall Bottom_Of_Wall Open_Area_One_Enemy_Squirrel; do
  for v in van mod; do echo "$st $v: $(grep SUMMARY Patches/summon_ai/runs/$T-$v-$st.txt || tail -2 Patches/summon_ai/runs/$T-$v-$st.txt)"; done
done
