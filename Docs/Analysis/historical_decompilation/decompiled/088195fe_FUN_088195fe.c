
/* WARNING: Control flow encountered bad instruction data */

void FUN_088195fe(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5)

{
  undefined4 *unaff_r4;
  undefined4 *puVar1;
  undefined1 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined1 *in_r12;
  undefined1 *puVar2;
  undefined1 *extraout_r12;
  undefined1 *extraout_r12_00;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr13;
  
  if (!in_CY || (bool)in_ZR) {
    unaff_r11 = *(int *)(unaff_r11 + 0x5b5);
  }
  if ((bool)in_NG) {
    unaff_r4 = (undefined4 *)*unaff_r4;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(4,in_cr4,&stack0x00000110);
  }
  if ((bool)in_OV) {
    in_r12 = in_r12 + -0x1b4;
    coprocessor_storelong(0xd,in_cr13,in_r12);
  }
  puVar2 = in_r12;
  if (!(bool)in_ZR && in_NG == in_OV) {
    *unaff_r6 = param_1;
    unaff_r6[1] = param_3;
    unaff_r6[2] = param_4;
    unaff_r6[3] = unaff_r4;
    unaff_r6[4] = unaff_r6;
    unaff_r6[5] = unaff_r7;
    unaff_r6[6] = unaff_r10;
    unaff_r6[7] = unaff_r11;
    unaff_r6[8] = in_r12;
    unaff_r6[9] = unaff_lr;
    unaff_r6[10] = 0x8819616;
    puVar2 = in_r12 + ((int)unaff_r6 >> 0xd);
    *in_r12 = (char)puVar2;
  }
  if ((bool)in_OV) {
    func_0x0a30b14e();
    puVar2 = extraout_r12;
  }
  if (in_NG != in_OV) {
    func_0x076f43ce();
    puVar2 = extraout_r12_00;
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
    puVar3 = puVar2;
  }
  else {
    puVar3 = puVar2 + ((uint)&param_5 >> 0x1a | (int)&param_5 << 6);
    *puVar2 = 0;
  }
  if ((bool)in_OV) {
    coprocessor_storelong(0xd,in_cr6,puVar3);
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

