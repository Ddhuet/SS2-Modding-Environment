
/* WARNING: Control flow encountered bad instruction data */

void FUN_08242848(void)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,&stack0x000002a8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

