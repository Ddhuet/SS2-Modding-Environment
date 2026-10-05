
/* WARNING: Control flow encountered bad instruction data */

void FUN_0866bffa(void)

{
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_loadlong(5,in_cr11,in_r12 + 0x170);
  }
  if (in_CY && !in_ZR) {
    func_0x0826fcc6();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

