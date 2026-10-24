
/* WARNING: Control flow encountered bad instruction data */

void FUN_082765c8(undefined4 param_1,byte *param_2,uint param_3)

{
  int unaff_r4;
  undefined4 unaff_r7;
  int unaff_r11;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,unaff_r7);
  }
  if (in_ZR || in_NG != in_OV) {
    param_3 = param_3 & ~((int)&stack0x00000000 >> 0x15);
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  else {
    coprocessor_storelong(0xc,in_cr11,unaff_r4 + 0x2f0);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(7,in_cr13,unaff_r11 + 0x36c);
  }
  UnsignedSaturate(unaff_lr >> 0xd,7);
  UnsignedDoesSaturate(unaff_lr >> 0xd,7);
  coprocessor_moveto(0xc,7,7,(uint)*param_2,in_cr12,in_cr2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

