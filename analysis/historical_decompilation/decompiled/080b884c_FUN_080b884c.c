
/* WARNING: Control flow encountered bad instruction data */

void FUN_080b884c(void)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  
  if (in_NG) {
    *unaff_r8 = 0x80b8854;
    unaff_r8[-1] = register0x00000054;
    unaff_r8[-2] = in_r12;
    unaff_r8[-3] = unaff_r10;
    unaff_r8[-4] = unaff_r8;
    unaff_r8[-5] = unaff_r5;
    unaff_r8[-6] = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

