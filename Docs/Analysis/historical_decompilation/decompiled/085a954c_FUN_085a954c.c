
/* WARNING: Control flow encountered bad instruction data */

void FUN_085a954c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19)

{
  int unaff_r9;
  int iVar1;
  undefined4 unaff_r10;
  undefined4 *in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr14;
  undefined4 unaff_s21;
  undefined4 unaff_s22;
  undefined4 unaff_s23;
  undefined4 unaff_s24;
  undefined4 unaff_s25;
  undefined4 unaff_s26;
  undefined4 unaff_s27;
  undefined4 unaff_s28;
  undefined4 unaff_s29;
  undefined4 unaff_s30;
  undefined4 unaff_s31;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,&stack0x000000c8);
    coprocessor_loadlong(5,in_cr11,&stack0x000000cc);
  }
  if (!in_CY || in_ZR) {
    iVar1 = *(int *)(unaff_r9 + 0x10);
    param_16 = *(undefined4 *)(iVar1 + 4);
    param_17 = *(undefined4 *)(iVar1 + 8);
    param_18 = *(undefined4 *)(iVar1 + 0xc);
    unaff_r9 = *(int *)(iVar1 + 0x14);
    unaff_r10 = *(undefined4 *)(iVar1 + 0x18);
    in_r12 = *(undefined4 **)(iVar1 + 0x1c);
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_load(7,in_cr9,unaff_r10);
    coprocessor_storelong(7,in_cr9,unaff_r9);
    *in_r12 = unaff_s21;
    in_r12[1] = unaff_s22;
    in_r12[2] = unaff_s23;
    in_r12[3] = unaff_s24;
    in_r12[4] = unaff_s25;
    in_r12[5] = unaff_s26;
    in_r12[6] = unaff_s27;
    in_r12[7] = unaff_s28;
    in_r12[8] = unaff_s29;
    in_r12[9] = unaff_s30;
    in_r12[10] = unaff_s31;
    in_r12[0xb] = param_1;
    in_r12[0xc] = param_2;
    in_r12[0xd] = param_3;
    in_r12[0xe] = param_4;
    in_r12[0xf] = param_5;
    in_r12[0x10] = param_6;
    in_r12[0x11] = param_7;
    in_r12[0x12] = param_8;
    in_r12[0x13] = param_9;
    in_r12[0x14] = param_10;
    in_r12[0x15] = param_11;
    in_r12[0x16] = param_12;
    in_r12[0x17] = param_13;
    in_r12[0x18] = param_14;
    in_r12[0x19] = param_15;
    *in_r12 = unaff_s25;
    in_r12[1] = unaff_s26;
    in_r12[2] = unaff_s27;
    in_r12[3] = unaff_s28;
    in_r12[4] = unaff_s29;
    in_r12[5] = unaff_s30;
    in_r12[6] = unaff_s31;
    in_r12[7] = param_1;
    in_r12[8] = param_2;
    in_r12[9] = param_3;
  }
  *in_r12 = unaff_s25;
  in_r12[1] = unaff_s26;
  in_r12[2] = unaff_s27;
  in_r12[3] = unaff_s28;
  in_r12[4] = unaff_s29;
  in_r12[5] = unaff_s30;
  in_r12[6] = unaff_s31;
  in_r12[7] = param_1;
  in_r12[8] = param_2;
  in_r12[9] = param_3;
  if ((bool)in_OV) {
    coprocessor_moveto(7,7,2,in_r12,in_cr14,in_cr5);
    coprocessor_moveto(9,7,2,in_r12,in_cr14,in_cr5);
    coprocessor_movefromRt(9,7,3,in_cr14,in_cr7);
  }
  if (in_NG == in_OV) {
    coprocessor_movefromRt(0xc,7,3,in_cr14,in_cr7);
    software_interrupt(0xffec99);
    software_interrupt(0xffecc9);
    software_interrupt(0xfffccc);
    software_interrupt(0xfffccc);
  }
  if (in_CY && !in_ZR) {
    if (in_NG != in_OV) {
      func_0x0740fcdc(param_16,param_17,param_18,param_19);
    }
    if (in_NG != in_OV) {
      func_0x074904e0();
    }
    func_0x074984e6();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

