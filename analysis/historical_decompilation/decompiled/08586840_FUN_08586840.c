
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08586840(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r11;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int unaff_lr;
  undefined4 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_moveto(5,7,0,unaff_r11,in_cr14,in_cr1);
    coprocessor_storelong(4,in_cr8,unaff_r9 + 0x44);
  }
  coprocessor_load(3,in_cr6,unaff_r8);
  if (in_NG != in_OV) {
    unaff_lr = 0x8586850;
    param_1 = func_0x07312c98();
    param_3 = extraout_r2;
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    *(undefined4 *)(unaff_r4 + 4) = param_1;
    *(undefined4 *)(unaff_r4 + 8) = param_3;
    *(int *)(unaff_r4 + 0xc) = unaff_r4;
    *(undefined4 *)(unaff_r4 + 0x10) = unaff_r5;
    *(undefined4 *)(unaff_r4 + 0x14) = unaff_r8;
    *(int *)(unaff_r4 + 0x18) = in_r12;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xe,in_cr14,&stack0x00000378);
    coprocessor_loadlong(0xd,in_cr13,in_r12 + 0x378);
    coprocessor_storelong(0xd,in_cr13,unaff_lr + 0x3b8);
    coprocessor_loadlong(0xd,in_cr13,&stack0x000003b4);
    coprocessor_storelong(0xd,in_cr14,&stack0x00000374);
    coprocessor_storelong(0xe,in_cr14,unaff_lr + 0x76c);
    coprocessor_storelong(0xc,in_cr14,&stack0x00000724);
    coprocessor_loadlong(0xc,in_cr13,in_r12);
    coprocessor_loadlong(0xd,in_cr13,unaff_lr + 0xae0);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x000006a8);
    unaff_lr = unaff_lr + 0x76c;
  }
  else {
    coprocessor_loadlong(0xd,in_cr12,in_r12);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000378);
    coprocessor_storelong(0xe,in_cr13,in_r12 + 0x374);
  }
  if (in_NG != in_OV) {
    if ((bool)in_ZR || in_NG != in_OV) {
      coproc_moveto_Peripheral_System(unaff_pc,7,in_cr15,7);
    }
    else {
      coprocessor_storelong(0xf,in_cr14,unaff_lr + 0x3fc);
      unaff_lr = unaff_lr + 0x7f8;
      coprocessor_storelong(0xe,in_cr14,unaff_lr);
    }
    if (in_NG == in_OV) {
      func_0x07902468();
      in_r12 = extraout_r12_00;
    }
    else {
      coprocessor_storelong(0xe,in_cr14,unaff_lr);
    }
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return *(undefined8 *)(in_r12 + 4);
  }
  coprocessor_storelong(0xc,in_cr12,in_r12);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

