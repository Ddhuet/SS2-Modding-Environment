
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c4a30(void)

{
  undefined1 in_r12;
  undefined1 *unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *unaff_lr = in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

