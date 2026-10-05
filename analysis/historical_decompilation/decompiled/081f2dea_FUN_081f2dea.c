
/* WARNING: Control flow encountered bad instruction data */

void FUN_081f2dea(void)

{
  int unaff_r9;
  undefined1 in_r12;
  undefined1 *unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,unaff_r9 + 0x2c8);
  }
  if (in_ZR || in_NG != in_OV) {
    *unaff_lr = in_r12;
  }
  func_0x07bab162();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

