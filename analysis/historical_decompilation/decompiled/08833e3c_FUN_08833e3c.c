
/* WARNING: Control flow encountered bad instruction data */

void FUN_08833e3c(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    func_0x076e13ec();
  }
  if (in_NG != in_OV) {
    func_0x0771dc70();
  }
  if (in_NG != in_OV) {
    func_0x07722468();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

