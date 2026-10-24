
/* WARNING: Control flow encountered bad instruction data */

void FUN_0826740e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  undefined4 *unaff_lr;
  bool in_CY;
  
  if (!in_CY) {
    *unaff_lr = param_2;
    unaff_lr[1] = param_4;
    unaff_lr[2] = unaff_r6;
    unaff_lr[3] = unaff_r7;
    unaff_lr[4] = unaff_r8;
    unaff_lr[5] = unaff_r10;
    unaff_lr[6] = in_r12;
    unaff_lr[7] = register0x00000054;
    unaff_lr[8] = 0x8267416;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

