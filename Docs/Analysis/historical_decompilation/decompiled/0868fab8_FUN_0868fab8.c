
/* WARNING: Control flow encountered bad instruction data */

void FUN_0868fab8(void)

{
  undefined4 unaff_r9;
  undefined4 in_cr11;
  
  coprocessor_load2(5,in_cr11,unaff_r9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

