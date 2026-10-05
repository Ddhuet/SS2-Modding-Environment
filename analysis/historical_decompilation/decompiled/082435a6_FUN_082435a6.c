
/* WARNING: Control flow encountered bad instruction data */

void FUN_082435a6(void)

{
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  int *unaff_r10;
  int unaff_r11;
  short in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr12;
  undefined1 in_q5 [16];
  undefined1 in_q10 [16];
  
  if (!in_CY || in_ZR) {
    software_interrupt(0xb1b5c2);
  }
  if (in_CY) {
    in_r12 = (ushort)((uint)unaff_r9 >> 0x19) - (short)unaff_r10;
  }
  if (!in_OV) {
    coprocessor_loadlong(0xb,in_cr6,unaff_r7);
  }
  VectorHalvingAdd(in_q5,in_q10,2,0);
  if ((bool)in_NG == in_OV) {
    unaff_r11 = *unaff_r10;
  }
  else {
    coprocessor_function(0xd,0xd,7,in_cr12,in_cr6,in_cr5);
  }
  if (in_CY) {
    *(short *)(unaff_r11 + 0xb1) = in_r12;
  }
  if (!in_OV) {
    software_interrupt(0x756e3c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

