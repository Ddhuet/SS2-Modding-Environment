
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e4288(void)

{
  int unaff_r8;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(5,in_cr11,unaff_r8 + 200);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

