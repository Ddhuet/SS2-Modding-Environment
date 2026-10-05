
/* WARNING: Control flow encountered bad instruction data */

undefined8
FUN_087c6248(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined8 *unaff_r7;
  undefined4 *unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  undefined4 *unaff_r11;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  undefined4 *extraout_r12_00;
  undefined4 *extraout_r12_01;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    return CONCAT44(*in_r12,param_1);
  }
  if (in_NG != in_OV) {
    if (in_NG == in_OV) {
      *(char *)((int)in_r12 + ((int)in_r12 >> 0x15)) = (char)unaff_r11;
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_storelong(0xd,in_cr13,&stack0x00000374);
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      return CONCAT44(param_2,unaff_r9[1]);
    }
    if (in_NG == in_OV) {
      in_r12[1] = param_1;
      in_r12[2] = param_3;
      in_r12[3] = param_4;
      in_r12[4] = unaff_r6;
      in_r12[5] = unaff_r7;
      in_r12[6] = unaff_r10;
      in_r12[7] = unaff_r11;
      in_r12[8] = unaff_lr;
      in_r12[9] = 0x87c626c;
    }
    if (!(bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!(bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!(bool)in_OV) {
      *in_r12 = param_2;
      in_r12[1] = param_3;
      in_r12[2] = unaff_r5;
      in_r12[3] = unaff_r6;
      in_r12[4] = unaff_r8;
      in_r12[5] = unaff_r11;
      in_r12[6] = in_r12;
      in_r12[7] = 0x87c6278;
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      param_5 = param_1;
      param_6 = param_2;
      param_7 = param_3;
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      if (in_NG != in_OV) {
        uVar2 = func_0x0726c8ec();
        param_4 = extraout_r3;
        in_r12 = extraout_r12;
      }
      if (!(bool)in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (in_NG == in_OV) {
        *unaff_r8 = param_4;
        unaff_r8[1] = unaff_r4;
        unaff_r8[2] = unaff_r5;
        unaff_r8[3] = unaff_r6;
        unaff_r8[4] = unaff_r11;
        unaff_r8[5] = 0x87c6290;
        *unaff_r8 = param_4;
        unaff_r8[1] = unaff_r7;
        unaff_r8[2] = unaff_r11;
        unaff_r8[3] = register0x00000054;
        unaff_r8[4] = 0x87c6294;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (in_NG != in_OV) {
        if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((bool)in_ZR || in_NG != in_OV) {
          coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
        }
        if (in_NG != in_OV) {
          uVar2 = func_0x076b5194();
          param_4 = extraout_r3_00;
          in_r12 = extraout_r12_00;
        }
        if (in_NG != in_OV) {
          uVar2 = func_0x076b5198();
          param_4 = extraout_r3_01;
          in_r12 = extraout_r12_01;
        }
        uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
        if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((bool)in_CY && !(bool)in_ZR) {
          *unaff_r8 = uVar1;
          unaff_r8[1] = param_4;
          unaff_r8[2] = unaff_r5;
          unaff_r8[3] = unaff_r7;
          unaff_r8[4] = unaff_r9;
          unaff_r8[5] = unaff_r11;
          unaff_r8[6] = 0x87c62b4;
          *unaff_r8 = uVar1;
          unaff_r8[1] = param_4;
          unaff_r8[2] = unaff_r5;
          unaff_r8[3] = unaff_r7;
          unaff_r8[4] = unaff_r9;
          unaff_r8[5] = unaff_r11;
          unaff_r8[6] = 0x87c62b8;
          *unaff_r8 = uVar1;
          unaff_r8[1] = param_4;
          unaff_r8[2] = unaff_r5;
          unaff_r8[3] = unaff_r7;
          unaff_r8[4] = unaff_r9;
          unaff_r8[5] = unaff_r11;
          unaff_r8[6] = 0x87c62bc;
          *unaff_r7 = uVar2;
          *(undefined4 *)(unaff_r7 + 1) = param_4;
          *(undefined4 *)((int)unaff_r7 + 0xc) = unaff_r5;
          *(undefined8 **)(unaff_r7 + 2) = unaff_r7;
          *(undefined4 **)((int)unaff_r7 + 0x14) = unaff_r11;
          *(undefined4 *)(unaff_r7 + 3) = 0x87c62c0;
        }
        if ((bool)in_ZR || in_NG != in_OV) {
          coprocessor_loadlong(0xd,in_cr13,&stack0x0000036c);
        }
        if (in_NG == in_OV) {
          *unaff_r9 = uVar1;
          unaff_r9[1] = param_4;
          unaff_r9[2] = unaff_r5;
          unaff_r9[3] = unaff_r7;
          unaff_r9[4] = unaff_r9;
          unaff_r9[5] = unaff_r11;
          unaff_r9[6] = in_r12;
          unaff_r9[7] = 0x87c62cc;
        }
        else {
          coprocessor_storelong(0xc,in_cr12,in_r12);
        }
        if ((bool)in_OV) {
          *(char *)in_r12 = (char)unaff_r8;
          *(char *)(in_r12 + unaff_r10 * -0x8000) = (char)unaff_r11;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return CONCAT44(*unaff_r11,param_1);
  }
  return CONCAT44(param_2,param_1);
}

