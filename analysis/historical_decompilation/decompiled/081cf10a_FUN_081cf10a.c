
/* WARNING: Control flow encountered bad instruction data */

void FUN_081cf10a(uint param_1,uint param_2)

{
  uint uVar1;
  int unaff_r4;
  uint unaff_r5;
  int unaff_r8;
  uint unaff_r10;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar2;
  undefined4 in_cr4;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_store(5,in_cr11,unaff_lr);
  }
  bVar2 = in_CY;
  if (in_ZR || in_NG != in_OV) {
    uVar1 = (int)param_1 >> 0x17;
    bVar2 = uVar1 < unaff_r5 || unaff_r5 - uVar1 < (uint)in_CY;
    in_NG = (int)(unaff_r5 - (uVar1 + !in_CY)) < 0;
    in_ZR = unaff_r5 == uVar1 + !in_CY;
  }
                    /* WARNING: Could not recover jumptable at 0x081cf112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!bVar2) {
    if (in_ZR) {
      coprocessor_load(1,in_cr4,unaff_r4 + -0xd8);
    }
    if ((bool)in_NG) {
      param_2 = unaff_r10 ^ 0x80;
    }
    *(uint *)(unaff_r8 + -0xd2b) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(unaff_r10 & (param_1 >> 0xf | param_1 << 0x11)))();
  return;
}

