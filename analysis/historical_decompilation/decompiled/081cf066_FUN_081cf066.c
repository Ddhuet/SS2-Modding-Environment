
/* WARNING: Control flow encountered bad instruction data */

void FUN_081cf066(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    if (in_NG != in_OV) {
      software_interrupt(0xafa8b8);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

