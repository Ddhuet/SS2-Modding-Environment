
/* WARNING: Control flow encountered bad instruction data */

void FUN_085cb094(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  int unaff_r9;
  undefined1 *unaff_r10;
  int iVar2;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined1 unaff_lr;
  bool in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool in_OV;
  
  if (in_NG) {
    *in_r12 = unaff_r11;
    *unaff_r10 = unaff_lr;
    iVar1 = *(int *)(unaff_r9 + 0xd84) >> 0x1b;
    iVar2 = SignedSaturate(iVar1,0xb);
    SignedDoesSaturate(iVar1,0xb);
  }
  else {
    iVar2 = ((uint)unaff_r10 | 0x14400000) - 0x465;
  }
  if (in_OV) {
    *(undefined4 *)(iVar2 + 4) = param_2;
    *(undefined4 *)(iVar2 + 8) = param_3;
    *(undefined4 *)(iVar2 + 0xc) = param_4;
    *(undefined4 *)(iVar2 + 0x10) = unaff_r4;
    *(int *)(iVar2 + 0x14) = unaff_r6;
    *(undefined4 *)(iVar2 + 0x18) = unaff_r7;
    *(int *)(iVar2 + 0x1c) = iVar2;
    *(undefined4 *)(iVar2 + 0x20) = unaff_r11;
    *(undefined4 *)(iVar2 + 0x24) = 0x85cb0b4;
  }
  if (in_NG != in_OV) {
    func_0x074717ec();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *(char *)(unaff_r6 - (unaff_r5 >> 0xc | unaff_r5 << 0x14)) =
         (char)unaff_r7 - (char)(unaff_r5 >> 0xe);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

