
/* WARNING: Control flow encountered bad instruction data */

void FUN_08001130(undefined4 *param_1)

{
  undefined4 *unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_CY;
  
  if (in_NG) {
    *unaff_r7 = 0x8001138;
    unaff_r7[-1] = register0x00000054;
    unaff_r7[-2] = in_r12;
    unaff_r7[-3] = unaff_r10;
    unaff_r7[-4] = unaff_r8;
  }
  if (in_CY) {
    *param_1 = unaff_lr;
    param_1[-1] = register0x00000054;
    param_1[-2] = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

