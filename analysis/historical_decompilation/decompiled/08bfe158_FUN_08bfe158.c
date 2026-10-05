
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bfe158(void)

{
  undefined8 *in_r12;
  undefined8 *extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 uVar1;
  undefined8 in_d0;
  undefined4 extraout_s1;
  undefined4 extraout_s2;
  undefined8 in_d1;
  undefined4 extraout_s3;
  undefined4 extraout_s4;
  undefined8 in_d2;
  undefined4 extraout_s5;
  undefined4 extraout_s6;
  undefined8 in_d3;
  undefined4 extraout_s7;
  undefined8 in_d4;
  undefined8 extraout_d4;
  undefined8 in_d5;
  undefined8 extraout_d5;
  undefined8 in_d6;
  undefined8 extraout_d6;
  undefined8 in_d7;
  undefined8 extraout_d7;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 in_d25;
  undefined8 in_d26;
  undefined8 in_d27;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined8 in_d30;
  undefined8 in_d31;
  
  if (in_NG != in_OV) {
    uVar1 = func_0x07aedd40();
    in_d3 = CONCAT44(extraout_s7,extraout_s6);
    in_d2 = CONCAT44(extraout_s5,extraout_s4);
    in_d1 = CONCAT44(extraout_s3,extraout_s2);
    in_d0 = CONCAT44(extraout_s1,uVar1);
    in_r12 = extraout_r12;
    in_d4 = extraout_d4;
    in_d5 = extraout_d5;
    in_d6 = extraout_d6;
    in_d7 = extraout_d7;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
  else {
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(5,in_cr12,in_r12);
    *in_r12 = in_d21;
    in_r12[1] = in_d22;
    in_r12[2] = in_d23;
    in_r12[3] = in_d24;
    in_r12[4] = in_d25;
    in_r12[5] = in_d26;
    in_r12[6] = in_d27;
    in_r12[7] = in_d28;
    in_r12[8] = in_d29;
    in_r12[9] = in_d30;
    in_r12[10] = in_d31;
    in_r12[0xb] = in_d0;
    in_r12[0xc] = in_d1;
    in_r12[0xd] = in_d2;
    in_r12[0xe] = in_d3;
    in_r12[0xf] = in_d4;
    in_r12[0x10] = in_d5;
    in_r12[0x11] = in_d6;
    in_r12[0x12] = in_d7;
    in_r12[0x13] = unaff_d8;
    in_r12[0x14] = unaff_d9;
  }
  if ((bool)in_ZR) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000000);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    software_interrupt(0xfddddd);
    software_interrupt(0xfccccc);
    software_interrupt(0xfccccc);
    software_interrupt(0xfccccc);
    software_interrupt(0xfccccc);
    software_interrupt(0xfccccc);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x0a2f191c();
  }
  if (in_NG != in_OV) {
    func_0x07af1920();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

