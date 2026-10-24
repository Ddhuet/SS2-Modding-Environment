
/* WARNING: Control flow encountered bad instruction data */

void FUN_081a88a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY) {
    *unaff_r6 = 0x81a88b0;
    unaff_r6[-1] = register0x00000054;
    unaff_r6[-2] = in_r12;
    unaff_r6[-3] = unaff_r10;
    unaff_r6[-4] = unaff_r8;
    unaff_r6[-5] = unaff_r7;
    unaff_r6[-6] = unaff_r6;
    unaff_r6[-7] = unaff_r5;
    unaff_r6[-8] = unaff_r4;
    unaff_r6[-9] = param_3;
  }
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

