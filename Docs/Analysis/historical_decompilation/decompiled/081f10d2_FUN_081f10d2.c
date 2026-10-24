
/* WARNING: Control flow encountered bad instruction data */

void FUN_081f10d2(void)

{
  undefined4 extraout_r3;
  int unaff_r4;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (in_NG != in_OV) {
    func_0x0701e7a6();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x073e1bd6();
  }
  bVar2 = false;
  bVar1 = (undefined1 *)((uint)&stack0x00000000 & 0xfcbbffff) == (undefined1 *)0x0;
  uVar3 = func_0x07f6d08c();
  if (!bVar1) {
    uRam081f10e2 = (int)uVar3;
  }
  if (bVar2) {
    *(undefined4 *)(unaff_r4 + -4) = extraout_r12;
    *(undefined4 *)(unaff_r4 + -8) = unaff_r11;
    *(undefined4 *)(unaff_r4 + -0xc) = unaff_r10;
    *(undefined4 *)(unaff_r4 + -0x10) = unaff_r9;
    *(undefined4 *)(unaff_r4 + -0x14) = unaff_r8;
    *(int *)(unaff_r4 + -0x18) = unaff_r4;
    *(undefined4 *)(unaff_r4 + -0x1c) = extraout_r3;
    *(int *)(unaff_r4 + -0x20) = (int)((ulonglong)uVar3 >> 0x20);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

