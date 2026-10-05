
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08ef8816) */
/* WARNING: Removing unreachable block (ram,0x08ef8822) */
/* WARNING: Removing unreachable block (ram,0x08ef8826) */

undefined4 FUN_08ef87de(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined1 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined4 in_cr11;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_OV) {
    *(undefined4 *)(unaff_r9 + 4) = param_3;
    *(undefined4 *)(unaff_r9 + 8) = unaff_r4;
    *(undefined4 **)(unaff_r9 + 0xc) = unaff_r8;
    *(undefined4 *)(unaff_r9 + 0x10) = unaff_r10;
    *(BADSPACEBASE **)(unaff_r9 + 0x14) = register0x00000054;
    *(int *)(unaff_r9 + 0x18) = unaff_lr;
    unaff_r9 = unaff_r9 + 0x18;
  }
  if (in_NG == in_OV) {
    unaff_lr = 0x8ef87ea;
    uVar1 = func_0x0795195e();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG == in_OV) {
    return *(undefined4 *)(unaff_r9 + 4);
  }
  if (!(bool)in_OV) {
    return (int)uVar1;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    if (in_NG == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      *unaff_r8 = (int)uVar1;
      unaff_r8[1] = param_4;
      unaff_r8[2] = unaff_r5;
      unaff_r8[3] = unaff_r7;
      unaff_r8[4] = unaff_r8;
      unaff_r8[5] = unaff_r9;
      unaff_r8[6] = unaff_r11;
      unaff_r8[7] = in_r12;
      unaff_r8[8] = 0x8ef8806;
    }
    *unaff_r6 = (char)unaff_r10;
    if (in_NG == '\x01') {
      unaff_lr = 0x8ef880a;
      uVar1 = func_0x075669a6();
      param_4 = extraout_r3_00;
      in_r12 = extraout_r12_00;
    }
    if ((bool)in_OV) {
      if (in_NG != '\x01') {
        if (in_NG == '\x01') {
          *(int *)(in_r12 + 4) = (int)uVar1;
          *(undefined4 *)(in_r12 + 8) = param_4;
          *(undefined4 *)(in_r12 + 0xc) = unaff_r5;
          *(undefined4 *)(in_r12 + 0x10) = unaff_r7;
          *(undefined4 **)(in_r12 + 0x14) = unaff_r8;
          *(undefined4 *)(in_r12 + 0x18) = unaff_r11;
          *(int *)(in_r12 + 0x1c) = unaff_lr;
        }
        if (!(bool)in_ZR && in_NG == '\x01') {
          coprocessor_storelong(0xb,in_cr11,unaff_r11);
        }
        if (in_NG == '\x01') {
          *(int *)(unaff_lr + 4) = (int)((ulonglong)uVar1 >> 0x20);
          *(undefined4 *)(unaff_lr + 8) = param_4;
          *(undefined4 *)(unaff_lr + 0xc) = unaff_r4;
          *(undefined4 *)(unaff_lr + 0x10) = unaff_r7;
          *(undefined4 **)(unaff_lr + 0x14) = unaff_r8;
          *(undefined4 *)(unaff_lr + 0x18) = unaff_r11;
          *(int *)(unaff_lr + 0x1c) = in_r12;
          *(undefined4 *)(unaff_lr + 0x20) = 0x8ef8826;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

