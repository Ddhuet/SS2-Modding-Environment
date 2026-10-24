
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e6095c(void)

{
  char in_NG;
  char in_OV;
  
  if ((bool)in_NG) {
    func_0x07d4e050();
  }
  if (in_NG != in_OV) {
    func_0x07749c14();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

