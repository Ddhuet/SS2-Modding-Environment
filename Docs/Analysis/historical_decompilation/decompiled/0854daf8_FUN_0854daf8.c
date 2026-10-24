
/* WARNING: Control flow encountered bad instruction data */

void FUN_0854daf8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int extraout_r3;
  uint unaff_r4;
  int *unaff_r5;
  int *piVar2;
  undefined1 *unaff_r6;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined1 *unaff_r9;
  undefined4 unaff_r10;
  int iVar3;
  int extraout_r12;
  int in_r12;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  piVar2 = unaff_r5 + 0x164;
  iVar3 = *unaff_r5;
  if (!(bool)in_OV) {
    software_interrupt(0x442f2c);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    piVar2 = unaff_r5 + 0x219;
    coprocessor_load(6,in_cr12,piVar2);
  }
  if ((bool)in_OV) {
    param_4 = iRam0854db0c;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar1 = (uint)in_CY << 0x1f | unaff_r4 >> 1;
    in_CY = CARRY4((uint)&stack0x00000000,uVar1);
    in_OV = SCARRY4((int)&stack0x00000000,uVar1);
    unaff_r9 = &stack0x00000000 + uVar1;
    in_NG = (int)unaff_r9 < 0;
    in_ZR = unaff_r9 == (undefined1 *)0x0;
  }
  if (!(bool)in_CY) {
    software_interrupt(0x362030);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    uRam0854db44 = 0x854db1c;
    iRam0854db20 = param_1;
    uRam0854db24 = param_2;
    uRam0854db28 = param_3;
    iRam0854db2c = param_4;
    piRam0854db30 = piVar2;
    iRam0854db34 = unaff_r7;
    puRam0854db38 = unaff_r9;
    iRam0854db3c = iVar3;
    uRam0854db40 = unaff_lr;
  }
  if (in_NG != in_OV) {
    software_interrupt(0xc9bdbd);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_function(5,0xe,6,in_cr14,in_cr1,in_cr13);
  }
  if (in_NG == in_OV) {
    if (!(bool)in_ZR && in_NG == in_OV) {
      uRam0854db50 = 0x854db30;
      iRam0854db34 = param_1;
      puRam0854db38 = unaff_r6;
      iRam0854db3c = unaff_r7;
      uRam0854db40 = unaff_r8;
      uRam0854db44 = unaff_r10;
      iRam0854db48 = in_r12;
      uRam0854db4c = unaff_lr;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xc9c9ca);
  if ((bool)in_NG) {
    unaff_r9 = *(undefined1 **)(iVar3 + -0xc);
    param_2 = *(undefined4 *)(iVar3 + -0x14);
  }
  if ((bool)in_CY) {
    param_4 = iRam080086a0;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    param_1 = func_0x08108cac(param_1,param_2);
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if ((bool)in_ZR) {
    *(undefined4 *)(param_1 + 0x898) = unaff_r8;
  }
  if (!(bool)in_OV) {
    iVar3 = *(int *)(unaff_r9 + -4);
  }
  if ((bool)in_ZR) {
    software_interrupt(0x890709);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_load(1,in_cr0,unaff_r4 - 0x100);
    piVar2[-1] = in_r12;
    piVar2[-2] = iVar3;
    piVar2[-3] = (int)piVar2;
    piVar2[-4] = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

