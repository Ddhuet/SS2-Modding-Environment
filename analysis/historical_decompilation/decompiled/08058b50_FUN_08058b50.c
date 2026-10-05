
/* WARNING: Control flow encountered bad instruction data */

void FUN_08058b50(void)

{
  undefined4 in_cr1;
  undefined4 in_cr6;
  undefined4 in_cr15;
  
  coprocessor_function2(7,4,6,in_cr15,in_cr6,in_cr1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

