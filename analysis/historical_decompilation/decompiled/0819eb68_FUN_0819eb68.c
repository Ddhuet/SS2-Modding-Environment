
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0819eb68(void)

{
  undefined4 in_r3;
  undefined4 extraout_r3;
  undefined8 *unaff_r4;
  undefined4 *unaff_r5;
  int unaff_lr;
  undefined1 in_NG;
  bool in_ZR;
  undefined1 in_CY;
  undefined8 uVar1;
  
  if ((bool)in_CY && !in_ZR) {
    return *unaff_r4;
  }
  if (!(bool)in_CY || in_ZR) {
    unaff_lr = 0x819eb70;
    func_0x067049b4();
    in_r3 = extraout_r3;
  }
                    /* WARNING: Could not recover jumptable at 0x0819eb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((bool)in_NG) {
    uVar1 = (*(code *)((uint)unaff_r5 ^ unaff_lr >> 0x13))();
    return uVar1;
  }
  if ((bool)in_CY) {
    *unaff_r5 = in_r3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

