
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f4e5c(void)

{
  undefined1 unaff_pc;
  bool in_NG;
  bool in_OV;
  
  if (in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam082f5c65 = unaff_pc;
  if (in_OV) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

