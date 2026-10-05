
undefined4 FUN_080ef8c2(void)

{
  uint unaff_r6;
  int unaff_r10;
  undefined4 *unaff_lr;
  undefined4 unaff_pc;
  bool in_ZR;
  
  if (!in_ZR) {
    *(undefined4 *)(unaff_r10 - (unaff_r6 >> 0x13 | unaff_r6 << 0xd)) = unaff_pc;
  }
  return *unaff_lr;
}

