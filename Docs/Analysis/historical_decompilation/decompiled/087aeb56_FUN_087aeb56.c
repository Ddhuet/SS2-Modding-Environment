
/* WARNING: Control flow encountered bad instruction data */

void FUN_087aeb56(void)

{
  undefined1 unaff_r5;
  int unaff_r7;
  undefined1 unaff_r8;
  undefined1 *unaff_lr;
  bool in_NG;
  bool in_CY;
  bool in_OV;
  
  if (!in_NG) {
    unaff_r7 = 0x5700000 - (int)(unaff_lr + !in_CY);
  }
  if (in_OV) {
    *unaff_lr = unaff_r8;
  }
  if (!in_NG) {
    *(undefined1 *)(unaff_r7 + -0x564) = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

