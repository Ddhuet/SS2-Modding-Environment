
/* WARNING: Control flow encountered bad instruction data */

void FUN_0831dd5e(void)

{
  int unaff_r10;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == (bool)in_OV) {
    coprocessor_load(5,in_cr11,unaff_r10 + 0x288);
  }
  if (!in_NG) {
    func_0x093ea97e();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

