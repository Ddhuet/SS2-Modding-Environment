
/* WARNING: Control flow encountered bad instruction data */

void FUN_088cc404(void)

{
  int in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    if (in_ZR || in_NG != in_OV) {
      coprocessor_storelong(8,in_cr10,in_r12 + 0x1ac);
      coprocessor_movefromRt(0xd,5,5,in_cr11,in_cr10);
    }
    if (in_NG != in_OV) {
      func_0x073b6ecc();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

