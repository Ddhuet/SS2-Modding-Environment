
/* WARNING: Control flow encountered bad instruction data */

void FUN_0869a14e(int param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  uint unaff_r11;
  bool in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar6;
  undefined4 in_cr4;
  undefined4 in_cr5;
  
  lVar2 = CONCAT44(unaff_r5,param_1);
  if (in_NG) {
    uVar3 = (undefined1)unaff_r5;
    *(undefined4 *)(param_1 + -0x445) = unaff_r5;
    unaff_r4 = (uint)*(byte *)(param_3 + -0x553);
  }
  else {
    unaff_r11 = (uint)*(byte *)(unaff_r11 - 0x500);
    lVar2 = CONCAT44(unaff_r5,param_1) +
            ((longlong)(short)unaff_r8 * (longlong)(short)param_1 -
            (longlong)(short)((uint)unaff_r8 >> 0x10) * (longlong)(short)((uint)param_1 >> 0x10));
    uVar3 = (undefined1)((ulonglong)lVar2 >> 0x20);
    *(undefined1 *)((int)((ulonglong)lVar2 >> 0x20) + -0x645) = uVar3;
  }
  uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar4 = (uint)lVar2;
  bVar6 = false;
  if (in_ZR) {
    uVar1 = param_2 >> (uVar5 & 0xff);
    in_CY = uVar1 <= uVar4;
    in_OV = SBORROW4(uVar4,uVar1);
    unaff_r4 = uVar4 - uVar1;
    in_NG = (int)unaff_r4 < 0;
    bVar6 = unaff_r4 == 0;
  }
  if (in_NG) {
    coprocessor_function(0xf,4,2,in_cr4,in_cr5,in_cr5);
    coprocessor_moveto2(0xd,4,unaff_r4,uVar5,in_cr5);
    *(char *)(unaff_r11 - 0x508) = (char)unaff_r4;
    uRam0869a17e = (undefined1)unaff_r8;
  }
  if (!(bool)in_CY || bVar6) {
    *(uint *)(param_2 + -0x395) = unaff_r4;
  }
  if (bVar6 || in_NG != (bool)in_OV) {
    *(undefined1 *)(param_2 + -0x542) = uVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

