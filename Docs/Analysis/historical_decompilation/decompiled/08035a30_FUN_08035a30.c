
/* WARNING: Control flow encountered bad instruction data */

void FUN_08035a30(void)

{
  undefined4 uVar1;
  undefined4 extraout_r3;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 *unaff_r9;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_OV;
  
  uVar1 = func_0x097f396e();
  if (!(bool)in_ZR) {
    *unaff_r9 = unaff_r7;
    unaff_r9[-1] = uVar1;
    *unaff_r9 = unaff_r8;
    unaff_r9[-1] = extraout_r3;
  }
  if ((bool)in_NG) {
    *unaff_r8 = unaff_r7;
    unaff_r8[-1] = extraout_r3;
    unaff_r8[-2] = uVar1;
  }
  if ((bool)in_OV) {
    func_0x0623ba70();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

