
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c7f6ca(uint *param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r10;
  undefined4 unaff_r11;
  uint in_r12;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr9;
  
  puVar1 = param_1;
  if (!(bool)in_CY || (bool)in_ZR) {
    param_1[-1] = 0x8c7f6d2;
    param_1[-2] = (uint)register0x00000054;
    param_1[-3] = in_r12;
    param_1[-4] = unaff_r10;
    param_1[-5] = unaff_r8;
    param_1[-6] = unaff_r7;
    param_1[-7] = unaff_r6;
    param_1[-8] = unaff_r4;
    param_1[-9] = param_3;
    puVar1 = param_1 + -10;
    *puVar1 = (uint)param_1;
  }
  if (!(bool)in_NG) {
    unaff_r9 = (uint)puVar1 & 0x2d4000;
  }
  if (in_NG != in_OV) {
    unaff_r5 = (uint)puVar1 & 0x26c00000;
    puVar1 = (uint *)((int)puVar1 + -0xbbb);
    *puVar1 = unaff_r9;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    *(undefined4 *)((int)puVar1 + -0xbdd) = unaff_r11;
  }
  coprocessor_load2(0xb,in_cr9,&stack0x00000374);
  if (in_NG != in_OV) {
    func_0x0a36bef6();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0a37eb7a();
  }
  if (!(bool)in_NG) {
    func_0x072ff53e();
  }
  func_0x0a1ca680();
  coprocessor_load2(9,in_cr2,unaff_r5 + 0x37c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

