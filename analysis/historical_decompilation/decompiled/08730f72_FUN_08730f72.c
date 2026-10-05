
/* WARNING: Control flow encountered bad instruction data */

void FUN_08730f72(undefined1 param_1,int param_2)

{
  int unaff_r6;
  int unaff_r8;
  undefined1 unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
    *(undefined1 *)(unaff_r8 + 0x5c9) = unaff_r11;
  }
  if (!in_ZR) {
    *(undefined1 *)(unaff_r6 + 0x5c7) = param_1;
  }
  if (in_CY) {
    *(undefined1 *)(param_2 + 0xa5) = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

