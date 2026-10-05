
/* WARNING: Control flow encountered bad instruction data */

void FUN_08268024(void)

{
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr13;
  
  if (in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZR) {
    coprocessor_load(10,in_cr13,unaff_r11 + 0xf8);
  }
  if (in_ZR || in_NG != in_OV) {
    if (!in_ZR) {
      coprocessor_movefromRt(0xb,2,0,in_cr3,in_cr4);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

