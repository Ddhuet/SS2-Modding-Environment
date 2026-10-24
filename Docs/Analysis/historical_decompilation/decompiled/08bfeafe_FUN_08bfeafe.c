
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bfeafe(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 extraout_r2;
  undefined4 *extraout_r3;
  undefined4 *puVar1;
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  uint unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool in_OV;
  
  puVar1 = param_4;
  if (in_NG) {
    puVar1 = param_4 + -0x155;
    unaff_r11 = *param_4;
  }
  if (in_OV) {
    unaff_r10 = (uint)*(byte *)(unaff_r5 + -0x553);
    unaff_lr = 0x8bfeb0e;
    func_0x07af2b02();
    param_3 = extraout_r2;
    puVar1 = extraout_r3;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
  *(undefined4 *)(unaff_r5 + 4) = param_3;
  *(undefined4 **)(unaff_r5 + 8) = puVar1;
  *(undefined4 *)(unaff_r5 + 0xc) = unaff_r4;
  *(int *)(unaff_r5 + 0x10) = unaff_r5;
  *(undefined4 *)(unaff_r5 + 0x14) = unaff_r6;
  *(undefined4 *)(unaff_r5 + 0x18) = unaff_r7;
  *(undefined4 *)(unaff_r5 + 0x1c) = unaff_r8;
  *(undefined4 *)(unaff_r5 + 0x20) = unaff_r9;
  *(uint *)(unaff_r5 + 0x24) = unaff_r10;
  *(undefined4 *)(unaff_r5 + 0x28) = unaff_r11;
  *(undefined4 *)(unaff_r5 + 0x2c) = unaff_lr;
  *(undefined4 *)(unaff_r5 + 0x30) = 0x8bfeb16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

