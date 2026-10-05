
/* WARNING: Control flow encountered bad instruction data */

void FUN_0885fe40(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    func_0x09985c28();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

