
undefined4 FUN_08280114(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_function(5,0xb,6,in_cr11,in_cr0,in_cr1);
  }
  if (!in_CY || in_ZR) {
    coprocessor_load(1,in_cr9,unaff_r11);
  }
  else {
    *(undefined4 *)(unaff_r9 + 4) = param_1;
    *(undefined4 *)(unaff_r9 + 8) = param_2;
    *(undefined4 *)(unaff_r9 + 0xc) = unaff_r4;
    *(undefined4 *)(unaff_r9 + 0x10) = unaff_r7;
    *(undefined4 *)(unaff_r9 + 0x14) = unaff_r8;
    *(int *)(unaff_r9 + 0x18) = unaff_r9;
    *(undefined4 *)(unaff_r9 + 0x1c) = unaff_r10;
    *(undefined4 *)(unaff_r9 + 0x20) = unaff_r11;
    *(undefined4 *)(unaff_r9 + 0x24) = 0x8280124;
    coprocessor_store(7,in_cr8,unaff_r9);
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xd,in_cr11,unaff_r7);
  }
  return uRam08280140;
}

