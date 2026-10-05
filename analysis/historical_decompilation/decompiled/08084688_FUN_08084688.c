
/* WARNING: Control flow encountered bad instruction data */

void FUN_08084688(void)

{
  undefined4 in_cr10;
  undefined4 in_cr15;
  
  coprocessor_movefromRt(7,4,7,in_cr10,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

