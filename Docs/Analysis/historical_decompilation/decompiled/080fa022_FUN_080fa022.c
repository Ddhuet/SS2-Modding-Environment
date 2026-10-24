
/* WARNING: Control flow encountered bad instruction data */

void FUN_080fa022(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    func_0x070e76ce();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

