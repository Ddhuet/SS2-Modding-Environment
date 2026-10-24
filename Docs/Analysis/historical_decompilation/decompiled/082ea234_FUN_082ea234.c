
/* WARNING: Control flow encountered bad instruction data */

void FUN_082ea234(void)

{
  undefined4 uVar1;
  int in_r3;
  int unaff_r5;
  uint unaff_r6;
  uint unaff_r11;
  undefined4 unaff_lr;
  undefined1 unaff_pc;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr15;
  
  if (in_ZR || in_NG != (bool)in_OV) {
    unaff_r11 = unaff_r6 & 0xb87efa2b;
  }
  if (!in_ZR) {
    software_interrupt(0x441e03);
  }
  uVar1 = coprocessor_movefromRt(4,6,7,in_cr15,in_cr3);
  coprocessor_loadlong(0xb,in_cr15,unaff_r11);
                    /* WARNING: Could not recover jumptable at 0x082ea244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_NG) {
    (**(code **)(unaff_r6 - 0x905))(uVar1);
    return;
  }
  if (in_OV != '\0') {
    software_interrupt(0xdafc12);
  }
  if (!in_CY) {
    *(undefined1 *)(in_r3 + -0x6c6) = unaff_pc;
  }
  if (in_OV != '\0') {
    software_interrupt(0xd22e38);
  }
  if (in_CY) {
    *(undefined4 *)(unaff_r5 + -0xfc4) = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

