
undefined4 FUN_080918dc(void)

{
  int *piVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int unaff_r9;
  undefined4 unaff_lr;
  undefined4 local_28;
  
  piVar1 = DAT_08091920;
  puVar3 = (undefined4 *)FUN_08001494(0x44);
  *piVar1 = (int)puVar3;
  iVar4 = FUN_0800086c();
  iVar6 = (iVar4 << 0x10) >> 0x10;
  uVar5 = (iVar6 + (iVar6 - ((iVar4 << 0x10) >> 0x1f) >> 1) * -2) * 0x10000 >> 0x10;
  if ((int)uVar5 < 0) {
    uVar5 = -uVar5;
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 == 0) {
    FUN_08065784(puVar3,DAT_08091938,0,0xffffffff,0);
  }
  else if (uVar5 == 1) {
    FUN_08065784(puVar3,DAT_0809198c,0,0xffffffff,0);
  }
  *(undefined1 *)(puVar3 + 7) = 0;
  *(undefined2 *)(puVar3 + 0xf) = 10;
  puVar7 = puVar3 + 0x10;
  *(undefined2 *)puVar7 = 0;
  *(undefined2 *)((int)puVar3 + 0x3e) = 0;
  puVar3[0xd] = 0x10000;
  puVar3[0xe] = 0x5800;
  local_28 = 1;
  sVar2 = 0;
  uVar8 = 0;
  if (*DAT_08091990 != 0) {
    do {
      if (uVar8 == 1) {
        if (unaff_r9 != 0) {
          if (uVar5 == 0) {
            FUN_08065784(puVar3,DAT_08091a28,0,0xffffffff,0);
          }
          else if (uVar5 == 1) {
            FUN_08065784(puVar3,DAT_08091a54,0,0xffffffff,0);
          }
          local_28 = 1;
          *(undefined2 *)(puVar3 + 0xf) = 10;
          *(undefined2 *)puVar7 = 0;
          *(undefined2 *)((int)puVar3 + 0x3e) = 0;
          uVar8 = 2;
        }
      }
      else if (uVar8 < 2) {
        if ((uVar8 == 0) &&
           (iVar4 = puVar3[0xd] + DAT_080919b8, puVar3[0xd] = iVar4, iVar4 < 0x8001)) {
          if (uVar5 == 0) {
            FUN_08065784(puVar3,DAT_080919d0,0,0xffffffff,0);
          }
          else if (uVar5 == 1) {
            FUN_08065784(puVar3,DAT_08091a00,0,0xffffffff,0);
          }
          local_28 = 0;
          *(undefined1 *)(puVar3 + 7) = 0;
          *(undefined2 *)(puVar3 + 0xf) = 10;
          *(undefined2 *)puVar7 = 0;
          *(undefined2 *)((int)puVar3 + 0x3e) = 0;
          uVar8 = 1;
        }
      }
      else if (uVar8 == 2) {
        iVar4 = puVar3[0xd] + DAT_08091a70;
        puVar3[0xd] = iVar4;
        if (iVar4 <= DAT_08091a74) {
          sVar2 = 0;
          uVar8 = 6;
        }
      }
      else if ((uVar8 == 6) && (sVar2 = sVar2 + 1, sVar2 == 0x3d)) {
        uVar8 = 0xff;
      }
      FUN_08000af0(0x10,puVar3[3],1);
      unaff_r9 = FUN_0806599c(puVar3,*(undefined2 *)(puVar3 + 0xf),(int)puVar3 + 0x3e,puVar7,
                              local_28);
      FUN_08007378((int)puVar3[0xd] >> 8,(int)puVar3[0xe] >> 8,*(undefined2 *)(puVar3 + 0xf),
                   *(undefined2 *)((int)puVar3 + 0x3e),0,puVar3 + 7,puVar3[2],*puVar3);
      FUN_080003f0();
      piVar1 = DAT_08091afc;
    } while ((uVar8 != 0xff) && (*DAT_08091afc != 0));
    if (*DAT_08091afc != 0) {
      FUN_08001538();
      *piVar1 = 0;
    }
  }
  return unaff_lr;
}

