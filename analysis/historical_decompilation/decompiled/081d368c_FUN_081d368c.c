
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d368c(void)

{
  int unaff_r5;
  int unaff_r7;
  int *unaff_r10;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    unaff_r11 = unaff_r5 + (unaff_r7 >> 0xb) + (uint)in_CY;
  }
  if (in_ZR) {
    *unaff_r10 = unaff_r11;
    unaff_r10[-1] = (int)unaff_r10;
    unaff_r10[-2] = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

