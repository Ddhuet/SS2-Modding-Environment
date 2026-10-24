
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ca3c78(void)

{
  uint unaff_r4;
  int unaff_r8;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR) {
    in_NG = (int)((unaff_r4 & 0xffff | 0x5b440000) ^ unaff_r8 >> 8) < 0;
  }
  if (in_NG != in_OV) {
    func_0x09ac889c();
  }
  if (in_NG != in_OV) {
    func_0x07986160();
  }
  if (in_NG != in_OV) {
    func_0x07b708a4();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

