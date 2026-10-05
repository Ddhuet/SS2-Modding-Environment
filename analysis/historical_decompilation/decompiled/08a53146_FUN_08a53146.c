
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a531f2) */
/* WARNING: Removing unreachable block (ram,0x08a531fa) */
/* WARNING: Removing unreachable block (ram,0x08a531fe) */
/* WARNING: Removing unreachable block (ram,0x08a53202) */
/* WARNING: Removing unreachable block (ram,0x08a531ee) */
/* WARNING: Removing unreachable block (ram,0x08a531be) */
/* WARNING: Removing unreachable block (ram,0x08a531e2) */

uint FUN_08a53146(void)

{
  uint uVar1;
  uint in_r3;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  uint extraout_r3_03;
  uint extraout_r3_04;
  uint unaff_r7;
  uint unaff_r8;
  uint *unaff_r9;
  uint unaff_r11;
  uint in_r12;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  uint extraout_r12_02;
  uint extraout_r12_03;
  uint extraout_r12_04;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr12;
  
  if (!(bool)in_OV) {
    unaff_r11 = 0;
  }
  if (in_NG != in_OV) {
    func_0x0794202e();
    in_r3 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x07982042();
    in_r3 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(0xd,in_cr12,&stack0x00000000);
  }
  if (!(bool)in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0791355a();
    in_r3 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  coprocessor_loadlong2(0,in_cr0,unaff_r11 + 0x3c);
  if (in_NG != in_OV) {
    coprocessor_load(0,in_cr0,unaff_r11);
    func_0x081931b6();
    in_r3 = extraout_r3_02;
    in_r12 = extraout_r12_02;
  }
  if ((bool)in_CY) {
    in_NG = (int)((uint)unaff_r9 ^ 0xfc) < 0;
    in_ZR = ((uint)unaff_r9 ^ 0xfc) == 0;
  }
  if (in_NG != in_OV) {
    func_0x0811354e();
    in_r3 = extraout_r3_03;
    in_r12 = extraout_r12_03;
  }
  if ((bool)in_CY) {
    func_0x081170b6();
    in_r3 = extraout_r3_04;
    in_r12 = extraout_r12_04;
  }
  if ((bool)in_ZR) {
    uVar1 = (*(code *)0x0)();
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x08a531be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_NG == in_OV) {
    uVar1 = (*(code *)0xffffffff)();
    return uVar1;
  }
  if (!(bool)in_CY) {
    in_CY = false;
    unaff_r11 = 0xfff55fff;
  }
  if ((bool)in_CY) {
    software_interrupt(0xf02222);
    uRam08a531e6 = 0x8a531da;
    uRam08a531da = in_r3;
    uRam08a531de = unaff_r7;
    uRam08a531e2 = unaff_r11;
    *unaff_r9 = in_r3;
    unaff_r9[1] = unaff_r7;
    unaff_r9[2] = unaff_r11;
    unaff_r9[3] = in_r12;
    unaff_r9[4] = 0x8a531de;
    *unaff_r9 = in_r3;
    unaff_r9[1] = unaff_r7;
    unaff_r9[2] = unaff_r8;
    unaff_r9[3] = unaff_r11;
    unaff_r9[4] = (uint)register0x00000054;
    unaff_r9[5] = 0x8a531e2;
    return *unaff_r9;
  }
  software_interrupt(0x2222);
                    /* WARNING: Could not recover jumptable at 0x08a531ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(in_r3 ^ 0xed0))();
  return uVar1;
}

