
/* WARNING: Control flow encountered bad instruction data */

void FUN_08176de4(void)

{
  bool in_CY;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_CY) {
    coprocessor_movefromRt(5,7,6,in_cr15,in_cr14);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

