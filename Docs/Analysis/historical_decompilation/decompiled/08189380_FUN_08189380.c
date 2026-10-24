
/* WARNING: Control flow encountered bad instruction data */

void FUN_08189380(void)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr13;
  
  if (in_NG == in_OV) {
    coprocessor_movefromRt(5,5,5,in_cr3,in_cr13);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

