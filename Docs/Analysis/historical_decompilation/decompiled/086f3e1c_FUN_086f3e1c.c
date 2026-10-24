
/* WARNING: Control flow encountered bad instruction data */

void FUN_086f3e1c(void)

{
  undefined4 in_cr5;
  undefined4 in_cr15;
  
  coprocessor_movefromRt(5,5,7,in_cr5,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

