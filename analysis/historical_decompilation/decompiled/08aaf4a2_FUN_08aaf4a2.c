
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08aaf4b2) */
/* WARNING: Removing unreachable block (ram,0x0753db1e) */
/* WARNING: Removing unreachable block (ram,0x08aaf4b6) */
/* WARNING: Removing unreachable block (ram,0x073981a6) */
/* WARNING: Removing unreachable block (ram,0x08aaf4ba) */
/* WARNING: Removing unreachable block (ram,0x08aaf4be) */

undefined8 FUN_08aaf4a2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 *unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    *unaff_r10 = param_1;
    unaff_r10[1] = param_2;
    unaff_r10[2] = param_4;
    unaff_r10[3] = unaff_r4;
    unaff_r10[4] = unaff_r5;
    unaff_r10[5] = unaff_r7;
    unaff_r10[6] = unaff_r8;
    unaff_r10[7] = unaff_r10;
    unaff_r10[8] = in_r12;
    unaff_r10[9] = register0x00000054;
    unaff_r10[10] = 0x8aaf4aa;
    *unaff_r10 = param_4;
    unaff_r10[1] = unaff_r7;
    unaff_r10[2] = unaff_r8;
    unaff_r10[3] = unaff_r11;
    unaff_r10[4] = in_r12;
    unaff_r10[5] = 0x8aaf4ae;
  }
  if (!in_CY) {
    return CONCAT44(param_2,*(undefined4 *)(unaff_r9 + 4));
  }
  return CONCAT44(*(undefined4 *)(unaff_r9 + 4),param_1);
}

