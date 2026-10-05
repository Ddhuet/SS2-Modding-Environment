
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f78aac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr15;
  undefined4 extraout_s0;
  undefined4 uVar1;
  undefined8 in_d0;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  undefined8 in_d1;
  undefined4 extraout_s3;
  undefined4 extraout_s3_00;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(5,in_cr11,in_r12);
    coprocessor_storelong(0,in_cr5,in_r12);
    coprocessor_load(0,in_cr0,unaff_r5);
    unaff_lr = 0x8f78abc;
    param_1 = func_0x0a378ac0();
    in_d1 = CONCAT44(extraout_s3,extraout_s2);
    in_d0 = CONCAT44(extraout_s1,extraout_s0);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG == in_OV) {
    *(undefined4 *)param_1 = param_1;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
  }
  if (!(bool)in_NG) {
    unaff_r5 = (uint)*(byte *)(unaff_r5 - 0x555);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
  }
  if (!(bool)in_NG) {
    unaff_r5 = (uint)*(byte *)(unaff_r5 - 0x555);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
  }
  if (!(bool)in_NG) {
    unaff_r5 = (uint)*(byte *)(unaff_r5 - 0x555);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
  }
  if (!(bool)in_NG) {
    unaff_r5 = (uint)*(byte *)(unaff_r5 - 0x555);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
  }
  if (!(bool)in_NG) {
    unaff_r5 = (uint)*(byte *)(unaff_r5 - 0x555);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *unaff_r11 = param_3;
    unaff_r11[1] = param_4;
    unaff_r11[2] = unaff_r6;
    unaff_r11[3] = unaff_r7;
    unaff_r11[4] = unaff_r10;
    unaff_r11[5] = unaff_r11;
    unaff_r11[6] = in_r12;
    unaff_r11[7] = register0x00000054;
    unaff_r11[8] = 0x8f78b78;
    unaff_r11[9] = param_3;
    unaff_r11[10] = param_4;
    unaff_r11[0xb] = unaff_r6;
    unaff_r11[0xc] = unaff_r7;
    unaff_r11[0xd] = unaff_r10;
    unaff_r11[0xe] = unaff_r11 + 9;
    unaff_r11[0xf] = in_r12;
    unaff_r11[0x10] = register0x00000054;
    unaff_r11[0x11] = 0x8f78b7c;
    unaff_r11 = unaff_r11 + 0x12;
  }
  if (in_NG == in_OV) {
    *unaff_r11 = param_3;
    unaff_r11[1] = param_4;
    unaff_r11[2] = unaff_r6;
    unaff_r11[3] = unaff_r7;
    unaff_r11[4] = unaff_r10;
    unaff_r11[5] = unaff_r11;
    unaff_r11[6] = unaff_lr;
    unaff_r11[7] = 0x8f78b80;
    unaff_r11 = unaff_r11 + 8;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    if ((bool)in_OV) {
      unaff_r5 = (uint)*(byte *)(unaff_r5 - 0x555);
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      unaff_lr = 0x8f78d8c;
      uVar1 = func_0x082a7838(param_1);
      in_d1 = CONCAT44(extraout_s3_00,extraout_s2_00);
      in_d0 = CONCAT44(extraout_s1_00,uVar1);
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      VectorDotProduct(in_d1,in_d0);
      coprocessor_loadlong2(0xe,in_cr15,unaff_lr + 0x3fc);
      coprocessor_function2(0xc,0xf,0,in_cr15,in_cr15,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      coprocessor_storelong(10,in_cr10,unaff_r10);
      func_0x0ad23848();
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_NG == in_OV) {
      coprocessor_store(8,in_cr6,unaff_r5);
    }
    if (!(bool)in_NG) {
      func_0x07d46788();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_r12 = param_3;
  in_r12[1] = param_4;
  in_r12[2] = unaff_r6;
  in_r12[3] = unaff_r7;
  in_r12[4] = unaff_r10;
  in_r12[5] = unaff_r11;
  in_r12[6] = unaff_lr;
  in_r12[7] = 0x8f78b84;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

