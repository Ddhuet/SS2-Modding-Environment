
/* WARNING: Control flow encountered bad instruction data */

void FUN_08695f66(void)

{
  bool in_OV;
  
  if (!in_OV) {
    software_interrupt(0x75b501);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

