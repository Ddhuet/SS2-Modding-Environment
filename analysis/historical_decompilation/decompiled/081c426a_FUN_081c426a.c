
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c426a(void)

{
  int in_r3;
  undefined1 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr14;
  
  if (in_ZR || in_NG != in_OV) {
    uRam081c503f = in_r12;
  }
  coprocessor_loadlong2(4,in_cr14,in_r3 + 0x360);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

