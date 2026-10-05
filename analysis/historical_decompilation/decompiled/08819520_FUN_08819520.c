
/* WARNING: Control flow encountered bad instruction data */

void FUN_08819520(void)

{
  undefined1 *unaff_r6;
  undefined1 *puVar1;
  undefined4 unaff_r8;
  undefined1 unaff_r10;
  undefined1 *in_r12;
  undefined1 *extraout_r12;
  undefined1 *extraout_r12_00;
  undefined1 *puVar2;
  undefined1 *extraout_r12_01;
  undefined1 *extraout_r12_02;
  undefined1 *puVar3;
  undefined1 *extraout_r12_03;
  undefined1 *extraout_r12_04;
  undefined1 *extraout_r12_05;
  undefined1 *extraout_r12_06;
  undefined1 *extraout_r12_07;
  undefined1 *extraout_r12_08;
  undefined1 *extraout_r12_09;
  undefined1 *extraout_r12_10;
  undefined1 *extraout_r12_11;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined1 auStack_374 [884];
  
  if (in_NG != in_OV) {
    func_0x09f06c14();
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    func_0x07708418();
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr12,&stack0x00000000);
    puVar2 = in_r12;
  }
  else {
    puVar2 = in_r12 + ((int)unaff_r6 >> 0xd);
    *in_r12 = unaff_r10;
    coprocessor_storelong(0xc,in_cr11,unaff_r6);
  }
  if (in_NG != in_OV) {
    func_0x0770b070();
    puVar2 = extraout_r12_01;
  }
  if (in_NG != in_OV) {
    func_0x07708438();
    puVar2 = extraout_r12_02;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,puVar2);
    puVar3 = puVar2;
    puVar1 = unaff_r6;
  }
  else {
    puVar1 = unaff_r6 + ((int)unaff_r6 >> 0x19);
    *unaff_r6 = (char)puVar2;
    puVar3 = puVar2 + 0x1b0;
    coprocessor_load(0xc,in_cr6,puVar2);
  }
  if (in_NG != in_OV) {
    func_0x09ef02d4();
    puVar3 = extraout_r12_03;
  }
  if (in_NG != in_OV) {
    func_0x07708458();
    puVar3 = extraout_r12_04;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
  else {
    puVar3 = puVar3 + -0x370;
    coprocessor_storelong(6,in_cr13,puVar3);
    coprocessor_storelong(0xc,in_cr12,unaff_r8);
  }
  if ((bool)in_OV) {
    func_0x0a334730();
    puVar3 = extraout_r12_05;
  }
  if (in_NG != in_OV) {
    func_0x07708470();
    puVar3 = extraout_r12_06;
  }
  if (!(bool)in_NG) {
    func_0x09ef02f4();
    puVar3 = extraout_r12_07;
  }
  if (in_NG != in_OV) {
    func_0x07708478();
    puVar3 = extraout_r12_08;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_storelong(0xd,in_cr13,&stack0x00000000);
    register0x00000054 = (BADSPACEBASE *)auStack_374;
  }
  else {
    coprocessor_storelong(0xc,in_cr12,&stack0x000001b0);
    *puVar1 = (char)puVar3;
    func_0x07af4350();
    puVar3 = extraout_r12_09;
  }
  if (in_NG != in_OV) {
    func_0x07588314();
    puVar3 = extraout_r12_10;
  }
  if (in_NG != in_OV) {
    func_0x07708498();
    puVar3 = extraout_r12_11;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,(undefined1 *)((int)register0x00000054 + 0x374));
    coprocessor_loadlong(0xd,in_cr12,register0x00000054);
    puVar2 = puVar3;
  }
  else {
    puVar2 = puVar3 + -0x330;
    coprocessor_storelong(6,in_cr13,puVar3);
  }
  if ((bool)in_OV) {
    coprocessor_storelong(0xc,in_cr12,puVar2);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x07af4370();
  }
  if (in_NG != in_OV) {
    func_0x07706cb4();
  }
  if (in_NG != in_OV) {
    func_0x077084b8();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,(undefined1 *)((int)register0x00000054 + 0x374));
    coprocessor_storelong(0xd,in_cr13,(undefined1 *)((int)register0x00000054 + -0x374));
    coprocessor_loadlong(0xc,in_cr8,(undefined1 *)((int)register0x00000054 + -0x374));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

