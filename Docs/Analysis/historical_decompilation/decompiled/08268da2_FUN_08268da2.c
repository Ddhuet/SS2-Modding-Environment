
/* WARNING: Control flow encountered bad instruction data */

void FUN_08268da2(void)

{
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr4;
  
  coprocessor_function(0,0xe,2,in_cr1,in_cr4,in_cr3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

