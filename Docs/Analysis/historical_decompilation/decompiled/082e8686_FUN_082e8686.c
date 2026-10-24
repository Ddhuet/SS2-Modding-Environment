
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e8686(void)

{
  int unaff_r6;
  int unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr3;
  
  if (!in_ZR && in_NG == in_OV) {
    in_OV = SCARRY4(unaff_r8,unaff_r8 * 0x800);
    in_NG = unaff_r8 * 0x801 < 0;
  }
  if (!(bool)in_NG) {
    coprocessor_storelong(6,in_cr3,unaff_r6 + -0x3fc);
  }
  if (in_NG != in_OV) {
    *unaff_r9 = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

