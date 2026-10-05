
/* WARNING: Control flow encountered bad instruction data */

void FUN_086fae18(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  uint *unaff_r10;
  uint *puVar1;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr10;
  
  if (in_ZR) {
    unaff_r11 = unaff_r6 - ((unaff_r6 >> 0xb | unaff_r6 << 0x15) + (uint)!in_CY);
  }
  if (in_OV) {
    unaff_r10 = (uint *)((unaff_r4 >> 0x10) << 0x18 | (unaff_r4 >> 0x18) << 0x10 |
                         (unaff_r4 & 0xff) << 8 | unaff_r4 >> 8 & 0xff);
  }
  if (!in_NG) {
    unaff_r5 = (param_3 >> 0x10) << 0x18 | (param_3 >> 0x18) << 0x10 | (param_3 & 0xff) << 8 |
               param_3 >> 8 & 0xff;
  }
  if (in_NG == in_OV) {
    software_interrupt(0x56b000);
    coprocessor_loadlong(0xe,in_cr10,unaff_r6 - 0x158);
  }
  puVar1 = unaff_r10;
  if (!in_NG) {
    param_1 = (undefined4 *)SignedSaturate((int)unaff_r6 >> 0x20,0xd);
    SignedDoesSaturate((int)unaff_r6 >> 0x20,0xd);
    puVar1 = (uint *)((int)unaff_r10 + (unaff_r11 >> 0xd));
    *unaff_r10 = unaff_r5;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = unaff_lr;
  param_1[-1] = in_r12;
  param_1[-2] = puVar1;
  param_1[-3] = unaff_r9;
  param_1[-4] = unaff_r7;
  param_1[-5] = unaff_r5;
  param_1[-6] = param_4;
  param_1[-7] = param_1;
  return;
}

