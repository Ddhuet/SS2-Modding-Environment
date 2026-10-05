
/* WARNING: Control flow encountered bad instruction data */

void FUN_0831309e(undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_ZR;
  
  if (!in_ZR) {
    *unaff_r4 = 0x83130a6;
    unaff_r4[-1] = register0x00000054;
    unaff_r4[-2] = in_r12;
    unaff_r4[-3] = unaff_r10;
    unaff_r4[-4] = unaff_r8;
    unaff_r4[-5] = unaff_r7;
    unaff_r4[-6] = unaff_r6;
    unaff_r4[-7] = unaff_r4;
    unaff_r4[-8] = param_2;
    unaff_r4[-9] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

