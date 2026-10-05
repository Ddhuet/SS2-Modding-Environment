
/* WARNING: Control flow encountered bad instruction data */

void FUN_081f4046(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

