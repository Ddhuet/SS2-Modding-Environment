
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08246f46(void)

{
  int unaff_r7;
  undefined4 in_cr12;
  
  coprocessor_loadlong(8,in_cr12,unaff_r7 + 0x37c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

