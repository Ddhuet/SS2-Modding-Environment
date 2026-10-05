
/* WARNING: Control flow encountered bad instruction data */

void FUN_086f1974(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  uint unaff_r9;
  undefined1 *unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr2;
  undefined4 in_cr6;
  undefined4 in_cr8;
  
  if (in_ZR) {
    unaff_r11 = &stack0x00000000 + (param_1 << (unaff_r5 & 0xff));
  }
  if (in_CY && !in_ZR) {
    unaff_r9 = (uint)*(byte *)(unaff_r4 + 0xf6f);
  }
  if (!in_NG) {
    coprocessor_load(2,in_cr2,unaff_r11 + -0x80);
  }
  coprocessor_load2(1,in_cr6,unaff_r6 + -0x3ec);
  if (in_OV) {
    *(undefined4 *)(unaff_r9 - 4) = unaff_lr;
    *(BADSPACEBASE **)(unaff_r9 - 8) = register0x00000054;
    *(undefined1 **)(unaff_r9 - 0xc) = unaff_r11;
    *(uint *)(unaff_r9 - 0x10) = 0x8000000 - unaff_r9;
    *(undefined4 *)(unaff_r9 - 0x14) = param_3;
    *(undefined4 *)(unaff_r9 - 0x18) = param_2;
  }
  iVar1 = param_1;
  if (!in_ZR && in_NG == in_OV) {
    iVar1 = param_1 + 0xa4;
    coprocessor_load(0,in_cr8,param_1);
  }
  if (in_NG != in_OV) {
    func_0x0898a2d4(iVar1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

