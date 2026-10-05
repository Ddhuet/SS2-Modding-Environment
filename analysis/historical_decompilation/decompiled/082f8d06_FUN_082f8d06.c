
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f8d06(void)

{
  undefined4 in_cr14;
  
  coprocessor_storelong2(0,in_cr14,0x82f905a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

