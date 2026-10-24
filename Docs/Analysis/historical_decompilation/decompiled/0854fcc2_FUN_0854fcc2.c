
/* WARNING: Control flow encountered bad instruction data */

void FUN_0854fcc2(void)

{
  undefined4 in_cr11;
  
  coprocessor_loadlong2(5,in_cr11,0x8550016);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

