
undefined4 FUN_08077c6c(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_lr;
  
  uVar6 = 0;
  puVar4 = (uint *)(param_1 * 4 + DAT_08077d1c);
  uVar1 = *puVar4 & 1;
  while( true ) {
    if (uVar1 == 0) {
      if (uVar6 < 0x10) {
        iVar2 = FUN_08001494(0x800);
        iVar7 = param_1 * 4;
        iVar5 = uVar6 * 0x28 + *(int *)(iVar7 + DAT_08077d20);
        *(int *)(iVar5 + 0x20) = iVar2;
        if (iVar2 != 0) {
          piVar3 = (int *)(uVar6 * 0x18 + *(int *)(iVar7 + DAT_08077d24));
          *piVar3 = param_1;
          piVar3[1] = uVar6;
          piVar3[2] = param_2;
          piVar3[5] = param_3;
          piVar3[4] = param_5 << 0x10 | param_4;
          *(undefined4 *)(iVar5 + 8) = 0x34;
          *(undefined4 *)(iVar5 + 0xc) = DAT_08077d28;
          *(int *)(iVar5 + 0x10) = iVar2 + DAT_08077d2c;
          *(undefined4 *)(iVar5 + 0x24) = 0;
          FUN_08000274(iVar5);
          *(uint *)(iVar7 + DAT_08077d1c) = *(uint *)(iVar7 + DAT_08077d1c) | 1 << (uVar6 & 0xff);
        }
      }
      return unaff_lr;
    }
    uVar6 = uVar6 + 1;
    if (0xf < uVar6) break;
    uVar1 = *puVar4 & 1 << (uVar6 & 0xff);
  }
  return unaff_lr;
}

