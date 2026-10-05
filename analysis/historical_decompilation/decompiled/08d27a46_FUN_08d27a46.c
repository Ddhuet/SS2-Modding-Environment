
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08d27a46(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int *unaff_r4;
  int *piVar1;
  undefined1 *unaff_r5;
  uint unaff_r7;
  int unaff_r8;
  uint unaff_r9;
  uint unaff_r10;
  uint unaff_r11;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  undefined4 *extraout_r12_00;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 unaff_s21;
  undefined4 unaff_s22;
  undefined4 unaff_s23;
  undefined4 unaff_s24;
  undefined4 unaff_s25;
  undefined4 unaff_s26;
  undefined4 unaff_s27;
  undefined4 unaff_s28;
  
  if ((bool)in_ZR) {
    unaff_r11 = param_1 & param_1 << ((uint)unaff_r5 & 0xff);
    unaff_r10 = param_1 & param_1 << (unaff_r7 & 0xff);
  }
  else {
    param_1 = (int)(short)param_1 * (int)(short)((uint)unaff_r8 >> 0x10) + unaff_r9;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    unaff_r7 = *(uint *)(param_2 - (param_2 >> 0x13));
  }
  if (in_NG != in_OV) {
    func_0x0738e882(param_1);
    param_2 = extraout_r1;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *in_r12 = unaff_s21;
    in_r12[1] = unaff_s22;
    in_r12[2] = unaff_s23;
    in_r12[3] = unaff_s24;
    in_r12[4] = unaff_s25;
    in_r12[5] = unaff_s26;
    in_r12[6] = unaff_s27;
    in_r12[7] = unaff_s28;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar1 = unaff_r4;
  if ((bool)in_OV) {
    piVar1 = unaff_r4 + -0x333;
    in_r12 = (undefined4 *)*unaff_r4;
    *unaff_r5 = (char)param_2;
    unaff_r9 = (uint)*(byte *)(unaff_r8 + -0xac6);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x077921a6();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *(undefined4 *)(unaff_r7 + 4) = param_3;
    *(undefined4 *)(unaff_r7 + 8) = param_4;
    *(int **)(unaff_r7 + 0xc) = piVar1;
    *(uint *)(unaff_r7 + 0x10) = unaff_r7;
    *(uint *)(unaff_r7 + 0x14) = unaff_r9;
    *(uint *)(unaff_r7 + 0x18) = unaff_r11;
    *(undefined4 **)(unaff_r7 + 0x1c) = in_r12;
    *(BADSPACEBASE **)(unaff_r7 + 0x20) = register0x00000054;
    *(undefined4 *)(unaff_r7 + 0x24) = 0x8d27a7a;
  }
  if (in_NG != in_OV) {
    if (!(bool)in_ZR && in_NG == in_OV) {
      coprocessor_load(0xc,in_cr11,unaff_r10);
    }
    if (in_NG != in_OV) {
      coprocessor_storelong(0xc,in_cr12,in_r12 + 0xcc);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined4 *)(unaff_r9 + 4);
}

