
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e1654e(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_OV;
  
  if (!in_OV) {
    *(undefined4 *)(unaff_r7 + (param_3 >> 0xb)) = unaff_r11;
  }
  if ((bool)in_NG != in_OV) {
    *unaff_r4 = param_1;
    unaff_r4[1] = param_2;
    unaff_r4[2] = param_3;
    unaff_r4[3] = unaff_r4;
    unaff_r4[4] = unaff_r5;
    unaff_r4[5] = unaff_r6;
    unaff_r4[6] = unaff_r8;
    unaff_r4[7] = in_r12;
    unaff_r4[8] = unaff_lr;
    unaff_r4[9] = 0x8e1655a;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

