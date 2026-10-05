
/* WARNING: Control flow encountered bad instruction data */

void FUN_085aeb18(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_movefromRt(5,7,1,in_cr13,in_cr1);
    software_interrupt(0xfed711);
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(7,in_cr11,&stack0x00000148);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

