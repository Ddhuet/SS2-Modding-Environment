
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0804455c) */

void FUN_0804454c(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r8;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr2;
  
  if (in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY) {
    param_2 = (uint)param_1 & 0x810000;
  }
  if (in_OV) {
    coprocessor_storelong(4,in_cr2,param_4 + -4);
  }
  if (in_CY) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r4;
    param_1[-2] = param_4;
  }
  if (in_OV) {
    *unaff_r8 = 0x804456c;
    unaff_r8[-1] = unaff_lr;
    unaff_r8[-2] = in_r12;
    unaff_r8[-3] = param_2;
    unaff_r8[-4] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

