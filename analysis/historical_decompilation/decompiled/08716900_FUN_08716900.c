
/* WARNING: Control flow encountered bad instruction data */

void FUN_08716900(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    func_0x083c40c8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

