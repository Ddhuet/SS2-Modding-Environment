
/* WARNING: Control flow encountered bad instruction data */

void FUN_081e36a6(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    func_0x073d0dce();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

