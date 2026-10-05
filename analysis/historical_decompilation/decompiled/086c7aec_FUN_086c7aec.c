
/* WARNING: Control flow encountered bad instruction data */

void FUN_086c7aec(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x074c29d0();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x075429dc();
  }
  if (in_NG != in_OV) {
    func_0x07db630c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

