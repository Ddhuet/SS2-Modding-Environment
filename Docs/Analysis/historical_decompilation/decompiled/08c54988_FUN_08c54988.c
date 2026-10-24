
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c54988(uint param_1,undefined4 param_2,uint param_3)

{
  uint extraout_r2;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  int unaff_r7;
  uint *unaff_r8;
  uint unaff_r9;
  uint unaff_r10;
  uint *unaff_r11;
  uint in_r12;
  uint extraout_r12;
  uint unaff_lr;
  bool in_ZR;
  byte in_CY;
  undefined1 uVar1;
  
  uVar1 = false;
  if (in_ZR) {
    unaff_r11 = (uint *)(param_1 & (int)unaff_r6 >> (unaff_r5 & 0xff));
    unaff_r6 = unaff_r7 + (unaff_r5 >> 0xd) + (uint)in_CY;
    uVar1 = unaff_r6 == 0;
  }
  if ((bool)uVar1) {
    unaff_lr = 0x8c54998;
    param_1 = func_0x06e33330();
    param_3 = extraout_r2;
    in_r12 = extraout_r12;
  }
  if (!(bool)uVar1) {
    *unaff_r8 = param_1;
    unaff_r8[1] = param_3;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r6;
    unaff_r8[4] = unaff_r9;
    unaff_r8[5] = unaff_r10;
    unaff_r8[6] = in_r12;
    unaff_r8[7] = (uint)register0x00000054;
    unaff_r8[8] = 0x8c549a0;
    *unaff_r11 = param_1;
    unaff_r11[1] = param_3;
    unaff_r11[2] = unaff_r5;
    unaff_r11[3] = unaff_r6;
    unaff_r11[4] = unaff_r9;
    unaff_r11[5] = unaff_r10;
    unaff_r11[6] = (uint)register0x00000054;
    unaff_r11[7] = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

