
/* WARNING: Control flow encountered bad instruction data */

void FUN_0865af2e(uint param_1,uint param_2)

{
  uint unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG == in_OV) {
    unaff_r11 = param_2 & param_1 >> 0xb;
    software_interrupt(0xf140b8);
  }
  if (!in_ZR && in_NG == in_OV) {
    uRam0865af42 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

