
/* WARNING: Control flow encountered bad instruction data */

void FUN_080f04a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  int unaff_r5;
  undefined1 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined1 in_r12;
  undefined1 extraout_r12;
  undefined1 extraout_r12_00;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    param_1 = func_0x06d5db94();
    param_3 = extraout_r2;
    in_r12 = extraout_r12;
  }
  if (in_NG == in_OV) {
    *(undefined4 *)(unaff_r5 + 4) = param_1;
    *(undefined4 *)(unaff_r5 + 8) = param_3;
    *(int *)(unaff_r5 + 0xc) = unaff_r5;
    *(undefined4 *)(unaff_r5 + 0x10) = unaff_r7;
    *(undefined4 *)(unaff_r5 + 0x14) = unaff_r8;
    *(undefined4 *)(unaff_r5 + 0x18) = unaff_r10;
    *(BADSPACEBASE **)(unaff_r5 + 0x1c) = register0x00000054;
    *(undefined4 *)(unaff_r5 + 0x20) = 0x80f04b4;
    unaff_r5 = unaff_r5 + 0x20;
    func_0x06cdc364();
    in_r12 = extraout_r12_00;
  }
  if (in_NG != in_OV) {
    coprocessor_load(1,in_cr11,unaff_r5 + 0x2ac);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    return;
  }
  *unaff_r6 = in_r12;
  if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xe9e5dc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

