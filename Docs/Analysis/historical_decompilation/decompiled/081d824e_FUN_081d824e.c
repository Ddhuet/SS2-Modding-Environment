
void FUN_081d824e(undefined4 param_1,undefined1 *param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 *unaff_r8;
  int unaff_r9;
  uint unaff_r11;
  undefined1 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined1 auStack_9c [156];
  
  puVar1 = param_2;
  if (in_ZR || in_NG != in_OV) {
    coprocessor_moveto(5,6,5,unaff_r11,in_cr8,in_cr1);
    coprocessor_function(0,0xd,7,in_cr14,in_cr9,in_cr2);
    puVar1 = param_2 + ((uint)param_2 >> 3 | (int)param_2 << 0x1d);
    *param_2 = unaff_lr;
  }
  if (!in_CY) {
    coprocessor_moveto(8,2,2,unaff_r5,in_cr15,in_cr7);
  }
  if (!in_ZR) {
    unaff_r8 = *(undefined4 **)(unaff_r9 + -0x10);
    param_4 = *(int *)(unaff_r9 + -0x18);
    puVar1 = *(undefined1 **)(unaff_r9 + -0x1c);
  }
  if (in_CY) {
    puVar1 = (undefined1 *)((uint)unaff_r8 ^ param_4 << (unaff_r11 & 0xff));
  }
  if (!in_ZR) {
    software_interrupt(0x152127);
  }
  coprocessor_function(5,0xf,0,in_cr15,in_cr3,in_cr10);
  if (!in_ZR) {
    param_1 = coprocessor_movefromRt(0xf,0,7,in_cr10,in_cr4);
  }
  if (in_CY) {
    param_1 = *unaff_r8;
  }
  if (in_ZR) {
    coprocessor_store(0xc,in_cr1,auStack_9c);
  }
                    /* WARNING: Could not recover jumptable at 0x081d827e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(0xb0 - (unaff_r6 + (uint)!in_CY)))(param_1,puVar1);
  return;
}

