
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c7eb6a(void)

{
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  if (!in_CY || in_ZR) {
    coprocessor_load(5,in_cr11,&stack0x000000a8);
  }
  if (!in_NG) {
    func_0x07b49412();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

