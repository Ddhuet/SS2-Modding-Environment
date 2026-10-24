
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_088cf034(undefined4 param_1,undefined4 param_2)

{
  int unaff_r7;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  int in_r12;
  int unaff_lr;
  int iVar1;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined4 unaff_s18;
  undefined4 unaff_s19;
  undefined4 unaff_s20;
  undefined4 unaff_s21;
  undefined4 unaff_s22;
  undefined4 unaff_s23;
  undefined4 unaff_s24;
  undefined4 unaff_s25;
  undefined4 unaff_s26;
  undefined4 unaff_s27;
  
  if (in_NG != in_OV) {
    return CONCAT44(param_2,param_1);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xf,in_cr13,&stack0x000003fc);
  }
  else {
    coprocessor_loadlong(7,in_cr10,&stack0x00000000);
    coprocessor_loadlong(0xc,in_cr9,in_r12 + 0x3b8);
    coprocessor_moveto(0xf,7,7,unaff_pc,in_cr14,in_cr15);
    *unaff_r9 = unaff_s18;
    unaff_r9[1] = unaff_s19;
    unaff_r9[2] = unaff_s20;
    unaff_r9[3] = unaff_s21;
    unaff_r9[4] = unaff_s22;
    unaff_r9[5] = unaff_s23;
    unaff_r9[6] = unaff_s24;
    unaff_r9[7] = unaff_s25;
    unaff_r9[8] = unaff_s26;
    unaff_r9[9] = unaff_s27;
  }
  if (in_NG != in_OV) {
    if (in_ZR || in_NG != in_OV) {
      if (in_ZR || in_NG != in_OV) {
        coprocessor_loadlong(0xe,in_cr15,unaff_lr + 0x370);
        iVar1 = unaff_lr + 0x3b4;
        coprocessor_storelong(0xf,in_cr14,unaff_lr);
      }
      else {
        coprocessor_loadlong(0xe,in_cr14,unaff_lr);
        iVar1 = unaff_lr;
      }
      coprocessor_storelong(0xd,in_cr13,iVar1);
      coprocessor_storelong(0xd,in_cr13,0x88cf394);
      if (!in_CY || in_ZR) {
        coprocessor_store(9,in_cr9,unaff_r10);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return *(undefined8 *)(in_r12 + 4);
  }
  return *(undefined8 *)(unaff_r7 + -0x28);
}

