
undefined4 FUN_08095928(byte param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  bool bVar13;
  undefined4 unaff_lr;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  int local_a4;
  undefined1 auStack_94 [7];
  undefined1 local_8d;
  undefined4 local_7c [7];
  undefined1 local_60 [24];
  undefined4 local_48;
  undefined2 local_44;
  undefined2 local_42 [5];
  undefined4 local_38;
  int local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  undefined2 *local_28;
  undefined2 *local_24;
  
  if ('\x14' < (char)param_1) {
    param_1 = 0x14;
  }
  iVar7 = (uint)param_1 * 0x1000000;
  local_30 = local_7c;
  local_24 = local_42;
  local_28 = &local_44;
  local_2c = local_60;
  iVar8 = iVar7 >> 0x18;
  do {
    iVar3 = FUN_08001494(iVar8 * 0x18);
    FUN_080003f0();
  } while (iVar3 == 0);
  local_48 = 0;
  FUN_080b9a88(&local_48,iVar3,iVar8 * 6 & DAT_08095a2c | 0x5000000);
  FUN_08065784(local_b0,DAT_08095a30,7,0xffffffff,1);
  FUN_08065784(local_30,DAT_08095a34,0,0xffffffff,1);
  local_8d = 0;
  *(undefined1 *)(local_30 + 7) = 1;
  FUN_08000af0(0x10,local_a4 + 0xe0,1);
  FUN_08000af0(0x11,local_30[3],1);
  uVar6 = DAT_08095a38;
  uVar12 = 0;
  if (0 < iVar8) {
    do {
      puVar4 = (undefined4 *)((char)uVar12 * 0x18 + iVar3);
      *puVar4 = uVar6;
      puVar4[1] = 0xa000;
      *(undefined1 *)((int)puVar4 + 9) = 1;
      uVar9 = (int)(char)uVar12 + 1;
      uVar12 = uVar9 & 0xff;
    } while ((int)(uVar9 * 0x1000000) >> 0x18 < iVar8);
  }
  local_38 = 0;
  *local_24 = 0;
  *local_28 = (undefined2)local_38;
  *(undefined1 *)(iVar3 + 8) = 1;
  *(undefined1 *)(iVar3 + 0xb) = 0x1e;
  FUN_0801a74c(6);
  while (iVar5 = FUN_0801a6dc(), iVar5 == 0) {
    FUN_080003f0();
  }
  do {
    local_34 = 0;
    uVar12 = 0;
    bVar13 = false;
    if (0 < iVar7) {
      do {
        iVar5 = (int)(char)uVar12;
        iVar10 = iVar5 * 0x18 + iVar3;
        if (*(char *)(iVar10 + 0xb) == '\0') {
          if (((iVar5 < iVar8 + -1) && (*(char *)(iVar10 + 8) != '\0')) &&
             (*(char *)(iVar10 + 0x20) == '\0')) {
            *(undefined1 *)(iVar10 + 0x20) = 1;
            *(undefined1 *)(iVar10 + 0x23) = 0x1e;
          }
        }
        else {
          *(char *)(iVar10 + 0xb) = *(char *)(iVar10 + 0xb) + -1;
        }
        uVar12 = *(byte *)(iVar5 * 0x18 + iVar3 + 8) - 1;
        if (uVar12 < 8) {
                    /* WARNING: Could not recover jumptable at 0x08095ab2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(uVar12 * 4 + DAT_08095ab4))();
          return uVar6;
        }
        bVar1 = *(byte *)(iVar5 * 0x18 + iVar3 + 8);
        if ((bVar1 < 4) && (bVar1 != 3)) {
          local_34 = 1;
        }
        if (*(char *)(iVar5 * 0x18 + iVar3 + 8) != '\b') {
          bVar13 = true;
        }
        uVar12 = iVar5 + 1U & 0xff;
      } while ((int)((iVar5 + 1U) * 0x1000000) < iVar7);
    }
    uVar12 = iVar7 - 0x1000000U >> 0x18;
    uVar9 = uVar12;
    while (-1 < (int)(uVar9 * 0x1000000)) {
      iVar5 = ((int)(uVar9 * 0x1000000) >> 0x18) * 0x18 + iVar3;
      if ((*(byte *)(iVar5 + 8) < 4) && (local_34 == 0)) {
        *(undefined1 *)(iVar5 + 8) = 4;
      }
      piVar11 = (int *)((char)uVar12 * 0x18 + iVar3);
      uVar2 = FUN_0806599c(local_b0,*(undefined2 *)((int)piVar11 + 0xe),piVar11 + 4,
                           (int)piVar11 + 0x12,*(undefined1 *)((int)piVar11 + 9));
      *(undefined2 *)(piVar11 + 5) = uVar2;
      FUN_080082b0(*piVar11 >> 8,piVar11[1] >> 8,*(undefined2 *)((int)piVar11 + 0xe),
                   (short)piVar11[4],0,auStack_94,local_a8,local_b0[0],0);
      uVar9 = (int)(char)uVar12 - 1;
      uVar12 = uVar9 & 0xff;
    }
    FUN_0806599c(local_30,local_38,local_28,local_24,1);
    FUN_080082b0(0x20,0x28,local_38,*local_28,0,local_2c,local_30[2],local_7c[0],0);
    FUN_080003f0();
    iVar5 = FUN_080021a8();
    if (iVar5 == 1) {
      bVar13 = false;
    }
  } while (bVar13);
  FUN_0801a7e4(6);
  while (iVar7 = FUN_0801a6dc(), iVar7 == 0) {
    FUN_080003f0();
  }
  FUN_08059aac(0x18a);
  FUN_08001538(iVar3);
  return unaff_lr;
}

