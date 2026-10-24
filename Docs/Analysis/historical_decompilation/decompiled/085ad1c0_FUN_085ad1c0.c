
/* WARNING: Control flow encountered bad instruction data */

void FUN_085ad1c0(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xedb754);
    software_interrupt(0xedb774);
    software_interrupt(0xfeb975);
    software_interrupt(0xfec977);
  }
  else {
    coprocessor_function(5,0xe,2,in_cr11,in_cr12,in_cr4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

