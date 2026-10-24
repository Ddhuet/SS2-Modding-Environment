
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a4e144(void)

{
  int unaff_r6;
  bool in_NG;
  undefined1 in_OV;
  
  if (!in_NG) {
    func_0x07d7b6e4();
  }
  if (!(bool)in_OV) {
    SignedSaturate(unaff_r6 << 0xe,0x1c);
    SignedDoesSaturate(unaff_r6 << 0xe,0x1c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

