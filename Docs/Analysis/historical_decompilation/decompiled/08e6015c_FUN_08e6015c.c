
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e6015c(void)

{
  char in_NG;
  char in_OV;
  
  if ((bool)in_NG) {
    func_0x07d4d850();
  }
  if (in_NG != in_OV) {
    func_0x07749414();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

