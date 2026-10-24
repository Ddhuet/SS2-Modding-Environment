
/* WARNING: Control flow encountered bad instruction data */

void FUN_0881882a(void)

{
  undefined1 *unaff_r4;
  undefined4 in_r12;
  undefined4 extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xc,in_cr12,&stack0x000002f4);
    coprocessor_loadlong(0xc,in_cr12,&stack0x00000370);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
  else {
    coprocessor_loadlong(5,in_cr11,&stack0x00000000);
  }
  coprocessor_moveto(0xd,7,6,&stack0x00000000,in_cr14,in_cr13);
  coprocessor_moveto(0xd,7,6,&stack0x00000000,in_cr14,in_cr13);
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
  if ((bool)in_OV) {
    func_0x06ae9e26();
    in_r12 = extraout_r12;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    coprocessor_storelong(6,in_cr7,in_r12);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(8,in_cr11,&stack0x000002d8);
    coprocessor_loadlong(6,in_cr12,&stack0x00000330);
    coprocessor_loadlong(0xd,in_cr12,&stack0x00000374);
  }
  coprocessor_moveto(0xd,7,6,&stack0x00000000,in_cr14,in_cr13);
  coprocessor_moveto(0xd,7,6,&stack0x00000000,in_cr14,in_cr13);
  if (!(bool)in_CY) {
    *unaff_r4 = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

