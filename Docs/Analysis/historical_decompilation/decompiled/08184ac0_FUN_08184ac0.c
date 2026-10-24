
/* WARNING: Control flow encountered bad instruction data */

void FUN_08184ac0(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 *unaff_r10;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    in_OV = SBORROW4(0x13c000,unaff_r9) != SBORROW4(0x13c000 - unaff_r9,(uint)!in_CY);
    param_3 = 0x13c000 - (unaff_r9 + (uint)!in_CY);
    in_NG = param_3 < 0;
    in_ZR = param_3 == 0;
  }
  if ((bool)in_OV) {
    in_NG = (int)(unaff_r4 ^ 0x95000) < 0;
    in_ZR = (unaff_r4 ^ 0x95000) == 0;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *(BADSPACEBASE **)unaff_r7 = register0x00000054;
    *unaff_r10 = unaff_lr;
    unaff_r10[-1] = unaff_r9;
    unaff_r10[-2] = unaff_r8;
    unaff_r10[-3] = unaff_r5;
    unaff_r10[-4] = param_3;
    unaff_r10[-5] = param_2;
    unaff_r10[-6] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

