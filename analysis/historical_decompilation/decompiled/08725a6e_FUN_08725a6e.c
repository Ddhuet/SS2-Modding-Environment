
/* WARNING: Control flow encountered bad instruction data */

void FUN_08725a6e(void)

{
  int unaff_r5;
  char in_NG;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,unaff_r5 + 0x3fc);
  }
  if (in_CY) {
    func_0x0832623a();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

