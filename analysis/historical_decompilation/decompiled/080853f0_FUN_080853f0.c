
/* WARNING: Control flow encountered bad instruction data */

void FUN_080853f0(void)

{
  undefined4 *unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  
  if (in_NG) {
    *unaff_r5 = 0x80853f8;
    unaff_r5[-1] = register0x00000054;
    unaff_r5[-2] = in_r12;
    unaff_r5[-3] = unaff_r10;
    unaff_r5[-4] = unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

