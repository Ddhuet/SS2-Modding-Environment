
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e5d15c(void)

{
  char in_NG;
  char in_OV;
  
  if ((bool)in_NG) {
    func_0x07d4a850();
  }
  if (in_NG != in_OV) {
    func_0x07746414();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

