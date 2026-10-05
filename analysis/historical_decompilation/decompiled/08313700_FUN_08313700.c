
/* WARNING: Control flow encountered bad instruction data */

void FUN_08313700(void)

{
  int unaff_r11;
  bool in_ZR;
  undefined4 in_cr4;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined4 in_cr15;
  undefined8 in_d4;
  undefined8 in_d25;
  
  VectorRoundShiftLeft(in_d25,1,in_d4);
  if (in_ZR) {
    coprocessor_load(0xc,in_cr4,unaff_r11 + -0x1a000);
  }
  else {
    software_interrupt(0xbe46d7);
  }
  coprocessor_function(4,3,1,in_cr11,in_cr7,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

