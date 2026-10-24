
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df9b12(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  int *unaff_r10;
  int *piVar1;
  int *in_r12;
  int *piVar2;
  undefined4 unaff_lr;
  char in_NG;
  bool in_OV;
  undefined4 in_cr10;
  
  if (!in_OV) {
    param_4 = param_4 + 0x4b4;
    unaff_r7 = *param_2;
  }
  if ((bool)in_NG == in_OV) {
    software_interrupt(0x84b000);
    coprocessor_store(0xe,in_cr10,unaff_r4 + 0x210);
  }
  piVar1 = unaff_r10;
  piVar2 = in_r12;
  if (!in_OV) {
    piVar2 = in_r12 + 0x21;
    *in_r12 = (int)param_1;
    piVar1 = (int *)((int)unaff_r10 + 0x4ab);
    *unaff_r10 = param_4;
  }
  if ((bool)in_NG == in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = register0x00000054;
    param_1[-2] = piVar2;
    param_1[-3] = piVar1;
    param_1[-4] = unaff_r7;
    param_1[-5] = unaff_r5;
    param_1[-6] = param_4;
    param_1[-7] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

