
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df9f92(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,uint *param_4)

{
  uint unaff_r4;
  undefined4 unaff_r5;
  undefined1 *unaff_r6;
  undefined1 *puVar1;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined4 *unaff_r10;
  undefined4 *puVar2;
  uint unaff_r11;
  undefined4 unaff_lr;
  undefined1 in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar3;
  undefined4 in_cr10;
  undefined4 in_cr13;
  
  bVar3 = false;
  if (in_ZR) {
    puVar1 = (undefined1 *)((uint)unaff_r6 >> 10);
    in_CY = unaff_r6 <= puVar1;
    in_OV = SBORROW4((int)puVar1,(int)unaff_r6);
    unaff_r11 = (int)puVar1 - (int)unaff_r6;
    in_NG = (int)unaff_r11 < 0;
    bVar3 = unaff_r11 == 0;
  }
  if ((bool)in_CY && !bVar3) {
    unaff_r11 = (unaff_r4 >> 0x10) << 0x18 | (unaff_r4 >> 0x18) << 0x10 | (unaff_r4 & 0xff) << 8 |
                unaff_r4 >> 8 & 0xff;
  }
  if (in_NG == in_OV) {
    software_interrupt(0xd6b000);
    coprocessor_storelong(0xe,in_cr10,unaff_r6 + 0x358);
  }
  puVar2 = unaff_r10;
  if (!(bool)in_CY || bVar3) {
    param_1 = (undefined4 *)SignedSaturate((int)unaff_r6 << 1,0xd);
    SignedDoesSaturate((int)unaff_r6 << 1,0xd);
    puVar2 = (undefined4 *)((int)unaff_r10 + (unaff_r11 >> 0xd));
    *unaff_r10 = unaff_r6;
  }
  puVar1 = unaff_r6;
  if (in_NG == in_OV) {
    *param_1 = 0x8df9fb6;
    param_1[-1] = unaff_lr;
    param_1[-2] = register0x00000054;
    param_1[-3] = puVar2;
    param_1[-4] = unaff_r9;
    param_1[-5] = unaff_r7;
    param_1[-6] = unaff_r5;
    param_1[-7] = param_4;
    param_1[-8] = param_1;
    puVar1 = (undefined1 *)((int)unaff_r6 * 0x8001);
    *unaff_r6 = (char)puVar2;
  }
  *param_4 = unaff_r11;
  if (!(bool)in_NG) {
    *param_2 = unaff_lr;
  }
  if (bVar3 || in_NG != in_OV) {
    software_interrupt(0x56a000);
    coprocessor_store(0xe,in_cr13,puVar1 + -0x18);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

