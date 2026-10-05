
/* WARNING: Control flow encountered bad instruction data */

void FUN_08260548(int param_1)

{
  undefined1 unaff_r5;
  uint unaff_r9;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_CY || in_ZR) {
    return;
  }
  if (in_NG != in_OV) {
    SignedSaturate(unaff_lr << 0xb,0xd);
    SignedDoesSaturate(unaff_lr << 0xb,0xd);
  }
  if (in_ZR) {
    in_OV = SBORROW4(0x825d558,(uint)!in_CY);
    in_NG = (int)(0x8260558 - (!in_CY + 0x3000)) < 0;
  }
  if ((bool)in_OV) {
    unaff_r5 = *(undefined1 *)(param_1 - (unaff_r9 >> 0xc));
  }
  if ((bool)in_NG) {
    uRam08260560 = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

