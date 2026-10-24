
/* WARNING: Control flow encountered bad instruction data */

void FUN_0802e994(void)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  
  if (in_NG) {
    *unaff_r8 = unaff_r4;
    unaff_r8[1] = unaff_r5;
    unaff_r8[2] = unaff_r8;
    unaff_r8[3] = unaff_r10;
    unaff_r8[4] = in_r12;
    unaff_r8[5] = register0x00000054;
    unaff_r8[6] = 0x802e99c;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

