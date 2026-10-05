
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ab1f8c(void)

{
  undefined4 unaff_r4;
  undefined4 unaff_r8;
  undefined4 uVar1;
  undefined4 unaff_r9;
  undefined4 uVar2;
  undefined4 *unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    return;
  }
  if (in_CY && !in_ZR) {
    uVar1 = unaff_r11[1];
    uVar2 = unaff_r11[2];
    *unaff_r10 = *unaff_r11;
    unaff_r10[1] = uVar1;
    unaff_r10[2] = uVar2;
    unaff_r10[3] = unaff_r11 + 5;
    unaff_r10[4] = in_r12;
    unaff_r10[5] = register0x00000054;
    unaff_r10[6] = 0x8ab1fa0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_r10[1] = unaff_r4;
  unaff_r10[2] = unaff_r8;
  unaff_r10[3] = unaff_r9;
  unaff_r10[4] = unaff_r11;
  unaff_r10[5] = in_r12;
  unaff_r10[6] = register0x00000054;
  unaff_r10[7] = 0x8ab1f98;
  return;
}

