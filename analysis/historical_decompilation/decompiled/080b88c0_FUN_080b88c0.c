
/* WARNING: Control flow encountered bad instruction data */

void FUN_080b88c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r8;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr7;
  undefined4 in_s12;
  
  if (!in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY) {
    param_1[-0xc4] = in_s12;
    Absolute(-(char)unaff_r11);
    Absolute((char)((uint)&stack0x00000000 >> 8) - (char)((uint)unaff_r11 >> 8));
    Absolute((char)((uint)&stack0x00000000 >> 0x10) - (char)((uint)unaff_r11 >> 0x10));
    Absolute((char)((uint)&stack0x00000000 >> 0x18) - (char)((uint)unaff_r11 >> 0x18));
  }
  if (!in_ZR) {
    coprocessor_load(8,in_cr7,unaff_r8);
  }
  if (in_CY) {
    *param_1 = unaff_lr;
    param_1[-1] = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

