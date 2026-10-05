
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d2dd50(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    func_0x06e9b42c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

