
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a2584e(void)

{
  uint *extraout_r2;
  uint *extraout_r2_00;
  uint *extraout_r2_01;
  uint *extraout_r2_02;
  uint *puVar1;
  uint unaff_r6;
  int iVar2;
  char in_NG;
  undefined1 in_CY;
  undefined1 in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0xf0b5b7);
  }
  if ((bool)in_OV) {
    software_interrupt(0xbcb7);
    software_interrupt(0xbbb5);
    software_interrupt(0xbbbb);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x077ea206();
  iVar2 = 0x8a25866;
  puVar1 = extraout_r2;
  if (!(bool)in_OV) {
    iVar2 = 0x8a2586a;
    func_0x078135c6();
    puVar1 = extraout_r2_00;
  }
  if (!(bool)in_OV) {
    iVar2 = 0x8a2586e;
    func_0x078135ca();
    puVar1 = extraout_r2_01;
  }
  if (!(bool)in_OV) {
    iVar2 = 0x8a25872;
    func_0x0a7835ce();
    puVar1 = extraout_r2_02;
  }
  if (!(bool)in_NG) {
    unaff_r6 = (uint)*(byte *)(iVar2 - (unaff_r6 >> 10 | unaff_r6 << 0x16));
  }
  if ((bool)in_OV) {
    *(char *)(iVar2 + -0xcee) = (char)unaff_r6;
  }
  if ((bool)in_CY) {
    *puVar1 = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

