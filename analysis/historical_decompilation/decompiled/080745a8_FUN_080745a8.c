
undefined4 FUN_080745a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  piVar1 = DAT_08074654;
  uVar6 = 0;
  uVar2 = *DAT_08074650 & 1;
  while( true ) {
    if (uVar2 == 0) {
      if (uVar6 < 0x10) {
        puVar4 = (undefined4 *)(uVar6 * 0x18 + *DAT_08074654);
        *puVar4 = 0;
        puVar4[1] = uVar6;
        puVar4[2] = (uint)(param_4 != 0);
        puVar4[3] = param_3;
        puVar4[5] = param_1;
        puVar4[4] = param_2;
        iVar3 = FUN_08001494(0x400);
        iVar5 = uVar6 * 0x28 + *DAT_08074658;
        *(int *)(iVar5 + 0x20) = iVar3;
        if (iVar3 != 0) {
          *(undefined4 *)(iVar5 + 0xc) = DAT_0807465c;
          *(undefined4 *)(iVar5 + 8) = 0x34;
          *(int *)(iVar5 + 0x10) = iVar3 + 0x3fc;
          *(undefined4 *)(iVar5 + 0x24) = DAT_08074660;
          FUN_08000274(iVar5,*piVar1 + uVar6 * 0x18);
          *DAT_08074650 = *DAT_08074650 | 1 << (uVar6 & 0xff);
        }
      }
      return unaff_lr;
    }
    uVar6 = uVar6 + 1;
    if (0xf < uVar6) break;
    uVar2 = *DAT_08074650 & 1 << (uVar6 & 0xff);
  }
  return unaff_lr;
}

