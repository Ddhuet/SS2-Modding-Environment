
/* WARNING: Control flow encountered bad instruction data */

void FUN_086c643a(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int unaff_r9;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    *param_3 = unaff_r11;
  }
  if (in_CY && !in_ZR) {
    in_ZR = unaff_r9 + -0x7ffffff5 + (uint)in_CY == 0;
  }
  if (!in_ZR) {
    software_interrupt(0xbb82ba);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

