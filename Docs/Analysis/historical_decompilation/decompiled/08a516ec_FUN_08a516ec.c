
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a516ec(void)

{
  int *piVar1;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int iVar2;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int extraout_r12;
  int extraout_r12_00;
  int iVar3;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined8 uVar4;
  
  uVar4 = func_0x0797ec8e();
  iVar2 = extraout_r3;
  iVar3 = extraout_r12;
  if (in_NG != in_OV) {
    uVar4 = func_0x0813ec50();
    iVar2 = extraout_r3_00;
    iVar3 = extraout_r12_00;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_load(0xb,in_cr12,iVar3 + 0x15c);
  }
  if (in_NG != in_OV) {
    uVar4 = func_0x081c85ec();
    iVar2 = extraout_r3_01;
  }
  if (!(bool)in_CY) {
    coprocessor_load(0xd,in_cr10,unaff_r10);
  }
  coprocessor_load2(10,in_cr10,unaff_r11);
  if ((bool)in_ZR) {
    piVar1 = (int *)((uint)uVar4 & 0x8a51708);
    *piVar1 = (int)piVar1 - iVar2;
    piVar1[1] = (int)((ulonglong)uVar4 >> 0x20);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

