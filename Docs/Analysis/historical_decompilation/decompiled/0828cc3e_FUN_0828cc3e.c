
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828cc3e(void)

{
  uint uVar1;
  uint extraout_r2;
  undefined1 *unaff_r4;
  uint unaff_r5;
  int unaff_r8;
  undefined4 extraout_r12;
  undefined4 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  bool bVar2;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined1 auStack_220 [544];
  
  uVar1 = func_0x075fa348();
  if ((bool)in_OV) {
    in_CY = (undefined1 *)0x21f < &stack0x00000000;
    unaff_r4 = auStack_220;
    in_NG = (int)unaff_r4 < 0;
    in_ZR = unaff_r4 == (undefined1 *)0x0;
  }
  bVar2 = (bool)in_OV && SBORROW4((int)&stack0x00000000,0x220);
  if ((bool)in_CY && !(bool)in_ZR) {
    *(undefined4 *)(unaff_r8 + 0xade) = extraout_r12;
  }
  if (!(bool)in_ZR && (bool)in_NG == bVar2) {
    in_CY = (byte)(extraout_r2 >> 0xb) & 1;
    in_ZR = (extraout_r2 << 0x15 | 0x828cc42) == 0;
  }
  if (!(bool)in_ZR) {
    software_interrupt(0xef5d9);
  }
  if (bVar2) {
    coprocessor_movefromRt(0xb,2,1,in_cr4,in_cr2);
  }
  if (!(bool)in_CY) {
    in_ZR = unaff_r5 == ((uint)unaff_r4 >> (uVar1 & 0x1f) | (int)unaff_r4 << 0x20 - (uVar1 & 0x1f));
  }
  if ((bool)in_ZR) {
    coprocessor_moveto(0xf,0,0,unaff_pc,in_cr3,in_cr7);
    coprocessor_movefromRt(4,0,0,in_cr9,in_cr10);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

