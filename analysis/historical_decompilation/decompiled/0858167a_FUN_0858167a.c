
/* WARNING: Control flow encountered bad instruction data */

void FUN_0858167a(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    func_0x06beebf6();
  }
  if (!(bool)in_OV) {
    func_0x0a02ec62();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

