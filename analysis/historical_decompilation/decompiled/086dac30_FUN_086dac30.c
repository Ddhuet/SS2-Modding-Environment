
/* WARNING: Control flow encountered bad instruction data */

void FUN_086dac30(void)

{
  char in_NG;
  bool in_OV;
  
  if ((bool)in_NG == in_OV) {
    software_interrupt(0xb0b57c);
  }
  if (in_OV) {
    software_interrupt(0xf101f0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

