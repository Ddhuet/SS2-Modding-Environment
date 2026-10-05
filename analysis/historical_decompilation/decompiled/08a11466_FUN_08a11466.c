
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a11466(undefined1 param_1,uint param_2,uint *param_3)

{
  uint extraout_r1;
  uint *extraout_r2;
  uint *unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r9;
  uint unaff_r11;
  uint in_r12;
  uint extraout_r12;
  uint unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  byte bVar1;
  undefined4 in_cr11;
  
  if ((bool)in_OV) {
    unaff_r5 = unaff_r5 - 0x194;
    coprocessor_storelong(5,in_cr11,unaff_r5);
  }
  if ((bool)in_CY) {
    unaff_r5 = unaff_r5 ^ 0x6600000;
  }
  if (in_NG == in_OV) {
    unaff_r6 = (uint)param_3 ^ 0x3740;
    in_r12 = (uint)param_3 ^ 0x20000002;
  }
  if ((bool)in_CY) {
    param_3 = (uint *)((uint)param_3 ^ 0xaa000);
    unaff_r11 = (param_2 ^ 0xaa000) + 0x28801;
  }
  if (in_NG != in_OV) {
    unaff_r4 = (uint *)((uint)param_3 ^ 0xa2000);
  }
  if (!(bool)in_NG) {
    unaff_lr = 0x8a1148a;
    param_1 = func_0x078faa26();
    param_2 = extraout_r1;
    param_3 = extraout_r2;
    in_r12 = extraout_r12;
  }
  if ((bool)in_NG) {
    *param_3 = unaff_r6;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = in_CY;
  if ((bool)in_ZR || in_NG != in_OV) {
    bVar1 = 0xfff55fff < unaff_r11 || CARRY4(unaff_r11 + 0xaa000,(uint)in_CY);
    in_OV = SCARRY4(unaff_r11,0xaa000) != SCARRY4(unaff_r11 + 0xaa000,(uint)in_CY);
    unaff_r11 = unaff_r11 + 0xaa000 + (uint)in_CY;
    in_NG = (int)unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if ((bool)bVar1) {
    *unaff_r4 = param_2;
    unaff_r4[1] = unaff_r5;
    unaff_r4[2] = unaff_r9;
    unaff_r4[3] = unaff_r11;
    unaff_r4[4] = in_r12;
    unaff_r4[5] = (uint)register0x00000054;
    unaff_r4[6] = unaff_lr;
    unaff_r4[7] = 0x8a114a6;
  }
  if ((bool)in_NG) {
    *(undefined1 *)unaff_r4 = param_1;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_NG) {
    func_0x078fbf6a();
  }
  if (in_NG != in_OV) {
    func_0x089fe5d6();
  }
  if ((bool)in_ZR) {
    software_interrupt(0x44fbbb);
    software_interrupt(0x2a0000);
  }
  func_0x092914d2();
  func_0x09a914d6();
  if (in_NG != in_OV) {
    func_0x09c914da();
  }
  func_0x0771151c();
  if ((bool)in_ZR) {
    software_interrupt(0xbb0000);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

