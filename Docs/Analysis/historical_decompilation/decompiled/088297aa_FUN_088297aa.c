
/* WARNING: Control flow encountered bad instruction data */

void FUN_088297aa(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined1 *unaff_r6;
  undefined1 *puVar1;
  int unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  puVar1 = unaff_r6;
  if (in_NG) {
    param_3 = param_3 ^ 0x20000002;
    puVar1 = unaff_r6 + -0x242;
    *unaff_r6 = (char)param_3;
  }
  if (!in_CY || in_ZR) {
    *(char *)(unaff_r7 - (unaff_r7 >> 8)) = (char)unaff_r4;
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    *(undefined4 *)(unaff_r9 + -4) = unaff_lr;
    *(undefined4 *)(unaff_r9 + -8) = unaff_r10;
    *(int *)(unaff_r9 + -0xc) = unaff_r9;
    *(undefined4 *)(unaff_r9 + -0x10) = unaff_r8;
    *(undefined1 **)(unaff_r9 + -0x14) = puVar1;
    *(undefined4 *)(unaff_r9 + -0x18) = unaff_r5;
    *(undefined4 *)(unaff_r9 + -0x1c) = unaff_r4;
    *(undefined4 *)(unaff_r9 + -0x20) = param_4;
    *(undefined4 *)(unaff_r9 + -0x24) = param_1;
  }
  coprocessor_load(4,in_cr2,&stack0x00000274);
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_moveto(4,7,5,param_3,in_cr14,in_cr12);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

