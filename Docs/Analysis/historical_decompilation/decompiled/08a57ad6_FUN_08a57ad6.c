
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a57ad6(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  undefined4 unaff_r11;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int unaff_lr;
  uint unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr11;
  undefined8 in_d18;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    iVar1 = param_3 + 0x2ec;
    coprocessor_load(7,in_cr11,param_3);
  }
  else {
    coprocessor_loadlong(5,in_cr11,param_4 + 0x1dc);
    iVar1 = param_3;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8a57ae2;
    func_0x09606a1a(param_1,param_2,iVar1);
    in_r12 = extraout_r12;
  }
  if ((bool)in_OV) {
    *(char *)(unaff_r5 - (unaff_r7 >> 0x1d | unaff_r7 << 3)) = (char)unaff_pc;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8a57aee;
    func_0x07bc69ca();
    in_r12 = extraout_r12_00;
  }
                    /* WARNING: Could not recover jumptable at 0x08a57aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!(bool)in_NG) {
    (**(code **)(in_r12 + 0xc55))();
    return;
  }
  if (!(bool)in_OV) {
    unaff_r11 = (undefined4)
                (((ulonglong)unaff_pc << 0x20) - (longlong)unaff_r6 * (longlong)unaff_lr >> 0x20);
  }
  if ((bool)in_OV != true) {
    func_0x0a952dd6();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_load(0xd,in_cr3,unaff_r11);
  }
  if (in_NG == in_OV) {
    *(undefined8 *)(unaff_r7 + 0x334) = in_d18;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

