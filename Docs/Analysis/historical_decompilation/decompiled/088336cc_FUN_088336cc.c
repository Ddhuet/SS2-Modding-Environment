
/* WARNING: Control flow encountered bad instruction data */

void FUN_088336cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined8 *unaff_r8;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined1 *puVar1;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    uVar2 = func_0x07720c20();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  puVar1 = (undefined1 *)register0x00000054;
  if (in_NG != in_OV) {
    puVar1 = &stack0x000001d4;
    coprocessor_load(2,in_cr7,&stack0x00000000);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    uVar2 = func_0x07f94d38();
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(9,in_cr11,in_r12);
    coprocessor_storelong(8,in_cr11,in_r12);
    coprocessor_loadlong(0xc,in_cr12,in_r12);
    coprocessor_loadlong(0xc,in_cr12,puVar1 + 0x32c);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if (in_NG != in_OV) {
      func_0x077225e4();
    }
    if (in_NG != in_OV) {
      func_0x077a2df0();
    }
    if (in_NG != in_OV) {
      unaff_r11 = unaff_r11 + 0x370;
      coprocessor_load(0xc,in_cr12,unaff_r11);
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_loadlong(0xd,in_cr13,puVar1 + 0x334);
      coprocessor_loadlong(0xd,in_cr13,puVar1 + 0x374);
      coprocessor_loadlong(0xd,in_cr13,puVar1 + 0x374);
    }
    if (in_NG != in_OV) {
      func_0x07715930();
    }
    if (in_NG != in_OV) {
      func_0x07721934();
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_load(0xb,in_cr11,unaff_r11 + 0x2ec);
    }
    coprocessor_loadlong2(0xd,in_cr13,puVar1 + 0x374);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r8 = uVar2;
  *(undefined4 *)(unaff_r8 + 1) = param_4;
  *(undefined4 *)((int)unaff_r8 + 0xc) = unaff_r4;
  *(undefined4 *)(unaff_r8 + 2) = unaff_r5;
  *(undefined4 *)((int)unaff_r8 + 0x14) = unaff_r7;
  *(undefined8 **)(unaff_r8 + 3) = unaff_r8;
  *(int *)((int)unaff_r8 + 0x1c) = unaff_r11;
  *(undefined4 *)(unaff_r8 + 4) = 0x88336f0;
  return;
}

