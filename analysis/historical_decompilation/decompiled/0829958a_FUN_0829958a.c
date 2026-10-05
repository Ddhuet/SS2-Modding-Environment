
/* WARNING: Control flow encountered bad instruction data */

void FUN_0829958a(void)

{
  bool bVar1;
  undefined4 in_r3;
  undefined4 *unaff_r4;
  undefined4 unaff_r5;
  uint unaff_r7;
  uint unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    *unaff_r4 = in_r3;
    unaff_r4[1] = unaff_r4;
    unaff_r4[2] = unaff_r5;
    unaff_r4[3] = unaff_r7;
    unaff_r4[4] = unaff_r8;
    unaff_r4[5] = unaff_r10;
    unaff_r4[6] = in_r12;
    unaff_r4[7] = register0x00000054;
    unaff_r4[8] = 0x8299592;
  }
  bVar1 = !in_CY;
  if (!in_ZR) {
    in_CY = false;
    in_ZR = (unaff_r8 & 0xf700) == 0;
  }
                    /* WARNING: Could not recover jumptable at 0x08299596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_ZR) {
    (*(code *)(0xff000 - ((unaff_r9 - ((unaff_r7 >> 0x13) + (uint)bVar1)) + (uint)!in_CY)))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

