
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a5fb2c) */

void FUN_08a5fb1c(void)

{
  undefined4 uVar1;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  int extraout_r2_05;
  int extraout_r2_06;
  int extraout_r2_07;
  int iVar2;
  undefined4 unaff_r6;
  int unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined4 unaff_s23;
  
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_storelong(5,in_cr11,unaff_r11);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_r11 = unaff_r11 + 0x1b0;
    coprocessor_load(6,in_cr5,unaff_r11);
  }
  if ((bool)in_ZR) {
    (*(code *)0x0)();
    return;
  }
  HintPreloadData(unaff_r6);
  func_0x0a61fb7a();
  func_0x07e1ff32();
  uVar1 = func_0x0799f9aa();
  if ((bool)in_ZR) {
    software_interrupt(0xb9988d);
  }
  iVar2 = extraout_r2;
  if ((bool)in_OV) {
    func_0x07993b68(uVar1);
    iVar2 = extraout_r2_00;
  }
  if (!(bool)in_OV) {
    func_0x0794efac();
    iVar2 = extraout_r2_01;
  }
  if (in_NG != in_OV) {
    func_0x0783f3b4();
    iVar2 = extraout_r2_02;
  }
  if (in_NG != in_OV) {
    func_0x079577f8();
    iVar2 = extraout_r2_03;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0,in_cr15,0x8a5fbfc);
  }
  if (in_NG != in_OV) {
    func_0x0865fc00();
    iVar2 = extraout_r2_04;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0865fc04();
    iVar2 = extraout_r2_05;
  }
  if (!(bool)in_CY) {
    software_interrupt(0xf00000);
  }
  if (in_NG != in_OV) {
    func_0x07d351a8();
    iVar2 = extraout_r2_06;
  }
  if (in_NG != in_OV) {
    unaff_r11 = unaff_r11 + 0x2dc;
    coprocessor_load(5,in_cr11,unaff_r11);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x07d8eb00();
    iVar2 = extraout_r2_07;
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000370);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *(undefined4 *)(unaff_r11 + 0x274) = unaff_s23;
  }
  if (!(bool)in_CY) {
    coprocessor_store(3,in_cr2,iVar2 + -0xf4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

