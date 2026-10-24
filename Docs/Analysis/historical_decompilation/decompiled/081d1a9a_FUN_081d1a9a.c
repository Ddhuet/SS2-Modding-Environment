
/* WARNING: Control flow encountered bad instruction data */

int FUN_081d1a9a(int param_1)

{
  int unaff_r5;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    return param_1 + 0x24;
  }
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(int *)(unaff_r5 + 4);
}

