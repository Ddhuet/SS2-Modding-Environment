
/* WARNING: Control flow encountered bad instruction data */

void FUN_0808315e(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_r4;
  int *piVar1;
  undefined4 *unaff_r6;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 in_NG;
  bool in_OV;
  undefined4 in_cr15;
  
  coprocessor_load2(7,in_cr15,unaff_r9);
  piVar1 = unaff_r4;
  if (in_OV) {
    in_NG = param_1 < 0;
    piVar1 = unaff_r4 + -0xe5;
    unaff_r6 = (undefined4 *)*unaff_r4;
  }
  if ((bool)in_NG) {
    *unaff_r6 = unaff_lr;
    unaff_r6[-1] = register0x00000054;
    unaff_r6[-2] = unaff_r10;
    unaff_r6[-3] = unaff_r6;
    unaff_r6[-4] = piVar1;
    unaff_r6[-5] = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

