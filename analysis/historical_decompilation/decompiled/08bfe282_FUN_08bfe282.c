
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bfe282(void)

{
  char in_NG;
  char in_OV;
  
  if (!(bool)in_NG) {
    func_0x06deb92e();
  }
  if (in_NG != in_OV) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

