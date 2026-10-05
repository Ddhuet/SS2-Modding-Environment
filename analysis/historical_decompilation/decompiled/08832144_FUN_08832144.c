
/* WARNING: Control flow encountered bad instruction data */

void FUN_08832144(void)

{
  undefined1 *unaff_r7;
  int unaff_r8;
  undefined1 unaff_r9;
  int in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  if (in_ZR) {
    coprocessor_storelong(5,in_cr11,in_r12 + 0x154);
  }
  if (in_CY && !in_ZR) {
    *(undefined1 *)(unaff_r8 + -0xcbb) = unaff_r9;
  }
  if (in_NG) {
    *unaff_r7 = (char)unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

