
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08b39ad6(void)

{
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_stack_00000004;
  
  if (!in_ZR && in_NG == in_OV) {
    if (in_NG != in_OV) {
      SignedSaturate(unaff_r9 >> 0xc,0x1e);
      SignedDoesSaturate(unaff_r9 >> 0xc,0x1e);
      SignedSaturate(unaff_r9 >> 0x12,0x1e);
      SignedDoesSaturate(unaff_r9 >> 0x12,0x1e);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return in_stack_00000004;
}

