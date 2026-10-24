
/* WARNING: Control flow encountered bad instruction data */

void FUN_08040100(void)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  undefined4 *unaff_lr;
  bool in_CY;
  
  if (in_CY) {
    *unaff_lr = 0x8040108;
    unaff_lr[-1] = register0x00000054;
    unaff_lr[-2] = in_r12;
    unaff_lr[-3] = unaff_r10;
    unaff_lr[-4] = unaff_r8;
    unaff_lr[-5] = unaff_r6;
    unaff_lr[-6] = unaff_r5;
    unaff_lr[-7] = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

