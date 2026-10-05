
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b037da(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  undefined4 uVar1;
  undefined4 *unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 uVar2;
  char in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr4;
  
  if (in_OV) {
    unaff_r11 = coprocessor_movefromRt(5,5,in_cr4);
    unaff_r6 = (undefined4 *)coprocessor_movefromRt2(5,5,in_cr4);
  }
  if ((bool)in_NG != in_OV) {
    *unaff_r6 = param_3;
    unaff_r6[1] = unaff_r4;
    unaff_r6[2] = unaff_r6;
    unaff_r6[3] = unaff_r8;
    unaff_r6[4] = unaff_r9;
    unaff_r6[5] = unaff_r11;
    unaff_r6[6] = in_r12;
    unaff_r6[7] = register0x00000054;
  }
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *(undefined4 *)(unaff_r10 + 0x10);
  uVar2 = *(undefined4 *)(unaff_r10 + 0x20);
  *(undefined4 *)(unaff_r11 + 4) = *(undefined4 *)(unaff_r10 + 8);
  *(undefined4 *)(unaff_r11 + 8) = uVar1;
  *(undefined4 *)(unaff_r11 + 0xc) = unaff_r9;
  *(BADSPACEBASE **)(unaff_r11 + 0x10) = register0x00000054;
  *(undefined4 *)(unaff_r11 + 0x14) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

