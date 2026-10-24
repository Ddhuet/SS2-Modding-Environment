
/* WARNING: Control flow encountered bad instruction data */

void FUN_08198324(void)

{
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  coprocessor_movefromRt(5,6,6,in_cr15,in_cr13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

