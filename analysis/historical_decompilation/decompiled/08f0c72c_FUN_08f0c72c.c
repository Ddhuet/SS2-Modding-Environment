
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f0c72c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined8 *unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_r11 = unaff_r11 + 0x14;
    coprocessor_load(5,in_cr11,unaff_r11);
    uVar1 = func_0x07ded40c();
    param_4 = extraout_r3;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar1 = func_0x07decfd0();
    param_4 = extraout_r3_00;
  }
  if (in_NG != in_OV) {
    uVar1 = func_0x071e1160();
    param_4 = extraout_r3_01;
  }
  if (in_NG != in_OV) {
    uVar1 = *unaff_r11;
    param_4 = *(undefined4 *)(unaff_r11 + 1);
    unaff_r7 = *(undefined4 *)((int)unaff_r11 + 0xc);
    unaff_r9 = *(undefined4 *)(unaff_r11 + 2);
    unaff_r11 = (undefined8 *)((int)unaff_r11 + 0x1c);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *unaff_r11 = uVar1;
    *(undefined4 *)(unaff_r11 + 1) = param_4;
    *(undefined4 *)((int)unaff_r11 + 0xc) = unaff_r7;
    *(undefined4 *)(unaff_r11 + 2) = unaff_r9;
    *(undefined4 *)((int)unaff_r11 + 0x14) = 0x8f0c748;
    *unaff_r11 = uVar1;
    *(undefined4 *)(unaff_r11 + 1) = param_4;
    *(undefined4 *)((int)unaff_r11 + 0xc) = unaff_r7;
    *(undefined4 *)(unaff_r11 + 2) = unaff_r8;
    *(undefined4 *)((int)unaff_r11 + 0x14) = unaff_r10;
    *(undefined4 *)(unaff_r11 + 3) = 0x8f0c74c;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

