
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e15956(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  int unaff_r6;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  uint in_r12;
  uint extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar1;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (in_NG != in_OV) {
    coprocessor_storelong(5,in_cr11,param_4);
    unaff_r11 = 0xe1086259;
    coprocessor_moveto(5,6,5,0xe1086259,in_cr3,in_cr7);
    func_0x07705462();
    param_2 = extraout_r1;
    in_r12 = extraout_r12;
  }
  if (in_NG == in_OV) {
    bVar1 = 0xffff43ff < in_r12 || CARRY4(in_r12 + 0xbc00,(uint)in_CY);
    in_OV = SCARRY4(in_r12,0xbc00) != SCARRY4(in_r12 + 0xbc00,(uint)in_CY);
    in_ZR = in_r12 + 0xbc00 + (uint)in_CY == 0;
  }
  else {
    coprocessor_moveto(4,6,5,unaff_r11,in_cr4,in_cr6);
    bVar1 = in_CY;
  }
  if ((bool)in_OV) {
    coprocessor_movefromRt(3,4,5,in_cr12,in_cr5);
    coprocessor_load(0xe,in_cr6,unaff_r6 + 0x1b8);
  }
  if ((bool)bVar1 && !(bool)in_ZR) {
    if ((bool)bVar1 && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    UnsignedSaturate((short)unaff_r9 - (short)param_2,0x10);
    UnsignedSaturate((short)((uint)unaff_r9 >> 0x10) - (short)((uint)param_2 >> 0x10),0x10);
    return;
  }
  return;
}

