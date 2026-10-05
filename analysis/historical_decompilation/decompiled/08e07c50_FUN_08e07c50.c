
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e07c50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined1 extraout_r3;
  undefined1 *unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 *unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined4 in_stack_00000024;
  
  coprocessor_function2(5,0xf,1,in_cr11,in_cr15,in_cr2);
  coprocessor_function(7,0xf,1,in_cr12,in_cr15,in_cr1);
  if ((bool)in_ZR || in_NG != in_OV) {
    software_interrupt(0xffd821);
  }
  else {
    coprocessor_function(6,0xf,1,in_cr11,in_cr14,in_cr2);
  }
  if (in_NG != in_OV) {
    unaff_lr = unaff_lr + 0x88;
    coprocessor_loadlong(4,in_cr11,unaff_lr);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    unaff_lr = 0x8e07c68;
    func_0x089b5534();
    param_2 = extraout_r1;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if ((bool)in_OV) {
    if (!(bool)in_CY || (bool)in_ZR) {
      register0x00000054 = (BADSPACEBASE *)&stack0x00000024;
    }
    if ((bool)in_NG) {
      *unaff_r4 = param_4;
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      return;
    }
    *unaff_r7 = param_2;
    unaff_r7[1] = param_3;
    unaff_r7[2] = unaff_r5;
    unaff_r7[3] = unaff_r6;
    unaff_r7[4] = unaff_r9;
    unaff_r7[5] = unaff_r10;
    unaff_r7[6] = register0x00000054;
    unaff_r7[7] = unaff_lr;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

