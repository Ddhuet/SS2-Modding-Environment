
/* WARNING: Control flow encountered bad instruction data */

void FUN_081df776(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int *extraout_r1;
  int extraout_r2;
  int unaff_r4;
  int unaff_r7;
  int unaff_r8;
  int unaff_r11;
  bool in_ZR;
  bool in_CY;
  undefined1 in_OV;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined1 in_stack_00000f1e;
  
  piVar1 = param_2;
  if (!in_CY || in_ZR) {
    piVar1 = (int *)((int)param_2 + 0x5ca);
    *param_2 = unaff_r11;
  }
  func_0x072879de(param_1,piVar1);
  if ((bool)in_OV) {
    coprocessor_loadlong(1,in_cr4,unaff_r11 + -0x68);
  }
  if (in_CY) {
    coprocessor_storelong(8,in_cr5,extraout_r2 + -0x198);
  }
  piVar1 = extraout_r1;
  if (!in_CY || in_ZR) {
    piVar1 = extraout_r1 + 0x1b3;
    *piVar1 = unaff_r11;
  }
  piVar1[1] = (int)piVar1;
  piVar1[2] = extraout_r2;
  piVar1[3] = unaff_r4;
  piVar1[4] = unaff_r7;
  piVar1[5] = unaff_r8;
  piVar1[6] = (int)&stack0x00000f1e;
  piVar1[7] = 0x81df796;
  if ((bool)in_OV) {
    func_0x0982ebfe(in_stack_00000f1e);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

