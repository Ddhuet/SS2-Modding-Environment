
/* WARNING: Control flow encountered bad instruction data */

void FUN_08aad9ac(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  uint unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_CY && !in_ZR) {
    param_2 = (undefined4 *)((int)param_2 + (unaff_r9 >> 0xb));
    *param_2 = unaff_r11;
    *param_2 = param_1;
    param_2[1] = param_2;
    param_2[2] = param_4;
    param_2[3] = unaff_r4;
    param_2[4] = unaff_r5;
    param_2[5] = unaff_r7;
    param_2[6] = unaff_r8;
    param_2[7] = unaff_r9;
    param_2[8] = unaff_r11;
    param_2[9] = in_r12;
    param_2[10] = unaff_lr;
    param_2 = param_2 + 0xb;
  }
  if (in_NG == in_OV) {
    param_4 = *(undefined4 *)(unaff_r4 + 8);
    unaff_r7 = *(undefined4 *)(unaff_r4 + 0x10);
    unaff_r9 = *(uint *)(unaff_r4 + 0x18);
    in_r12 = *(undefined4 *)(unaff_r4 + 0x20);
  }
  if (in_CY && !in_ZR) {
    *param_2 = param_4;
    param_2[1] = unaff_r4;
    param_2[2] = unaff_r7;
    param_2[3] = unaff_r10;
    param_2[4] = in_r12;
    *(undefined4 **)((int)param_2 + (unaff_r9 >> 0x17)) = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

