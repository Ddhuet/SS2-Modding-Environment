
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bfeaa0(void)

{
  int iVar1;
  int unaff_r9;
  int in_r12;
  int extraout_r12;
  undefined1 in_NG;
  bool in_ZR;
  bool in_OV;
  
  if (!in_ZR && (bool)in_NG == in_OV) {
    software_interrupt(0xfcb546);
  }
  if (in_OV) {
    iVar1 = in_r12 >> 0x1b;
    in_r12 = SignedSaturate(iVar1,0xb);
    SignedDoesSaturate(iVar1,0xb);
  }
  if (!(bool)in_NG) {
    func_0x07672220();
    in_r12 = extraout_r12;
  }
  if ((bool)in_NG) {
    *(int *)(unaff_r9 + 0xddc) = in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

