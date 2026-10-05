
/* WARNING: Control flow encountered bad instruction data */

void FUN_082ace8a(undefined4 param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_CY;
  
  if (in_CY) {
    *unaff_r9 = param_1;
    unaff_r9[1] = unaff_r4;
    unaff_r9[2] = unaff_r5;
    unaff_r9[3] = unaff_r7;
    unaff_r9[4] = unaff_r8;
    unaff_r9[5] = unaff_r10;
    unaff_r9[6] = in_r12;
    unaff_r9[7] = register0x00000054;
    unaff_r9[8] = 0x82ace92;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

