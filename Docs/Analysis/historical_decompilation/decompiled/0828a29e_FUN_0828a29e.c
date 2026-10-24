
/* WARNING: Control flow encountered bad instruction data */

undefined4
FUN_0828a29e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
    param_4 = param_4 + 0x5c6;
    software_interrupt(0xbdc0be);
  }
  if (!in_ZR) {
    *param_1 = 0x828a2ae;
    param_1[-1] = unaff_lr;
    param_1[-2] = register0x00000054;
    param_1[-3] = unaff_r10;
    param_1[-4] = unaff_r9;
    param_1[-5] = unaff_r7;
    param_1[-6] = unaff_r6;
    param_1[-7] = param_4;
    param_1[-8] = param_3;
    param_1[-9] = param_1;
  }
  coprocessor_loadlong2(9,in_cr14,param_1);
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_6;
}

