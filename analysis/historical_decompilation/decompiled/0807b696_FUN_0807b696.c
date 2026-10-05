
/* WARNING: Control flow encountered bad instruction data */

undefined4 * FUN_0807b696(undefined4 *param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 unaff_r7;
  uint unaff_r8;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  
  if (!in_CY) {
    unaff_r8 = param_2 & (uint)param_1 >> 0x10;
  }
  if (in_OV) {
    return param_1;
  }
  if (!in_ZR) {
    *param_3 = unaff_r7;
  }
  if (in_CY) {
    *(uint *)((int)param_1 + 0x8d1) = unaff_r8;
  }
  if (!in_ZR) {
    coprocessor_store(2,in_cr0,unaff_r8);
  }
  if (in_CY) {
    *param_1 = unaff_lr;
    param_1[-1] = param_4;
  }
  if (in_CY && !in_ZR) {
    return (undefined4 *)*param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

