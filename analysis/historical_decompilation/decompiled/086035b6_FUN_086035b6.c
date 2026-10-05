
/* WARNING: Control flow encountered bad instruction data */

void FUN_086035b6(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    func_0x09370c7e();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

