
/* WARNING: Control flow encountered bad instruction data */

void FUN_0821917c(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_load(5,in_cr11,0x8219444);
  }
  if (in_ZR) {
    func_0x08255504();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

