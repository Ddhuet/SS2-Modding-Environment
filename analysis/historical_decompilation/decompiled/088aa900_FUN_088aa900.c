
/* WARNING: Control flow encountered bad instruction data */

void FUN_088aa900(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    func_0x07b97e7c();
  }
  if (in_NG != in_OV) {
    func_0x07799664();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

