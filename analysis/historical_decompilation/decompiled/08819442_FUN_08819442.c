
/* WARNING: Control flow encountered bad instruction data */

void FUN_08819442(void)

{
  undefined1 *unaff_r4;
  int unaff_r11;
  int iVar1;
  int iVar2;
  undefined1 *in_r12;
  undefined1 *extraout_r12;
  undefined1 *puVar3;
  undefined1 *extraout_r12_00;
  undefined1 *extraout_r12_01;
  undefined1 *extraout_r12_02;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if ((bool)in_NG) {
    *unaff_r4 = (char)unaff_r11;
  }
  coprocessor_storelong(4,in_cr5,unaff_lr + 0x110);
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr14,&stack0x000003b4);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
  else {
    coprocessor_storelong(0xd,in_cr13,&stack0x00000374);
    *in_r12 = 0;
    func_0x07b50792();
    in_r12 = extraout_r12;
  }
  iVar1 = unaff_r11;
  puVar3 = in_r12;
  if (in_NG != in_OV) {
    puVar3 = in_r12 + 0x330;
    coprocessor_load(0xc,in_cr12,in_r12);
    iVar1 = unaff_r11 + 0x330;
    coprocessor_load(0xc,in_cr12,unaff_r11);
  }
  coprocessor_moveto(0xb,7,5,iVar1,in_cr14,in_cr11);
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xe,in_cr14,&stack0x000003b8);
    coprocessor_loadlong(0xe,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000000);
  }
  else {
    coprocessor_storelong(0xd,in_cr13,puVar3 + 0x374);
    coprocessor_storelong(0xc,in_cr12,puVar3);
  }
  if (in_NG != in_OV) {
    coprocessor_load(0xc,in_cr12,puVar3);
    func_0x0770c7ba();
    puVar3 = extraout_r12_00;
  }
  coprocessor_moveto(0xb,7,5,iVar1,in_cr14,in_cr11);
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xe,in_cr14,&stack0x000003b8);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr12,puVar3);
  }
  else {
    coprocessor_storelong(0xc,in_cr12,puVar3);
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(0xc,in_cr12,puVar3);
    func_0x0770c3da();
    puVar3 = extraout_r12_01;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    iVar1 = coprocessor_movefromRt(0xb,6,5,in_cr14,in_cr11);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000378);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
  else {
    coprocessor_store(0xd,in_cr13,&stack0x00000374);
    coprocessor_storelong(0xd,in_cr12,puVar3);
    coprocessor_storelong(0xc,in_cr12,puVar3);
  }
  if ((bool)in_OV) {
    puVar3 = puVar3 + 0x318;
  }
  if (in_NG != in_OV) {
    func_0x07706ff6();
    puVar3 = extraout_r12_02;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
  else {
    coprocessor_storelong(0xd,in_cr13,&stack0x00000358);
    coprocessor_storelong(0xc,in_cr12,puVar3);
  }
  iVar2 = iVar1;
  if (in_NG != in_OV) {
    iVar2 = iVar1 + -0x318;
    coprocessor_storelong(0xc,in_cr12,iVar1);
  }
  if (!(bool)in_NG) {
    coprocessor_load(6,in_cr12,iVar2);
  }
  if (in_NG != in_OV) {
    func_0x077087d6();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_storelong(0xd,in_cr13,&stack0x00000374);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

