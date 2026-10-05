
/* WARNING: Control flow encountered bad instruction data */

void FUN_088195de(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 *unaff_r4;
  undefined4 *puVar1;
  undefined1 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r10;
  undefined1 *unaff_r11;
  undefined1 *in_r12;
  undefined1 *extraout_r12;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *extraout_r12_00;
  undefined1 *puVar4;
  undefined1 *extraout_r12_01;
  undefined1 *extraout_r12_02;
  code *unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    unaff_r11 = *(undefined1 **)(unaff_r11 + 0x5bb);
  }
  if ((bool)in_NG) {
    unaff_lr = (code *)0x88195e6;
    param_1 = func_0x07548316();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(4,in_cr11,&stack0x0000026c);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
  puVar2 = in_r12;
  if ((bool)in_OV) {
    puVar2 = in_r12 + -0x374;
    coprocessor_storelong(0xc,in_cr13,in_r12);
  }
  puVar3 = puVar2;
  if (!(bool)in_ZR && in_NG == in_OV) {
    puVar3 = puVar2 + -0x330;
    coprocessor_storelong(6,in_cr12,puVar2);
  }
  puVar2 = unaff_r11;
  if (!(bool)in_ZR && in_NG == in_OV) {
    puVar2 = unaff_r11 + ((int)unaff_r6 >> 0xd);
    *unaff_r11 = (char)puVar3;
  }
  if (in_NG != in_OV) {
    unaff_lr = FUN_088195fe;
    param_1 = func_0x075884ee();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    puVar3 = extraout_r12_00;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    puVar2 = *(undefined1 **)(puVar2 + 0x5b5);
  }
  if ((bool)in_NG) {
    unaff_r4 = (undefined4 *)*unaff_r4;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(4,in_cr4,&stack0x00000110);
  }
  if ((bool)in_OV) {
    puVar3 = puVar3 + -0x1b4;
    coprocessor_storelong(0xd,in_cr13,puVar3);
  }
  puVar4 = puVar3;
  if (!(bool)in_ZR && in_NG == in_OV) {
    *unaff_r6 = param_1;
    unaff_r6[1] = param_3;
    unaff_r6[2] = param_4;
    unaff_r6[3] = unaff_r4;
    unaff_r6[4] = unaff_r6;
    unaff_r6[5] = unaff_r7;
    unaff_r6[6] = unaff_r10;
    unaff_r6[7] = puVar2;
    unaff_r6[8] = puVar3;
    unaff_r6[9] = unaff_lr;
    unaff_r6[10] = 0x8819616;
    puVar4 = puVar3 + ((int)unaff_r6 >> 0xd);
    *puVar3 = (char)puVar4;
  }
  if ((bool)in_OV) {
    func_0x0a30b14e();
    puVar4 = extraout_r12_01;
  }
  if (in_NG != in_OV) {
    func_0x076f43ce();
    puVar4 = extraout_r12_02;
  }
  puVar1 = unaff_r4;
  if ((bool)in_NG) {
    puVar1 = unaff_r4 + -0x12d;
    *(char *)unaff_r4 = (char)puVar1;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)(&param_5 + ((int)puVar1 >> 8));
    puVar1 = (undefined4 *)(uint)param_5;
    coprocessor_loadlong(0xd,in_cr13,unaff_r6 + 0xdd);
    puVar2 = puVar4;
  }
  else {
    puVar2 = puVar4 + ((uint)&param_5 >> 0x1a | (int)&param_5 << 6);
    *puVar4 = 0;
  }
  if ((bool)in_OV) {
    coprocessor_storelong(0xd,in_cr6,puVar2);
  }
  if (in_NG != in_OV) {
    func_0x0770c7ee();
  }
  if ((bool)in_NG) {
    *(undefined1 *)puVar1 = unaff_r5;
    *(char *)(puVar1 + -0x155) = (char)(puVar1 + -0x155) + -0x54;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(4,in_cr4,(undefined1 *)((int)register0x00000054 + 0x110));
    coprocessor_loadlong(0xd,in_cr13,(undefined1 *)((int)register0x00000054 + 0x374));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

