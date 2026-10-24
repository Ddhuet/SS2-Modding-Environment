
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08aafe4a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
    return CONCAT44(*(undefined4 *)(unaff_r9 + 4),param_1);
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    *unaff_r8 = param_2;
    unaff_r8[1] = param_4;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r8;
    unaff_r8[4] = in_r12;
    unaff_r8[5] = register0x00000054;
    unaff_r8[6] = 0x8aafe5a;
  }
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r8 = param_2;
  unaff_r8[1] = param_4;
  unaff_r8[2] = unaff_r4;
  unaff_r8[3] = unaff_r10;
  unaff_r8[4] = in_r12;
  unaff_r8[5] = register0x00000054;
  unaff_r8[6] = 0x8aafe5e;
  return CONCAT44(param_2,*(undefined4 *)(unaff_r9 + 4));
}

