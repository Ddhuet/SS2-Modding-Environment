
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_082f74a8(int param_1)

{
  int unaff_r4;
  int unaff_r6;
  int unaff_r7;
  undefined4 unaff_r11;
  undefined1 extraout_r12;
  undefined1 uVar1;
  int iVar2;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    return *(undefined8 *)(unaff_r7 + 4);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(9,in_cr13,unaff_r11);
  }
  uVar1 = *_DAT_082f75ad;
  if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar1 = *(undefined1 *)(unaff_r4 + 0x4d6);
  }
  *(undefined1 *)(param_1 + 0xcd8) = uVar1;
  iVar2 = 0x82f74cc;
  func_0x080b387e();
  if ((bool)in_ZR) {
    iVar2 = 0x82f74d0;
    func_0x084b88d0();
  }
  if ((bool)in_ZR) {
    software_interrupt(0x13120f);
  }
  coprocessor_loadlong2(2,in_cr0,iVar2 + 0x20);
  func_0x081f74d0();
  if ((bool)in_ZR || in_NG != in_OV) {
    in_OV = SBORROW4(unaff_r6,0xd600000) != SBORROW4(unaff_r6 + -0xd600000,(uint)!(bool)in_CY);
    in_NG = (int)(unaff_r6 - (!(bool)in_CY + 0xd600000)) < 0;
    in_ZR = unaff_r6 == !(bool)in_CY + 0xd600000;
  }
  if (in_NG != in_OV) {
    software_interrupt(0xbfc4cb);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uRam082f74f0 = extraout_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

