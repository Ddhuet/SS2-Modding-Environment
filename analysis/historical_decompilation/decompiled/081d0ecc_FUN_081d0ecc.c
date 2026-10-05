
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d0ecc(void)

{
  undefined4 in_cr5;
  undefined4 in_cr15;
  
  coprocessor_movefromRt(0xd,6,5,in_cr15,in_cr5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

