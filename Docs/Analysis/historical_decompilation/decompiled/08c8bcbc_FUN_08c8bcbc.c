
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c8bcbc(void)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_storelong(5,in_cr11,&stack0x00000150);
  }
  if (!in_CY || in_ZR) {
    func_0x07f24dd8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

