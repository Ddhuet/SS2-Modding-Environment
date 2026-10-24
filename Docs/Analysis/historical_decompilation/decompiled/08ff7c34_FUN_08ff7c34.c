
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ff7c34(void)

{
  undefined4 in_cr15;
  
  coprocessor_movefromRt(5,3,7,in_cr15,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

