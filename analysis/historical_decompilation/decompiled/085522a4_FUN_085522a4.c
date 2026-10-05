
/* WARNING: Control flow encountered bad instruction data */

void FUN_085522a4(void)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_function(5,0xc,5,in_cr11,in_cr0,in_cr6);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

