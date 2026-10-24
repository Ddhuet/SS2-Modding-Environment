
/* WARNING: Control flow encountered bad instruction data */

void FUN_0873c658(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int extraout_r3;
  byte unaff_r7;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (!(bool)in_CY) {
    param_1 = func_0x08b69a90();
    param_4 = extraout_r3;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    software_interrupt(0x709b94);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    unaff_r7 = (byte)(param_1 >> 3) & (byte)param_4;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *(byte *)(param_4 + 0x40b) = unaff_r7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

