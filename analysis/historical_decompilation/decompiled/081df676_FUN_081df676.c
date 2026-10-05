
/* WARNING: Control flow encountered bad instruction data */

void FUN_081df676(undefined4 param_1,undefined4 param_2,int *param_3)

{
  longlong lVar1;
  uint uVar2;
  byte *pbVar3;
  int *extraout_r2;
  int unaff_r4;
  uint uVar4;
  uint unaff_r5;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined1 uVar5;
  undefined4 in_cr1;
  undefined4 in_cr5;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(param_2,param_1);
  if (!(bool)in_ZR) {
    unaff_r11 = -0x25800001;
  }
  if ((bool)in_OV) {
    uVar6 = func_0x09d75f72();
    param_3 = extraout_r2;
  }
  pbVar3 = (byte *)((ulonglong)uVar6 >> 0x20);
  uVar2 = (uint)uVar6;
  if ((bool)in_CY) {
    param_3 = (int *)((int)param_3 - 0x75a);
    unaff_r4 = *param_3;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar2 = (unaff_r8 << (unaff_r5 & 0xff)) - (!(bool)in_CY + 0x81df68a);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    coprocessor_movefromRt(1,4,5,in_cr1,in_cr9);
  }
  if (!(bool)in_ZR) {
    lVar1 = (longlong)unaff_r8 * (longlong)unaff_r4;
    in_NG = lVar1 < 0;
    in_ZR = lVar1 == 0;
    unaff_r11 = (int)lVar1;
  }
  if ((bool)in_OV) {
    software_interrupt(0x6c5b39);
  }
  uVar5 = false;
  if ((bool)in_CY) {
    uVar4 = unaff_r7 & 0xff;
    uVar5 = uVar4 == 0 || uVar4 != 0 && (bool)((byte)(unaff_r11 >> uVar4 - 1) & 1);
    uVar4 = (uint)param_3 ^ unaff_r11 >> uVar4;
    in_NG = (int)uVar4 < 0;
    in_ZR = uVar4 == 0;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    pbVar3 = pbVar3 + 0x419;
    uVar2 = (uint)*pbVar3;
  }
  uVar6 = CONCAT44(pbVar3,uVar2);
  if ((bool)uVar5 && !(bool)in_ZR) {
    software_interrupt(0x92a5bc);
  }
  if ((bool)in_ZR) {
    coprocessor_loadlong(3,in_cr11,unaff_r11 + 0x25c);
  }
  if ((bool)in_OV) {
    uVar6 = func_0x09cb4f8a(uVar2);
  }
  pbVar3 = (byte *)((ulonglong)uVar6 >> 0x20);
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar6 = CONCAT44(pbVar3 + 0x81a,(uint)*pbVar3);
  }
  if ((bool)uVar5 && !(bool)in_ZR) {
    software_interrupt(0x95a7bc);
  }
  if ((bool)in_ZR) {
    func_0x0784bd12((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  }
  if ((bool)in_OV) {
    coprocessor_moveto(5,3,1,unaff_r5,in_cr10,in_cr5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

