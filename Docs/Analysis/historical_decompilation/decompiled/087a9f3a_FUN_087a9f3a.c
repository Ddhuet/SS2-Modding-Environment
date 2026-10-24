
/* WARNING: Control flow encountered bad instruction data */

void FUN_087a9f3a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r5;
  uint unaff_r6;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (!in_OV) {
    unaff_r8 = (undefined4 *)((int)unaff_r8 - (unaff_r6 >> 10 | unaff_r6 << 0x16));
  }
  if (!in_CY || in_ZR) {
    *unaff_r8 = param_1;
    unaff_r8[1] = param_2;
    unaff_r8[2] = param_3;
    unaff_r8[3] = unaff_r5;
    unaff_r8[4] = unaff_r6;
    unaff_r8[5] = unaff_r9;
    unaff_r8[6] = unaff_r10;
    unaff_r8[7] = in_r12;
    unaff_r8[8] = register0x00000054;
    unaff_r8[9] = 0x87a9f46;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

