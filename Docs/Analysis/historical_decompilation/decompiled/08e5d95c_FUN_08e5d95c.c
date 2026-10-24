
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e5d95c(void)

{
  char in_NG;
  char in_OV;
  
  if ((bool)in_NG) {
    func_0x07d4b050();
  }
  if (in_NG != in_OV) {
    func_0x07746c14();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

