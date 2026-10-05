
/* WARNING: Control flow encountered bad instruction data */

void FUN_0832c2f8(void)

{
  int in_r3;
  undefined4 in_cr11;
  
  coprocessor_storelong2(5,in_cr11,in_r3 + 0x298);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

