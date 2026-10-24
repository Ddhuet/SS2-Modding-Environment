
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c3dea(void)

{
  int unaff_r7;
  undefined1 in_r12;
  undefined1 extraout_r12;
  undefined1 extraout_r12_00;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x06f71502();
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    func_0x070b5d12();
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    *(undefined1 *)(unaff_r7 + 0x7bd) = in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

