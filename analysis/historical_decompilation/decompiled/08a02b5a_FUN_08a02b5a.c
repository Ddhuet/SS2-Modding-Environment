
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a02b5a(void)

{
  int unaff_r10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr2;
  
  if (in_OV) {
    register0x00000054 = (BADSPACEBASE *)(unaff_r10 + 0x7500000 + (uint)in_CY);
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    coprocessor_loadlong(6,in_cr2,(undefined1 *)((int)register0x00000054 + 0x1d4));
  }
  if (in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_NG != in_OV) {
    func_0x078a0552();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

