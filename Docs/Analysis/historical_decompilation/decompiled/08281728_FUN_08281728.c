
/* WARNING: Control flow encountered bad instruction data */

void FUN_08281728(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int extraout_r3_00;
  int iVar2;
  uint uVar3;
  uint unaff_r5;
  int unaff_r9;
  uint unaff_r11;
  undefined4 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr7;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  uVar1 = func_0x06eeee60();
  if (!(bool)in_CY) {
    coprocessor_function(3,4,3,in_cr4,in_cr4,in_cr3);
  }
  if (in_NG != in_OV) {
    uRam08282343 = (undefined1)uVar1;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_r9 = unaff_r9 + 0x9a2;
  }
  if (!(bool)in_NG) {
    uVar1 = 0x2f09;
    in_CY = (byte)unaff_r5 >> 7;
    uVar3 = unaff_r11 ^ (unaff_r5 >> 8 | unaff_r5 << 0x18);
    in_NG = (int)uVar3 < 0;
    in_ZR = uVar3 == 0;
  }
  iVar2 = extraout_r3;
  if (!(bool)in_ZR) {
    uVar1 = func_0x08d92c84();
    iVar2 = extraout_r3_00;
  }
  if (!(bool)in_ZR) {
    coprocessor_function(4,0xf,1,in_cr0,in_cr3,in_cr12);
  }
  coprocessor_function2(4,0xc,7,in_cr15,in_cr13,in_cr7);
  if (!(bool)in_CY) {
    *(undefined4 *)(unaff_r9 + iVar2 * -0x40000000) = uVar1;
  }
  if (!(bool)in_OV) {
    software_interrupt(0x564737);
  }
  if ((bool)in_NG) {
    software_interrupt(0x383478);
  }
  func_0x0904acd8();
  if (in_NG == in_OV) {
    coprocessor_moveto(6,7,7,unaff_pc,in_cr15,in_cr1);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

