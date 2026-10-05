
undefined4 FUN_08091224(void)

{
  int *piVar1;
  short sVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int unaff_r9;
  undefined4 unaff_lr;
  undefined4 local_28;
  
  piVar1 = DAT_08091268;
  puVar3 = (undefined4 *)FUN_08001494(0x44);
  *piVar1 = (int)puVar3;
  sVar2 = FUN_0800086c();
  sVar2 = FUN_080ba93c((int)sVar2,3);
  uVar4 = (uint)sVar2;
  if ((int)uVar4 < 0) {
    uVar4 = -uVar4;
  }
  uVar4 = uVar4 & 0xff;
  uVar6 = DAT_08091294;
  if (uVar4 != 1) {
    if (1 < uVar4) {
      if (uVar4 == 2) {
        FUN_08065784(puVar3,DAT_080912e8,0,0xffffffff,0);
      }
      goto LAB_080912aa;
    }
    uVar6 = DAT_0809127c;
    if (uVar4 != 0) goto LAB_080912aa;
  }
  FUN_08065784(puVar3,uVar6,0,0xffffffff,0);
LAB_080912aa:
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
  if (*DAT_080912ec != 0) {
    do {
      if (uVar8 == 1) {
        if (unaff_r9 != 0) {
          uVar6 = DAT_080913bc;
          if (uVar4 == 1) {
LAB_080913b0:
            FUN_08065784(puVar3,uVar6,0,0xffffffff,0);
          }
          else if (uVar4 < 2) {
            uVar6 = DAT_080913a4;
            if (uVar4 == 0) goto LAB_080913b0;
          }
          else if (uVar4 == 2) {
            FUN_08065784(puVar3,DAT_080913e8,0,0xffffffff,0);
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
           (iVar5 = puVar3[0xd] + DAT_08091320, puVar3[0xd] = iVar5, iVar5 < 0x8001)) {
          uVar6 = DAT_0809134c;
          if (uVar4 == 1) {
LAB_0809133e:
            FUN_08065784(puVar3,uVar6,0,0xffffffff,0);
          }
          else if (uVar4 < 2) {
            uVar6 = DAT_08091334;
            if (uVar4 == 0) goto LAB_0809133e;
          }
          else if (uVar4 == 2) {
            FUN_08065784(puVar3,DAT_0809137c,0,0xffffffff,0);
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
        iVar5 = puVar3[0xd] + DAT_08091404;
        puVar3[0xd] = iVar5;
        if (iVar5 <= DAT_08091408) {
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
      piVar1 = DAT_08091490;
    } while ((uVar8 != 0xff) && (*DAT_08091490 != 0));
    if (*DAT_08091490 != 0) {
      FUN_08001538();
      *piVar1 = 0;
    }
  }
  return unaff_lr;
}

