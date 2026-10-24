
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bfe66c(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    func_0x07aebccc();
  }
  if (!(bool)in_NG) {
    func_0x07aecabc();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

