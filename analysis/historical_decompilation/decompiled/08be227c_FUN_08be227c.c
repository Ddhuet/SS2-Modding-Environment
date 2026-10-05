
/* WARNING: Control flow encountered bad instruction data */

void FUN_08be227c(void)

{
  undefined1 *unaff_r5;
  bool in_NG;
  
  if (in_NG) {
    *unaff_r5 = unaff_r5[-0x513];
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

