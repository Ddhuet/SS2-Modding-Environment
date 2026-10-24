
undefined4 FUN_08099870(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_lr;
  undefined4 local_68 [2];
  undefined4 local_60;
  int local_5c;
  undefined1 uStack_4c;
  undefined1 local_4b;
  short local_34;
  short local_32;
  undefined2 local_30;
  undefined1 auStack_2e [2];
  int local_2c;
  int local_28;
  uint local_24;
  
  iVar10 = DAT_080998b4;
  iVar8 = DAT_080998b0;
  param_2 = param_2 + -1;
  if ((param_2 == 0) || (param_2 == 4)) {
    local_28 = FUN_080ba8a4(*(short *)((uint)*(ushort *)(param_2 * 2 + DAT_080998b4) * 2 +
                                      DAT_080998b0) * 0x180,0x130);
  }
  else {
    local_28 = *(short *)((uint)*(ushort *)(param_2 * 2 + DAT_08099b48) * 2 + DAT_08099b44) * 0x180;
    if (local_28 < 0) {
      local_28 = local_28 + 0xff;
    }
    local_28 = local_28 >> 8;
    iVar8 = DAT_08099b44;
    iVar10 = DAT_08099b48;
  }
  local_2c = *(short *)((*(ushort *)(param_2 * 2 + iVar10) + 0x40) * 2 + iVar8) * 0x180;
  if (local_2c < 0) {
    local_2c = local_2c + 0xff;
  }
  local_2c = local_2c >> 8;
  iVar8 = *(int *)(*DAT_08099b4c + 0x14);
  iVar10 = *(int *)(*DAT_08099b4c + 0x18);
  FUN_08065784(local_68,DAT_08099b50,5,0xffffffff,0);
  FUN_08000af0(0x15,local_5c + 0x20,1);
  local_4b = 5;
  local_24 = DAT_08099b54;
  do {
    iVar8 = iVar8 + local_2c;
    iVar10 = iVar10 + local_28;
    FUN_0800b570((int)(short)((uint)iVar8 >> 8),(int)(short)((uint)iVar10 >> 8),&local_34,&local_32,
                 0,0);
    iVar4 = FUN_0800c5e8();
    if ((((iVar4 == 0) && (iVar4 = FUN_0800c6dc(), iVar4 == 0)) &&
        (iVar4 = FUN_0800c61c(), iVar4 == 0)) && (iVar4 = FUN_0800c684(), iVar4 == 0)) {
      FUN_0806599c(local_68,10,&local_30,auStack_2e,1);
      uVar2 = FUN_0800b5ac(iVar8 >> 8,iVar10 >> 8,0);
      FUN_08007378((int)local_34,(int)local_32,10,local_30,uVar2,&uStack_4c,local_60,local_68[0]);
    }
    iVar5 = FUN_080020f4();
    iVar4 = DAT_08099b58;
    iVar9 = *(int *)(iVar5 * 0x154 + DAT_08099b58 + 0x94);
    iVar5 = FUN_080020f4();
    iVar9 = (int)(short)((uint)(iVar8 - iVar9) >> 8);
    iVar5 = (iVar10 - *(int *)(iVar5 * 0x154 + iVar4 + 0x98)) * 0x100 >> 0x10;
    uVar3 = FUN_080b9a9c(iVar9 * iVar9 + iVar5 * iVar5);
    if ((((uVar3 < 0x14) && (iVar5 = FUN_0800c748(), iVar5 == 0)) &&
        ((iVar5 = FUN_0800c61c(), iVar5 == 0 &&
         ((iVar5 = FUN_0800c6dc(), piVar1 = DAT_08099b4c, iVar5 == 0 &&
          (*(short *)(*DAT_08099b4c + 0xc) != 0xb)))))) &&
       ((iVar5 = FUN_080020f4(), (*(uint *)(iVar5 * 0x154 + iVar4 + 0x38) & 0x2000) == 0 &&
        ((((iVar5 = FUN_080020f4(), *(char *)(iVar5 * 0x154 + iVar4 + 0x70) != '\0' &&
           (iVar5 = FUN_080020f4(), *(short *)(iVar5 * 0x154 + iVar4 + 0x26) != 0xe)) &&
          (iVar5 = FUN_080020f4(), *(short *)(iVar5 * 0x154 + iVar4 + 0x26) != 0xb)) &&
         (iVar5 = FUN_080020f4(), *(short *)(iVar5 * 0x154 + iVar4 + 0x26) != 0xc)))))) {
      iVar5 = FUN_080020f4();
      puVar7 = (ushort *)*piVar1;
      if (*(int *)((iVar5 * 0x55 + (uint)*puVar7) * 4 + iVar4 + 0xec) != *(int *)(puVar7 + 0x28)) {
        FUN_08029db4(1,0x1e,5);
        iVar5 = FUN_080020f4();
        *(short *)(iVar5 * 0x154 + iVar4 + 0xb8) = (short)DAT_08099b5c;
        iVar5 = FUN_080020f4();
        puVar7 = (ushort *)*piVar1;
        *(undefined4 *)((iVar5 * 0x55 + (uint)*puVar7) * 4 + iVar4 + 0xec) =
             *(undefined4 *)(puVar7 + 0x28);
      }
    }
    FUN_080003f0();
    uVar6 = local_24 * 0x10000 + DAT_08099b60;
    local_24 = uVar6 >> 0x10;
  } while ((int)uVar6 >> 0x10 != -1);
  iVar8 = FUN_0800048c();
  *(undefined4 *)(iVar8 + 8) = 0;
  return unaff_lr;
}

