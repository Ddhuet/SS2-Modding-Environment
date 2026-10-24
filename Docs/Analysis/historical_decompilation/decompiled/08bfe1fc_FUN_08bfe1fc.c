
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bfe1fc(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG == in_OV) {
    software_interrupt(0x79b597);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZR && in_NG == in_OV) {
    software_interrupt(0xfccccc);
    software_interrupt(0xfccccc);
    software_interrupt(0xfccccc);
    software_interrupt(0xfccccb);
    software_interrupt(0xfccccb);
    software_interrupt(0xfcccca);
    software_interrupt(0xfccc5a);
    software_interrupt(0xfcc5bf);
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

