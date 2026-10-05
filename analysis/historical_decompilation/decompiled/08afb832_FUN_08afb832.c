
/* WARNING: Control flow encountered bad instruction data */

void FUN_08afb832(void)

{
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr11;
  
  if (in_ZR || (bool)in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,&stack0x000001a4);
  }
  if ((bool)in_NG != in_OV) {
    coprocessor_storelong(0xb,in_cr11,unaff_lr + 0x2e4);
  }
  if (in_OV) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

