
/* WARNING: Control flow encountered bad instruction data */

void FUN_08246f4a(void)

{
  int unaff_r7;
  undefined4 in_cr12;
  
  coprocessor_loadlong(8,in_cr12,unaff_r7 + 0x37c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

