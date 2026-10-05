
/* WARNING: Control flow encountered bad instruction data */

void FUN_08258b1a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  short *unaff_r6;
  undefined4 *unaff_r7;
  uint unaff_r10;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined8 in_d31;
  
  if (!(bool)in_NG) {
    unaff_r11 = (int)*unaff_r6;
  }
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xeaef40);
  }
  VectorShiftLeft(in_d31,0xf,0x40,0);
  if (!in_CY) {
    in_CY = true;
    param_4 = unaff_r10 ^ 0x80000006;
    in_NG = (int)param_4 < 0;
    in_ZR = param_4 == 0;
  }
  if (!in_CY) {
    *unaff_r7 = param_2;
  }
  if (in_ZR || in_NG != in_OV) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = unaff_r4;
    param_1[4] = unaff_r5;
    param_1[5] = unaff_r11;
    param_1[6] = register0x00000054;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

