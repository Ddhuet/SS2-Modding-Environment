
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f86b74(void)

{
  undefined4 in_cr5;
  undefined4 in_cr14;
  
  coprocessor_movefromRt(5,7,2,in_cr14,in_cr5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

