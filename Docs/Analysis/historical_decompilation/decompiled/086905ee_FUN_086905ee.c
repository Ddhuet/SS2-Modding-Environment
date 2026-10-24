
/* WARNING: Control flow encountered bad instruction data */

void FUN_086905ee(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 unaff_r4;
  int unaff_r8;
  uint unaff_r10;
  undefined4 unaff_r11;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(unaff_lr + -0x52f) = unaff_r11;
  }
  if ((bool)in_NG) {
    *(undefined4 *)((int)param_2 + 0x441) = unaff_r4;
    *(undefined4 *)((int)param_2 * 0x2001) = unaff_r4;
  }
  if (in_ZR || in_NG != in_OV) {
    in_NG = unaff_r8 < 0;
    in_ZR = unaff_r8 == 0;
    in_CY = 0;
    in_OV = '\0';
  }
  if (in_ZR || in_NG != in_OV) {
    in_CY = 0x6ffffff6 < unaff_r10;
  }
  if ((bool)in_CY) {
    *param_2 = param_3 + 0x9b;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

