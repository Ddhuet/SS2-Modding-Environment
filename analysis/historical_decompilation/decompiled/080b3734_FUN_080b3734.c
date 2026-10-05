
/* WARNING: Control flow encountered bad instruction data */

void FUN_080b3734(int param_1)

{
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int in_r12;
  undefined4 *unaff_lr;
  bool in_NG;
  bool in_CY;
  undefined4 in_cr0;
  undefined4 in_cr2;
  
  if (in_NG) {
    *unaff_lr = 0x80b373c;
    unaff_lr[-1] = register0x00000054;
    unaff_lr[-2] = in_r12;
    unaff_lr[-3] = unaff_r10;
    unaff_lr[-4] = unaff_r8;
  }
  if (!in_CY) {
    in_NG = in_r12 + param_1 * -0x10000 < 0;
  }
  if (!in_NG) {
    coprocessor_function(1,4,0,in_cr2,in_cr0,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

