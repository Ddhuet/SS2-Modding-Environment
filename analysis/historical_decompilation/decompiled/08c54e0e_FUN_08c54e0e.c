
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_08c54e0e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined8 *unaff_r8;
  undefined8 *unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (!(bool)in_OV) {
    uVar1 = func_0x0a60236e();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_OV) {
    return;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *unaff_r11 = uVar1;
    *(undefined4 *)(unaff_r11 + 1) = param_3;
    *(undefined4 *)((int)unaff_r11 + 0xc) = unaff_r4;
    *(undefined4 *)(unaff_r11 + 2) = unaff_r5;
    *(undefined4 *)((int)unaff_r11 + 0x14) = unaff_r7;
    *(undefined8 **)(unaff_r11 + 3) = unaff_r8;
    *(undefined8 **)((int)unaff_r11 + 0x1c) = unaff_r11;
    *(undefined4 *)(unaff_r11 + 4) = in_r12;
    *(undefined4 *)((int)unaff_r11 + 0x24) = 0x8c54e1e;
  }
  if (in_NG != '\x01') {
    *unaff_r8 = uVar1;
    *(undefined4 *)(unaff_r8 + 1) = param_4;
    *(undefined4 *)((int)unaff_r8 + 0xc) = unaff_r4;
    *(undefined4 *)(unaff_r8 + 2) = unaff_r7;
    *(undefined8 **)((int)unaff_r8 + 0x14) = unaff_r8;
    *(undefined8 **)(unaff_r8 + 3) = unaff_r11;
    *(undefined4 *)((int)unaff_r8 + 0x1c) = in_r12;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x07b1548a();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

