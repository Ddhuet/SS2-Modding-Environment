
/* WARNING: Control flow encountered bad instruction data */

void FUN_08242e02(void)

{
  uint unaff_r4;
  int unaff_r5;
  undefined4 unaff_r11;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_stack_00000000;
  
  if (!(bool)in_CY || (bool)in_ZR) {
    unaff_r11 = in_stack_00000000;
  }
  if ((bool)in_OV) {
    *(char *)(unaff_lr + -0x252) = (char)unaff_r5;
  }
  if ((bool)in_ZR) {
    func_0x090567be();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *(undefined4 *)(unaff_r5 + (unaff_r4 >> 9 | unaff_r4 << 0x17)) = unaff_r11;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    software_interrupt(0x9da286);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

