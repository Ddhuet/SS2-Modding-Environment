
/* WARNING: Control flow encountered bad instruction data */

void FUN_081ea5bc(void)

{
  undefined4 unaff_r9;
  int unaff_r10;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,unaff_r10 + 700);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x0731a8c4();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_load(1,in_cr11,unaff_r9);
  }
  if ((bool)in_ZR) {
    func_0x0822755c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

