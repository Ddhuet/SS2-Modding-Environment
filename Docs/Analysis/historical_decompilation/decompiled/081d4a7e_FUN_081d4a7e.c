
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_081d4a7e(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    return uRam081d4a8a;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

