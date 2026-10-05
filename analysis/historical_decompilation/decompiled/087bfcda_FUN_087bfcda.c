
/* WARNING: Control flow encountered bad instruction data */

void FUN_087bfcda(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  undefined1 *unaff_r4;
  undefined1 *unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 unaff_lr;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr5;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (!(bool)in_NG) {
    *unaff_r5 = (char)unaff_r11;
    unaff_r5 = (undefined1 *)(uint)(byte)unaff_r5[-0x5cc];
    unaff_r4 = (undefined1 *)(uint)(byte)unaff_r4[-0x555];
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r8 = param_1;
  unaff_r8[1] = param_3;
  unaff_r8[2] = unaff_r7;
  unaff_r8[3] = unaff_r8;
  unaff_r8[4] = unaff_r10;
  unaff_r8[5] = unaff_lr;
  if (in_NG != in_OV) {
    unaff_lr = 0x87bfcf2;
    uVar1 = func_0x06ba275a();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  uRam087bfcfe = CONCAT44(uRam087bfcfe._4_4_,(undefined4)uRam087bfcfe);
  if (!(bool)in_ZR && in_NG == in_OV) {
    uRam087bfd1a = 0x87bfcfa;
    uRam087bfd06 = param_4;
    uRam087bfd0a = unaff_r6;
    uRam087bfd0e = unaff_r7;
    uRam087bfd12 = unaff_r10;
    iRam087bfd16 = unaff_r11;
    uRam087bfcfe = uVar1;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *(undefined8 *)(unaff_r9 + 4) = uVar1;
    *(undefined4 *)(unaff_r9 + 0xc) = param_4;
    *(undefined1 **)(unaff_r9 + 0x10) = unaff_r4;
    *(undefined1 **)(unaff_r9 + 0x14) = unaff_r5;
    *(undefined4 *)(unaff_r9 + 0x18) = unaff_r7;
    *(undefined4 *)(unaff_r9 + 0x1c) = unaff_r10;
    *(int *)(unaff_r9 + 0x20) = unaff_r11;
    *(undefined4 *)(unaff_r9 + 0x24) = 0x87bfcfe;
  }
  if ((bool)in_NG) {
    *unaff_r5 = (char)unaff_r8;
    uVar1 = uRam087bfcfe;
  }
  else {
    *unaff_r4 = (char)unaff_r5;
    uVar1 = uRam087bfcfe;
  }
  uRam087bfcfe._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uRam087bfcfe._0_4_ = (undefined4)uVar1;
  coprocessor_movefromRt(5,4,2,in_cr11,in_cr5);
  if (!(bool)in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY) {
    coprocessor_load(0xc,in_cr12,unaff_r11);
    coprocessor_movefromRt(1,4,4,in_cr11,in_cr11);
    coprocessor_storelong(1,in_cr1,unaff_r11 + -0x2fc);
    coprocessor_storelong(1,in_cr9,unaff_r9);
    coprocessor_load(1,in_cr11,&stack0x00000000);
    coprocessor_load(1,in_cr13,unaff_lr);
  }
  coprocessor_function(1,0xe,1,in_cr11,in_cr14,in_cr5);
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xe,in_cr14,in_r12);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

