
/* WARNING: Control flow encountered bad instruction data */

void FUN_085fe462(uint param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_NG) {
    *(short *)(param_1 + 0x57) = (short)unaff_r11;
  }
  puVar1 = param_2;
  if (!in_ZR && in_NG == (bool)in_OV) {
    param_1 = param_1 & 0x40000030;
    puVar1 = (undefined4 *)((int)param_2 + -0x301);
    *param_2 = in_r12;
  }
  if (in_CY && !in_ZR) {
    puVar1 = (undefined4 *)((int)puVar1 + -0x51);
  }
  if (in_ZR) {
    param_1 = unaff_r6 & ~(unaff_r11 >> 3);
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    *puVar1 = unaff_r10;
    puVar1[-1] = unaff_r9;
    puVar1[-2] = unaff_r8;
    puVar1[-3] = unaff_r7;
    puVar1[-4] = unaff_r6;
    puVar1[-5] = param_3;
    puVar1[-6] = puVar1;
    puVar1[-7] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

