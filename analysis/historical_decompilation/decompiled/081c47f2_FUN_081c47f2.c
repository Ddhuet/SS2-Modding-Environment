
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c47f2(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    func_0x070f1eca();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

