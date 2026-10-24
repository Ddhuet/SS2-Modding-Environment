
/* WARNING: Control flow encountered bad instruction data */

void FUN_08268974(void)

{
  undefined4 in_cr1;
  undefined4 in_cr6;
  undefined4 in_cr15;
  
  coprocessor_function2(2,0xb,2,in_cr1,in_cr6,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

