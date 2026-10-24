
/* WARNING: Control flow encountered bad instruction data */

void FUN_0885fe1a(void)

{
  int in_r3;
  int unaff_r5;
  int unaff_r9;
  int unaff_r10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr7;
  
  if (in_OV) {
    unaff_r5 = unaff_r5 + -0x555;
  }
  if (in_CY && !in_ZR) {
    *(int *)(unaff_r10 + unaff_r9 * 0x800) = unaff_r5;
  }
  if ((bool)in_NG != in_OV) {
    coprocessor_store(7,in_cr7,in_r3 + 0x224);
  }
  if (in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

