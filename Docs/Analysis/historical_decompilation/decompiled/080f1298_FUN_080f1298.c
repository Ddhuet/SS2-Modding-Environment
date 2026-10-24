
/* WARNING: Control flow encountered bad instruction data */

void FUN_080f1298(undefined4 *param_1)

{
  uint unaff_r7;
  undefined2 *unaff_r8;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    software_interrupt(0xb3b5b5);
    *(undefined4 *)(unaff_r7 + (unaff_r7 >> 0xf)) = unaff_r10;
  }
  else {
    unaff_r11 = unaff_r11 + 700;
    coprocessor_load(5,in_cr11,unaff_r11);
  }
  if (!in_ZR && in_NG == in_OV) {
    software_interrupt(0xede9e5);
    if (in_ZR) {
      *param_1 = unaff_pc;
    }
    else {
      coprocessor_movefromRt(10,0,0,in_cr10,in_cr8);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r8 = (short)unaff_r11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

