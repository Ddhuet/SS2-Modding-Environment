
/* WARNING: Control flow encountered bad instruction data */

void FUN_088c2312(void)

{
  bool in_CY;
  undefined4 in_cr4;
  undefined4 in_cr11;
  
  if (!in_CY) {
    coprocessor_movefromRt(5,4,6,in_cr4,in_cr11);
    func_0x073ef12a();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

