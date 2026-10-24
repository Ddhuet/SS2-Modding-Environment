
/* WARNING: Control flow encountered bad instruction data */

void FUN_08262aa4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  undefined4 unaff_r6;
  undefined4 unaff_r9;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x8262aa8;
    param_1 = (undefined4 *)func_0x07210144();
    param_4 = extraout_r3;
  }
  if ((bool)in_ZR) {
    coprocessor_loadlong(8,in_cr14,unaff_r9);
  }
  if (!(bool)in_NG) {
    coprocessor_moveto2(4,1,param_4,unaff_r6,in_cr15);
  }
  coprocessor_loadlong(0,in_cr1,0x8262abc);
  if (!(bool)in_ZR) {
    *param_1 = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

