
void FUN_081077e6(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int *in_r12;
  int *extraout_r12;
  int *extraout_r12_00;
  int *extraout_r12_01;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr4;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    *(undefined4 *)(param_4 + 4) = param_1;
    *(undefined4 *)(param_4 + 8) = param_2;
    *(undefined4 *)(param_4 + 0xc) = param_3;
    *(int *)(param_4 + 0x10) = param_4;
    *(undefined4 *)(param_4 + 0x14) = unaff_r5;
    *(undefined4 *)(param_4 + 0x18) = unaff_r7;
    *(undefined4 *)(param_4 + 0x1c) = unaff_r8;
    *(undefined4 *)(param_4 + 0x20) = unaff_r10;
    *(int **)(param_4 + 0x24) = in_r12;
    *(BADSPACEBASE **)(param_4 + 0x28) = register0x00000054;
    *(undefined4 *)(param_4 + 0x2c) = 0x81077ee;
  }
  if (!(bool)in_CY) {
    unaff_lr = 0x81077ee;
    func_0x08acb3be();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if ((bool)in_CY) {
    coprocessor_load(7,in_cr4,unaff_lr + -0x118);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x0794604e();
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x073372fa();
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  if (!(bool)in_CY) {
    coprocessor_store(1,in_cr1,unaff_r11);
  }
  if (!(bool)in_ZR) {
    *in_r12 = param_4;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    return;
  }
  return;
}

