
/* WARNING: Control flow encountered bad instruction data */

void FUN_086e7fa6(void)

{
  undefined4 in_cr15;
  undefined1 auStack_27c [636];
  
  coprocessor_load2(0xe,in_cr15,auStack_27c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

