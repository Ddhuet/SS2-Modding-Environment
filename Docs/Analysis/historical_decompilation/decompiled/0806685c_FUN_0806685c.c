
/* WARNING: Control flow encountered bad instruction data */

void FUN_0806685c(void)

{
  undefined4 *in_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  
  if (in_NG) {
    *in_r3 = 0x8066864;
    in_r3[-1] = register0x00000054;
    in_r3[-2] = in_r12;
    in_r3[-3] = unaff_r10;
    in_r3[-4] = unaff_r8;
    in_r3[-5] = unaff_r6;
    in_r3[-6] = unaff_r5;
    in_r3[-7] = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

