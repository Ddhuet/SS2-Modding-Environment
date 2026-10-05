
/* WARNING: Control flow encountered bad instruction data */

void FUN_080066a0(void)

{
  undefined4 *unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  
  if (in_NG) {
    *unaff_r7 = 0x80066a8;
    unaff_r7[-1] = register0x00000054;
    unaff_r7[-2] = in_r12;
    unaff_r7[-3] = unaff_r10;
    unaff_r7[-4] = unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

