
/* WARNING: Control flow encountered bad instruction data */

void FUN_0861e316(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    software_interrupt(0xa6b007);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

