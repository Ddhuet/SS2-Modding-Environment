
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_087d7d90(void)

{
  undefined1 *unaff_r4;
  undefined4 unaff_r6;
  int unaff_r7;
  int unaff_r8;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_CY && !in_ZR) {
    return *(undefined4 *)(unaff_r8 + -0x28);
  }
  if (!in_NG) {
    *(undefined4 *)(unaff_r7 + 0x8ab) = unaff_r6;
  }
  if (in_OV) {
    *(char *)(unaff_r7 + -0x989) = (char)unaff_r7;
  }
  if (in_NG) {
    *unaff_r4 = (char)unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

