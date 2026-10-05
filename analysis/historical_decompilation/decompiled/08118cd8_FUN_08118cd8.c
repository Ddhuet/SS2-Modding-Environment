
/* WARNING: Control flow encountered bad instruction data */

void FUN_08118cd8(void)

{
  int in_r3;
  undefined4 in_cr13;
  
  coprocessor_storelong(10,in_cr13,in_r3 + 0x340);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

