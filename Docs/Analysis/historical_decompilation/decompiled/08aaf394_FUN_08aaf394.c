
/* WARNING: Control flow encountered bad instruction data */

void FUN_08aaf394(void)

{
  char in_NG;
  char in_OV;
  
  if ((bool)in_NG) {
    func_0x0799c904();
  }
  if (in_NG != in_OV) {
    func_0x077bf90c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

