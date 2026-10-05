
/* WARNING: Control flow encountered bad instruction data */

void FUN_080fcb42(undefined4 param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr15;
  undefined4 extraout_s4;
  undefined8 in_d2;
  undefined4 extraout_s5;
  
  if (in_NG != in_OV) {
    software_interrupt(0xbdb5cb);
    *unaff_r8 = param_1;
    unaff_r8[1] = unaff_r4;
    unaff_r8[2] = unaff_r5;
    unaff_r8[3] = unaff_r7;
    unaff_r8[4] = unaff_r10;
    unaff_r8[5] = register0x00000054;
    unaff_r8[6] = 0x80fcb4e;
  }
  if (in_ZR || in_NG != in_OV) {
    in_ZR = unaff_r7 == !in_CY + 0x35c00000;
  }
  if (in_ZR) {
    func_0x07ebaada();
    in_d2 = CONCAT44(extraout_s5,extraout_s4);
  }
  VectorShiftRight(in_d2,0x1f);
  coprocessor_storelong(0xb,in_cr15,unaff_r9 + 1000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

