
/* WARNING: Control flow encountered bad instruction data */

void FUN_081700d6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  int unaff_r5;
  int unaff_r6;
  undefined8 *unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  int unaff_r10;
  uint in_r12;
  uint extraout_r12;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    unaff_lr = 0x81700da;
    uVar1 = func_0x06d5d802();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    unaff_r8 = unaff_r8 + 800;
    coprocessor_store(3,in_cr12,unaff_r8);
  }
  if (in_NG != in_OV) {
    unaff_r8 = in_r12 | 0x82;
    coprocessor_storelong(7,in_cr13,unaff_r5 + 0x35c);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *unaff_r7 = uVar1;
    *(undefined4 *)(unaff_r7 + 1) = param_4;
    *(int *)((int)unaff_r7 + 0xc) = unaff_r6;
    *(undefined8 **)(unaff_r7 + 2) = unaff_r7;
    *(uint *)((int)unaff_r7 + 0x14) = unaff_r8;
    *(int *)(unaff_r7 + 3) = unaff_r10;
    *(BADSPACEBASE **)((int)unaff_r7 + 0x1c) = register0x00000054;
    *(undefined4 *)(unaff_r7 + 4) = unaff_lr;
    *(undefined4 *)((int)unaff_r7 + 0x24) = 0x81700ee;
  }
  *(char *)(unaff_r6 + 0x4a5) = (char)unaff_r10;
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_function(6,0xc,6,in_cr12,in_cr2,in_cr12);
  }
  else {
    *(undefined1 *)(unaff_r10 + (unaff_r9 >> 0x15 | unaff_r9 << 0xb)) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

