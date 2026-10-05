
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e5008(void)

{
  int in_r3;
  undefined1 unaff_r5;
  bool in_NG;
  
  if (in_NG) {
    *(undefined1 *)(in_r3 + -0x18) = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

