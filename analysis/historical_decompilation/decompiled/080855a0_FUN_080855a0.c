
/* WARNING: Control flow encountered bad instruction data */

void FUN_080855a0(undefined4 param_1)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_OV;
  
  if (in_NG) {
    *in_r12 = 0x80855a8;
    in_r12[-1] = register0x00000054;
    in_r12[-2] = in_r12;
    in_r12[-3] = unaff_r10;
    in_r12[-4] = unaff_r8;
    in_r12[-5] = unaff_r4;
  }
  if (in_OV) {
    *unaff_r8 = unaff_lr;
    unaff_r8[-1] = register0x00000054;
    unaff_r8[-2] = unaff_r11;
    unaff_r8[-3] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

