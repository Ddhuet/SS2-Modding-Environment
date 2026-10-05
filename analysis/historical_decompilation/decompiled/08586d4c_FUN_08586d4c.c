
/* WARNING: Control flow encountered bad instruction data */

void FUN_08586d4c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r9;
  undefined1 *unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  
  if (in_NG != in_OV) {
    *unaff_r8 = param_9;
    unaff_r8[1] = unaff_r4;
    unaff_r8[2] = unaff_r8;
    unaff_r8[3] = unaff_r10;
    unaff_r8[4] = in_r12;
    unaff_r8[5] = register0x00000054;
    unaff_r8[6] = 0x8586d54;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *unaff_r11 = param_9;
    unaff_r11[1] = unaff_r4;
    unaff_r11[2] = unaff_r10;
    unaff_r11[3] = in_r12;
    unaff_r11[4] = register0x00000054;
    unaff_r11[5] = 0x8586d58;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_loadlong(0xe,in_cr13,&stack0x00000000);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000328);
    coprocessor_loadlong(9,in_cr8,in_r12);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_loadlong(0xe,in_cr14,&stack0x000003b8);
  coprocessor_loadlong(0xe,in_cr14,&stack0x000003b8);
  if ((bool)in_OV) {
    unaff_r10 = unaff_r10 + -0xcbc;
    *unaff_r10 = (char)in_r12;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    unaff_lr = 0x8586d7c;
    param_8 = func_0x07075cb4(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    param_11 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG == in_OV) {
    unaff_lr = 0x8586d80;
    param_8 = func_0x07435c74();
    param_11 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_NG != in_OV) {
      if (in_NG == in_OV) {
        coprocessor_store(9,in_cr10,unaff_r10 + 0x264);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (in_NG == in_OV) {
        unaff_lr = 0x8586db8;
        param_8 = func_0x07475864();
      }
      if (in_NG != in_OV) {
        unaff_lr = 0x8586dbc;
        param_8 = func_0x07072468();
      }
      if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (in_NG != in_OV) {
        unaff_lr = 0x8586dc4;
        param_8 = func_0x0743d870();
      }
      if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (in_NG != in_OV) {
        unaff_lr = 0x8586dcc;
        param_8 = func_0x0743dc78();
      }
      if (in_NG != in_OV) {
        unaff_lr = 0x8586dd0;
        param_8 = func_0x0707593c();
      }
      if (in_NG != in_OV) {
        unaff_lr = 0x8586dd4;
        param_8 = func_0x07471c8c();
      }
      coprocessor_storelong2(0xe,in_cr14,unaff_lr);
      iVar1 = unaff_lr + 0x3b8;
      if (!(bool)in_CY || (bool)in_ZR) {
        coprocessor_storelong(0xe,in_cr14,unaff_lr + 0x774);
        iVar1 = iRam08587d12;
      }
      iRam08587d12 = iVar1;
      func_0x07d429e0(param_8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_r10 + 4) = param_8;
  *(undefined4 *)(unaff_r10 + 8) = param_11;
  *(undefined4 *)(unaff_r10 + 0xc) = unaff_r4;
  *(undefined4 *)(unaff_r10 + 0x10) = unaff_r7;
  *(undefined4 **)(unaff_r10 + 0x14) = unaff_r8;
  *(undefined4 **)(unaff_r10 + 0x18) = unaff_r11;
  *(BADSPACEBASE **)(unaff_r10 + 0x1c) = register0x00000054;
  *(undefined4 *)(unaff_r10 + 0x20) = 0x8586d98;
  *(undefined4 *)(unaff_r9 + 4) = param_8;
  *(undefined4 *)(unaff_r9 + 8) = param_11;
  *(undefined4 *)(unaff_r9 + 0xc) = unaff_r4;
  *(undefined4 *)(unaff_r9 + 0x10) = unaff_r7;
  *(undefined4 **)(unaff_r9 + 0x14) = unaff_r8;
  *(undefined4 **)(unaff_r9 + 0x18) = unaff_r11;
  *(undefined4 *)(unaff_r9 + 0x1c) = in_r12;
  *(undefined4 *)(unaff_r9 + 0x20) = 0x8586d9c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

