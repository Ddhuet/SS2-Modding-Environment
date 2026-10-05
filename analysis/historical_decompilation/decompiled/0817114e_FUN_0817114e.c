
/* WARNING: Control flow encountered bad instruction data */

void FUN_0817114e(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
    *(int *)(unaff_r11 + 0x5ad) = unaff_r11 + 0x5ad;
  }
  else {
    param_3 = param_3 + 0x5bb;
  }
  if (!in_CY || in_ZR) {
    *unaff_r9 = param_1;
    unaff_r9[1] = param_3;
    unaff_r9[2] = unaff_r4;
    unaff_r9[3] = unaff_r7;
    unaff_r9[4] = unaff_r9;
    unaff_r9[5] = unaff_r10;
    unaff_r9[6] = 0x817115e;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

