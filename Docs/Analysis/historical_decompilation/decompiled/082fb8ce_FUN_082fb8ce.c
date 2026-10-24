
/* WARNING: Control flow encountered bad instruction data */

void FUN_082fb8ce(void)

{
  int unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r11;
  int in_r12;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr7;
  
  if (in_ZR || in_NG != (bool)in_OV) {
    *(undefined4 *)(in_r12 + 0x5e5) = unaff_r11;
  }
  if (!in_NG) {
    *(char *)(unaff_r7 + 0x3cf) = (char)unaff_r11;
  }
                    /* WARNING: Could not recover jumptable at 0x082fb8d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_ZR) {
    (*(code *)(unaff_r8 & 0x7800000))();
    return;
  }
  coprocessor_function2(4,2,6,in_cr1,in_cr7,in_cr7);
  if (in_NG != (bool)in_OV) {
    software_interrupt(0xb8bde6);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

