
/* WARNING: Control flow encountered bad instruction data */

void FUN_080aa86c(void)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 *in_r12;
  bool in_NG;
  bool in_OV;
  
  if (in_NG) {
    *in_r12 = 0x80aa874;
    in_r12[-1] = register0x00000054;
    in_r12[-2] = in_r12;
    in_r12[-3] = unaff_r10;
    in_r12[-4] = unaff_r8;
    in_r12[-5] = unaff_r5;
    in_r12[-6] = unaff_r4;
  }
  if (in_OV) {
    *(BADSPACEBASE **)unaff_r4 = register0x00000054;
    *(undefined4 *)(unaff_r4 + -4) = unaff_r10;
    *(undefined4 *)(unaff_r4 + -8) = unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

