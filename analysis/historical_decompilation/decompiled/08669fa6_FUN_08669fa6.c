
/* WARNING: Control flow encountered bad instruction data */

void FUN_08669fa6(int param_1,undefined4 param_2,undefined2 *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *extraout_r2;
  ushort *unaff_r7;
  ushort *unaff_r9;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined8 uVar3;
  
  if ((bool)in_ZR) {
    uVar1 = *unaff_r9;
  }
  else {
    uVar1 = *unaff_r7;
  }
  uVar2 = (uint)uVar1;
  if (in_NG != in_OV) {
    unaff_lr = 0x8669fb6;
    uVar3 = func_0x08a987fa();
    uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
    param_1 = (int)uVar3;
    param_3 = extraout_r2;
  }
  if (in_NG != in_OV) {
    coprocessor_load(0xc,in_cr11,param_1 + -0x40);
  }
  if (!(bool)in_ZR) {
    uVar2 = unaff_lr + param_1 + (uint)in_CY;
    in_ZR = uVar2 == 0;
  }
  if (!(bool)in_ZR) {
    *param_3 = (short)uVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

