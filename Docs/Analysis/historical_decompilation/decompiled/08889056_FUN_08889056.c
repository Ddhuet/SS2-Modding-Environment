
/* WARNING: Control flow encountered bad instruction data */

void FUN_08889056(void)

{
  undefined1 *unaff_r4;
  undefined1 *unaff_r6;
  undefined1 unaff_r7;
  undefined1 unaff_r9;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_NG) {
    *unaff_r4 = unaff_r9;
  }
  else {
    *unaff_r4 = unaff_r7;
    unaff_r4[-0xbb5] = unaff_r7;
  }
  if (!in_CY || in_ZR) {
    *unaff_r6 = unaff_r9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

