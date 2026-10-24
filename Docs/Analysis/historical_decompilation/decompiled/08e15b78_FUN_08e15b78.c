
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e15b78(void)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_movefromRt(5,5,5,in_cr11,in_cr4);
    func_0x076fe608();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

