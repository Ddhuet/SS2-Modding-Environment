
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a16498) */

void FUN_08a16490(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 *extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r5;
  undefined4 unaff_r9;
  uint unaff_r10;
  char in_NG;
  bool in_CY;
  char in_OV;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    uVar1 = func_0x0955ef50();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if ((bool)in_NG) {
    *param_3 = uVar1;
    *(undefined4 *)(param_3 + 1) = param_4;
    *(undefined4 *)((int)param_3 + 0xc) = unaff_r5;
    *(undefined4 *)(param_3 + 2) = unaff_r9;
    *(uint *)((int)param_3 + 0x14) = unaff_r10 ^ 0x2dc00;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

