
/* WARNING: Control flow encountered bad instruction data */

void FUN_081784a8(void)

{
  undefined4 in_r3;
  int unaff_r4;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  coprocessor_load2(5,in_cr11,unaff_r4 + 0x3fc);
  coprocessor_loadlong(5,in_cr15,in_r3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

