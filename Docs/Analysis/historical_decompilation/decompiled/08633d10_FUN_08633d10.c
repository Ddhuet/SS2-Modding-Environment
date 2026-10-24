
/* WARNING: Control flow encountered bad instruction data */

void FUN_08633d10(void)

{
  uint uVar1;
  uint unaff_r5;
  uint unaff_r11;
  bool in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr9;
  undefined4 in_cr13;
  undefined8 in_d18;
  
  if (!in_NG) {
    unaff_r11 = (uint)in_CY;
  }
  coprocessor_function2(5,0xe,3,in_cr9,in_cr13,in_cr3);
  if ((bool)in_ZR || in_NG != (bool)in_OV) {
    func_0x0a26b4f4();
  }
  VectorShiftLeft(in_d18,0x12,0x20,1);
  if ((bool)in_ZR) {
    uVar1 = unaff_r11 & 0xff;
    in_CY = uVar1 == 0 && (bool)in_CY || uVar1 != 0 && (bool)((byte)(unaff_r5 >> 0x20 - uVar1) & 1);
  }
  if (!(bool)in_CY) {
    coprocessor_store(0xe,in_cr3,unaff_r5 - 0x2d4);
    func_0x09382ec8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

