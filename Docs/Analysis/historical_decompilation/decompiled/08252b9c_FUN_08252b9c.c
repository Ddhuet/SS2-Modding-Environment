
/* WARNING: Control flow encountered bad instruction data */

void FUN_08252b9c(void)

{
  int unaff_r5;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  
  if (in_ZR || in_NG != in_OV) {
    *(char *)(unaff_lr + 0xc6a) = (char)unaff_r5;
  }
  uRam08252bb0 = 0;
  if (in_ZR) {
    coprocessor_store(0xe,in_cr1,unaff_r5 + -0x3c4);
  }
  if (in_NG != in_OV) {
    software_interrupt(0xed3d50);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

