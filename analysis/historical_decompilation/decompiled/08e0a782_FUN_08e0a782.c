
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e0a782(undefined4 param_1)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_OV;
  
  if (in_OV) {
    *unaff_r8 = param_1;
    unaff_r8[1] = unaff_r4;
    unaff_r8[2] = unaff_r8;
    unaff_r8[3] = unaff_r10;
    unaff_r8[4] = in_r12;
    unaff_r8[5] = register0x00000054;
    unaff_r8[6] = 0x8e0a78a;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

