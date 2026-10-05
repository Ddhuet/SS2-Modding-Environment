
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d1a6e(void)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar1;
  undefined4 *extraout_r3;
  undefined4 *extraout_r3_00;
  undefined4 *puVar2;
  int unaff_r4;
  int unaff_r6;
  undefined4 *extraout_r12;
  undefined4 *extraout_r12_00;
  undefined4 *puVar3;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr2;
  
  func_0x0747f176();
  uVar1 = extraout_r2;
  puVar2 = extraout_r3;
  puVar3 = extraout_r12;
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0748864e();
    uVar1 = extraout_r2_00;
    puVar2 = extraout_r3_00;
    puVar3 = extraout_r12_00;
  }
  if ((bool)in_CY) {
    puVar2 = *(undefined4 **)(unaff_r6 + -0x10);
  }
  if ((bool)in_ZR) {
    puVar2 = (undefined4 *)*puVar3;
  }
  if ((bool)in_CY) {
    *puVar2 = uVar1;
  }
  else {
    coprocessor_storelong(6,in_cr2,unaff_r4 + -0x4c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

