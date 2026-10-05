
undefined4 FUN_080920e4(void)

{
  int *piVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int unaff_r9;
  undefined4 unaff_lr;
  undefined4 local_28;
  
  piVar1 = DAT_08092154;
  puVar3 = (undefined4 *)FUN_08001494(0x44);
  *piVar1 = (int)puVar3;
  FUN_0800086c();
  FUN_08065784(puVar3,DAT_08092158,0,0xffffffff,0);
  *(undefined1 *)(puVar3 + 7) = 0;
  *(undefined2 *)(puVar3 + 0xf) = 10;
  puVar4 = puVar3 + 0x10;
  *(undefined2 *)puVar4 = 0;
  *(undefined2 *)((int)puVar3 + 0x3e) = 0;
  puVar3[0xd] = 0x10000;
  puVar3[0xe] = 0x5800;
  local_28 = 1;
  sVar2 = 0;
  uVar6 = 0;
  if (*piVar1 != 0) {
    do {
      if (uVar6 == 1) {
        if (unaff_r9 != 0) {
          FUN_08065784(puVar3,DAT_080921d8,0,0xffffffff,0);
          local_28 = 1;
          *(undefined2 *)(puVar3 + 0xf) = 10;
          *(undefined2 *)puVar4 = 0;
          *(undefined2 *)((int)puVar3 + 0x3e) = 0;
          uVar6 = 2;
        }
      }
      else if (uVar6 < 2) {
        if ((uVar6 == 0) &&
           (iVar5 = puVar3[0xd] + DAT_080921a0, puVar3[0xd] = iVar5, iVar5 < 0x8001)) {
          FUN_08065784(puVar3,DAT_080921a4,0,0xffffffff,0);
          local_28 = 0;
          *(undefined1 *)(puVar3 + 7) = 0;
          *(undefined2 *)(puVar3 + 0xf) = 10;
          *(undefined2 *)puVar4 = 0;
          *(undefined2 *)((int)puVar3 + 0x3e) = 0;
          uVar6 = 1;
        }
      }
      else if (uVar6 == 2) {
        iVar5 = puVar3[0xd] + DAT_080921f4;
        puVar3[0xd] = iVar5;
        if (iVar5 <= DAT_080921f8) {
          sVar2 = 0;
          uVar6 = 6;
        }
      }
      else if ((uVar6 == 6) && (sVar2 = sVar2 + 1, sVar2 == 0x3d)) {
        uVar6 = 0xff;
      }
      FUN_08000af0(0x10,puVar3[3],1);
      unaff_r9 = FUN_0806599c(puVar3,*(undefined2 *)(puVar3 + 0xf),(int)puVar3 + 0x3e,puVar4,
                              local_28);
      FUN_08007378((int)puVar3[0xd] >> 8,(int)puVar3[0xe] >> 8,*(undefined2 *)(puVar3 + 0xf),
                   *(undefined2 *)((int)puVar3 + 0x3e),0,puVar3 + 7,puVar3[2],*puVar3);
      FUN_080003f0();
      piVar1 = DAT_0809227c;
    } while ((uVar6 != 0xff) && (*DAT_0809227c != 0));
    if (*DAT_0809227c != 0) {
      FUN_08001538();
      *piVar1 = 0;
    }
  }
  return unaff_lr;
}

