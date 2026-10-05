
/* WARNING: Control flow encountered bad instruction data */

void FUN_081baf32(void)

{
  int unaff_r5;
  uint unaff_r6;
  bool in_NG;
  undefined1 in_ZR;
  char in_OV;
  bool bVar1;
  
  bVar1 = false;
  if (in_NG) {
    bVar1 = (int)(unaff_r6 ^ 0x2c000000) < 0;
    in_ZR = (unaff_r6 ^ 0x2c000000) == 0;
  }
  if ((bool)in_ZR || bVar1 != (bool)in_OV) {
    *(undefined1 *)(unaff_r5 + -0xcac) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

