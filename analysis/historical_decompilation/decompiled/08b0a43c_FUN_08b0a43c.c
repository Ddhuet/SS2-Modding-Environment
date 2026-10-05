
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b0a43c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 *unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  int unaff_r11;
  int in_r12;
  int iVar1;
  int extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_17,param_16);
  iVar1 = in_r12;
  if (in_NG != in_OV) {
    iVar1 = in_r12 + 0x40;
    coprocessor_store(5,in_cr11,in_r12);
    coprocessor_load(1,in_cr5,unaff_r11);
  }
  if (!in_CY || (bool)in_ZR) {
    *unaff_r8 = param_16;
    unaff_r8[1] = param_19;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r7;
    unaff_r8[4] = unaff_r11;
    unaff_r8[5] = 0x8b0a44c;
  }
  if (in_NG == in_OV) {
    return;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY || (bool)in_ZR) {
    *unaff_r7 = param_16;
    unaff_r7[1] = param_19;
    unaff_r7[2] = unaff_r5;
    unaff_r7[3] = unaff_r7;
    unaff_r7[4] = unaff_r8;
    unaff_r7[5] = unaff_r11;
    unaff_r7[6] = 0x8b0a458;
    *unaff_r8 = param_16;
    unaff_r8[1] = param_19;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r7;
    unaff_r8[4] = unaff_r8;
    unaff_r8[5] = unaff_r11;
    unaff_r8[6] = register0x00000054;
    unaff_r8[7] = 0x8b0a45c;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    uVar2 = func_0x071b8b54(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            param_10,param_11,param_12,param_13,param_14,param_15);
    param_18 = extraout_r2;
    param_19 = extraout_r3;
    iVar1 = extraout_r12;
  }
  else {
    unaff_r8 = unaff_r8 + 0x9b;
    coprocessor_storelong(0xb,in_cr10,unaff_r9);
  }
  if (in_NG != in_OV) {
    *(undefined4 *)(unaff_r11 + 4) = param_18;
    *(undefined4 *)(unaff_r11 + 8) = param_19;
    *(undefined4 *)(unaff_r11 + 0xc) = unaff_r5;
    *(undefined4 **)(unaff_r11 + 0x10) = unaff_r7;
    *(undefined4 **)(unaff_r11 + 0x14) = unaff_r8;
    *(undefined4 *)(unaff_r11 + 0x18) = unaff_r9;
    *(int *)(unaff_r11 + 0x1c) = unaff_r11;
    *(BADSPACEBASE **)(unaff_r11 + 0x20) = register0x00000054;
    *(undefined4 *)(unaff_r11 + 0x24) = 0x8b0a474;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(unaff_r10 + 4) = uVar2;
  *(undefined4 *)(unaff_r10 + 0xc) = param_19;
  *(undefined4 *)(unaff_r10 + 0x10) = unaff_r6;
  *(undefined4 **)(unaff_r10 + 0x14) = unaff_r7;
  *(undefined4 **)(unaff_r10 + 0x18) = unaff_r8;
  *(undefined4 *)(unaff_r10 + 0x1c) = unaff_r9;
  *(int *)(unaff_r10 + 0x20) = unaff_r11;
  *(int *)(unaff_r10 + 0x24) = iVar1;
  *(BADSPACEBASE **)(unaff_r10 + 0x28) = register0x00000054;
  *(undefined4 *)(unaff_r10 + 0x2c) = 0x8b0a470;
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x075f0ee4();
  }
  iVar1 = unaff_r11;
  if (!(bool)in_ZR && in_NG == in_OV) {
    iVar1 = unaff_r11 + 0x2a8;
    coprocessor_store(9,in_cr9,unaff_r11);
  }
  if (in_NG != in_OV) {
    coprocessor_load(9,in_cr11,iVar1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

