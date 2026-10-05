
/* WARNING: Control flow encountered bad instruction data */

void FUN_0860368e(int *param_1,uint param_2,int param_3,int param_4)

{
  int extraout_r2;
  uint unaff_r11;
  undefined1 in_NG;
  undefined1 in_ZR;
  byte in_CY;
  bool in_OV;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if ((bool)in_ZR) {
    coprocessor_storelong(5,in_cr11,param_3);
  }
  if (in_OV) {
    param_1 = (int *)((uint)&stack0x00000000 & 0x88000001);
  }
  if (!(bool)in_ZR) {
    in_CY = 0;
    in_ZR = ((uint)param_1 & 0x4000) == 0;
    in_NG = 0;
  }
  if (!in_OV) {
    in_CY = (byte)param_3 & 1;
    param_2 = unaff_r11 & param_3 >> 1;
    in_NG = (int)param_2 < 0;
    in_ZR = param_2 == 0;
  }
  if (!(bool)in_ZR) {
    *(char *)(param_4 + 0x403) = (char)param_2;
  }
  if (!(bool)in_NG) {
    param_1 = (int *)func_0x092479ba();
    param_3 = extraout_r2;
  }
  if ((bool)in_CY) {
    coprocessor_storelong(5,in_cr13,param_3);
  }
  else {
    software_interrupt(0x500b10);
    *param_1 = (int)(param_1 + -0xd4);
  }
  if (!(bool)in_NG) {
    func_0x076d0dd6();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

