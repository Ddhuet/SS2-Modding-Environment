
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c0adc6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 *unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_OV;
  
  if (in_OV) {
    *unaff_r8 = param_2;
    unaff_r8[1] = param_3;
    unaff_r8[2] = unaff_r5;
    unaff_r8[3] = unaff_r6;
    unaff_r8[4] = unaff_r8;
    unaff_r8[5] = unaff_r10;
    unaff_r8[6] = in_r12;
    unaff_r8[7] = register0x00000054;
    unaff_r8[8] = 0x8c0adce;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

