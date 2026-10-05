
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_085cd460(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined1 unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  int unaff_r11;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr9;
  
  if (!in_CY || in_ZR) {
    bVar1 = Absolute((char)unaff_r5 - (char)param_2);
    bVar2 = Absolute((char)((uint)unaff_r5 >> 8) - (char)(param_2 >> 8));
    bVar3 = Absolute((char)((uint)unaff_r5 >> 0x10) - (char)(param_2 >> 0x10));
    bVar4 = Absolute((char)((uint)unaff_r5 >> 0x18) - (char)(param_2 >> 0x18));
    unaff_r11 = unaff_r8 +
                ((uint)bVar4 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar2 << 8 | (uint)bVar1);
  }
  if (in_NG != in_OV) {
    return *(undefined4 *)(unaff_r8 + -0x18);
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_store(0xc,in_cr8,unaff_r8 + 0x34c);
    coprocessor_function(9,0xc,7,in_cr8,in_cr9,in_cr9);
    if (in_NG == in_OV) {
      param_2 = (uint)*(byte *)(unaff_r4 + -0x566);
      *param_3 = unaff_lr;
      param_3[-1] = unaff_r11;
      param_3[-2] = unaff_r7;
      param_3[-3] = param_3;
      param_3[-4] = param_2;
      param_3[-5] = param_1;
    }
    if (in_CY) {
      *(undefined1 *)(param_2 - 0x99a) = unaff_r6;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

