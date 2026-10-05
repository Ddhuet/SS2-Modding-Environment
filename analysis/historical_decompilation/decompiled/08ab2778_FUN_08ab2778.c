
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08ab278c) */
/* WARNING: Removing unreachable block (ram,0x0711d404) */

undefined4 FUN_08ab2778(undefined4 param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 *unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_CY || in_ZR) {
    *unaff_r11 = param_1;
    unaff_r11[1] = unaff_r4;
    unaff_r11[2] = unaff_r8;
    unaff_r11[3] = unaff_r10;
    unaff_r11[4] = in_r12;
    unaff_r11[5] = register0x00000054;
    unaff_r11[6] = 0x8ab2780;
    *unaff_r10 = param_1;
    unaff_r10[1] = unaff_r4;
    unaff_r10[2] = unaff_r8;
    unaff_r10[3] = unaff_r9;
    unaff_r10[4] = unaff_r11;
    unaff_r10[5] = in_r12;
    unaff_r10[6] = register0x00000054;
    unaff_r10[7] = 0x8ab2784;
  }
  if (in_NG == in_OV) {
    return unaff_r10[1];
  }
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

