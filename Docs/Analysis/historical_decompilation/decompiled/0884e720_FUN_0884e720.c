
/* WARNING: Control flow encountered bad instruction data */

void FUN_0884e720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char extraout_r2;
  char extraout_r2_00;
  char cVar1;
  char *unaff_r4;
  char *pcVar2;
  int unaff_r5;
  undefined4 unaff_r6;
  byte *unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  undefined8 *in_r12;
  undefined8 *extraout_r12;
  undefined8 *extraout_r12_00;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr8;
  undefined4 uVar3;
  undefined8 in_d0;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  undefined8 in_d1;
  undefined4 extraout_s3;
  undefined4 extraout_s3_00;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined8 in_d30;
  undefined8 in_d31;
  
  if ((bool)in_CY && !in_ZR) {
    *unaff_r11 = param_3;
    unaff_r11[1] = unaff_r6;
    unaff_r11[2] = unaff_r8;
    unaff_r11[3] = unaff_r10;
    unaff_r11[4] = in_r12;
    unaff_r11[5] = register0x00000054;
    unaff_r11[6] = 0x884e728;
  }
  if (!(bool)in_OV) {
    in_r12 = *(undefined8 **)(unaff_r7 + -4);
    param_3 = *(undefined4 *)(unaff_r7 + -0x10);
    param_1 = *(undefined4 *)(unaff_r7 + -0x14);
    unaff_r7 = unaff_r7 + -0x18;
  }
  cVar1 = (char)param_3;
  if (!in_ZR && in_NG == in_OV) {
    uVar3 = func_0x06f3c840(param_1);
    in_d1 = CONCAT44(extraout_s3,extraout_s2);
    in_d0 = CONCAT44(extraout_s1,uVar3);
    in_r12 = extraout_r12;
    cVar1 = extraout_r2;
  }
  if (in_NG != in_OV) {
    uVar3 = func_0x0699f444();
    in_d1 = CONCAT44(extraout_s3_00,extraout_s2_00);
    in_d0 = CONCAT44(extraout_s1_00,uVar3);
    in_r12 = extraout_r12_00;
    cVar1 = extraout_r2_00;
  }
  if ((bool)in_NG) {
    unaff_r4 = (char *)(uint)(byte)unaff_r4[-((int)unaff_r4 >> 8)];
  }
  if ((bool)in_CY) {
    *unaff_r4 = (char)(unaff_r4 + -0x444);
    unaff_r4 = (char *)((uint)(unaff_r4 + -0x444) ^ 0x2100000);
  }
  if ((bool)in_NG) {
    unaff_r11 = (undefined4 *)(uint)*unaff_r7;
    unaff_r7[-3000] = (byte)unaff_r8;
    *unaff_r4 = (char)(unaff_r4 + -0x777);
    unaff_r4 = unaff_r4 + -0x777;
  }
  else {
    *in_r12 = in_d28;
    in_r12[1] = in_d29;
    in_r12[2] = in_d30;
    in_r12[3] = in_d31;
    in_r12[4] = in_d0;
    in_r12[5] = in_d1;
  }
  if (!(bool)in_OV) {
    coprocessor_storelong(4,in_cr8,unaff_r11);
  }
  if (in_NG != in_OV) {
    unaff_r4 = (char *)(uint)*(byte *)(unaff_r5 - ((int)unaff_r4 >> 8));
  }
  pcVar2 = unaff_r4;
  if ((bool)in_NG) {
    pcVar2 = unaff_r4 + -0x222;
    *unaff_r4 = cVar1;
  }
  if ((bool)in_CY) {
    *pcVar2 = (char)pcVar2 + -0x44;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

