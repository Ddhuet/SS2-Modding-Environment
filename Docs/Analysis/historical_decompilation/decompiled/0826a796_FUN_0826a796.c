
/* WARNING: Control flow encountered bad instruction data */

void FUN_0826a796(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint extraout_r2;
  uint unaff_r4;
  uint uVar1;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  uint unaff_r9;
  undefined4 unaff_r10;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_ZR) {
    uVar3 = func_0x085a6ee6();
    param_3 = extraout_r2;
  }
  bVar2 = false;
  if ((bool)in_ZR) {
    in_CY = (byte)(param_3 >> 7) & 1;
    param_3 = unaff_r9 & param_3 >> 8;
    bVar2 = param_3 == 0;
    in_NG = false;
  }
  if ((bool)in_NG) {
    *unaff_r6 = unaff_r10;
    unaff_r6[-1] = unaff_r8;
    unaff_r6[-2] = unaff_r7;
    unaff_r6[-3] = unaff_r6;
    unaff_r6[-4] = unaff_r5;
    unaff_r6[-5] = param_3;
    *(undefined8 *)(unaff_r6 + -7) = uVar3;
  }
  if (!bVar2 && in_NG == in_OV) {
    software_interrupt(0xcfe919);
  }
  if ((bool)in_CY) {
    return;
  }
  if (bVar2 || in_NG != in_OV) {
    uVar1 = unaff_r4 & (int)unaff_r9 >> 6;
    in_NG = (int)uVar1 < 0;
    bVar2 = uVar1 == 0;
  }
  if (!bVar2 && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

