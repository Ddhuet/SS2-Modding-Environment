
/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_07b22172(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0xb7b5aa);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

