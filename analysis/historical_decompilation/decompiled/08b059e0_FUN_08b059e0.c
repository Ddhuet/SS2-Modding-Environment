
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b059e0(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

