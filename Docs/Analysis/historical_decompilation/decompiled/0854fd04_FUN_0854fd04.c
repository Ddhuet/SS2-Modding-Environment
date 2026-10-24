
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0854fd04(int param_1)

{
  int unaff_r6;
  uint unaff_r11;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr11;
  
  if (in_CY && !in_ZR) {
    if (in_CY && !in_ZR) {
      func_0x0a16bf8c(param_1);
    }
    if (in_NG != in_OV) {
      in_OV = SCARRY4((int)&stack0x00000000,unaff_r6 >> 0x1b);
      in_NG = (int)(&stack0x00000000 + (unaff_r6 >> 0x1b)) < 0;
    }
    if (!(bool)in_OV) {
      func_0x0682ea7c();
    }
    if (!(bool)in_OV) {
      in_NG = (int)(&stack0x00000000 +
                   (unaff_r11 >> (unaff_r11 & 0x1f) | unaff_r11 << 0x20 - (unaff_r11 & 0x1f))) < 0;
    }
    if ((bool)in_NG) {
      software_interrupt(0x567b70);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_loadlong(5,in_cr11,param_1 + 0x274);
  coprocessor_loadlong(6,in_cr5,param_1 + -0x1c0);
  return *(undefined4 *)(unaff_lr + 4);
}

