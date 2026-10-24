
/* WARNING: Control flow encountered bad instruction data */

void FUN_08250378(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  uint unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    param_1 = param_1 + 0x30c;
    coprocessor_load(5,in_cr11,param_1);
  }
  if (in_CY) {
    in_ZR = ((uint)&stack0x00000000 & unaff_lr) == 0;
  }
  if (in_ZR) {
    iRam08250388 = param_1;
    uRam0825038c = param_3;
    uRam08250390 = param_4;
    uRam08250394 = unaff_r6;
    uRam08250398 = unaff_r8;
    uRam0825039c = unaff_r9;
    uRam082503a0 = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

