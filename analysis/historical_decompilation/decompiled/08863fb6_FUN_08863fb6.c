
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08863fb6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  uint unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar1;
  
  if (in_CY && !in_ZR) {
    return unaff_r8[-8];
  }
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r5 = param_1;
  unaff_r5[1] = param_3;
  unaff_r5[2] = unaff_r4;
  unaff_r5[3] = unaff_r6;
  unaff_r5[4] = unaff_r8;
  unaff_r5[5] = unaff_r10;
  unaff_r5[6] = in_r12;
  unaff_r5[7] = unaff_lr;
  bVar1 = false;
  if (in_ZR) {
    in_CY = false;
    unaff_r8 = (undefined4 *)(unaff_r9 | 0x950000);
    in_NG = (int)unaff_r8 < 0;
    bVar1 = unaff_r8 == (undefined4 *)0x0;
  }
  if (!in_CY || bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY || bVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY || bVar1) {
    unaff_r8[1] = param_1;
    unaff_r8[2] = param_4;
    unaff_r8[3] = unaff_r5;
    unaff_r8[4] = unaff_r7;
    unaff_r8[5] = unaff_r9;
    unaff_r8[6] = unaff_r11;
    unaff_r8[7] = in_r12;
    unaff_r8[8] = 0x8863fde;
  }
  else {
    *unaff_r8 = param_2;
    unaff_r8[1] = param_4;
    unaff_r8[2] = unaff_r5;
    unaff_r8[3] = unaff_r7;
    unaff_r8[4] = unaff_r11;
    unaff_r8[5] = 0x8863fe6;
    *unaff_r5 = param_1;
    unaff_r5[1] = param_3;
    unaff_r5[2] = unaff_r7;
    unaff_r5[3] = unaff_r8;
    unaff_r5[4] = unaff_r11;
    unaff_r5[5] = register0x00000054;
    unaff_r5[6] = 0x8863fea;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

