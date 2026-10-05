
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819eaf2(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  int unaff_r10;
  int unaff_r11;
  undefined4 *in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr14;
  
  if (in_CY && !in_ZR) {
    unaff_r11 = unaff_r10 + (param_2 >> 0xb | param_2 << 0x15);
  }
  puVar1 = param_4;
  if (!in_ZR && in_NG == in_OV) {
    puVar1 = param_4 + 0x262;
    unaff_r9 = *param_4;
  }
  if (in_NG != in_OV) {
    *in_r12 = param_1;
    in_r12[1] = param_3;
    in_r12[2] = puVar1;
    in_r12[3] = unaff_r4;
    in_r12[4] = unaff_r5;
    in_r12[5] = unaff_r7;
    in_r12[6] = unaff_r9;
    in_r12[7] = unaff_r10;
    in_r12[8] = unaff_r11;
    in_r12[9] = register0x00000054;
    in_r12[10] = 0x819eb02;
  }
  coprocessor_loadlong2(7,in_cr14,unaff_r10);
  coprocessor_storelong2(5,in_cr14,unaff_r10 + 0x6d0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

