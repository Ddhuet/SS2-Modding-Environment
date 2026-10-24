
/* WARNING: Control flow encountered bad instruction data */

void FUN_086301d4(uint *param_1,undefined4 param_2,uint param_3)

{
  int unaff_r5;
  uint unaff_r8;
  int unaff_r10;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_CY && !(bool)in_ZR) {
    unaff_r8 = *(uint *)(unaff_r5 + -0x5f5);
  }
  if ((bool)in_NG != in_OV) {
    in_NG = '\x01';
    in_ZR = 0;
  }
  if (!in_OV) {
    unaff_r8 = param_3 & ~(unaff_r10 >> 3);
    in_NG = (int)unaff_r8 < 0;
    in_ZR = unaff_r8 == 0;
  }
  if ((bool)in_ZR || (bool)in_NG != in_OV) {
    *param_1 = unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

