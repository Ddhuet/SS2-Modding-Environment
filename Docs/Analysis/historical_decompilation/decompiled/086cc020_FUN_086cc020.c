
/* WARNING: Control flow encountered bad instruction data */

void FUN_086cc020(int param_1,int param_2)

{
  undefined4 *unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  undefined4 unaff_r10;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined8 uVar1;
  
  if (in_NG != in_OV) {
    unaff_r5 = (undefined4 *)((int)unaff_r5 - 0x515);
    in_CY = 0;
    in_ZR = ((uint)unaff_r5 & 0x54000000) == 0;
    in_NG = '\0';
  }
  if (!(bool)in_ZR) {
    param_2 = *(int *)(param_2 + 0x500);
    iRam086cc5e4 = param_2;
  }
  if (in_NG == in_OV) {
    coprocessor_load(0,in_cr0,unaff_r5 + -0xae);
    uVar1 = func_0x08c37090();
    param_2 = (int)((ulonglong)uVar1 >> 0x20);
    param_1 = (int)uVar1;
  }
  if ((bool)in_ZR) {
    *(undefined4 *)(param_1 + -0xa05) = unaff_r10;
    *(int *)(unaff_r8 + 0x5a9) = param_1;
    param_1 = unaff_r6 + (unaff_r7 >> 0xb) + (uint)in_CY;
  }
  if (in_NG == in_OV) {
    *unaff_r5 = unaff_r10;
  }
  if ((bool)in_ZR) {
    *(int *)(param_2 + 0x500) = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

