
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a39a32) */
/* WARNING: Removing unreachable block (ram,0x08a39a2a) */
/* WARNING: Removing unreachable block (ram,0x08a39a2e) */

undefined8 FUN_08a399ea(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined1 *unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined8 uVar1;
  
  if (in_CY && !(bool)in_ZR) {
    return CONCAT44(*(undefined4 *)(unaff_r9 + 4),param_1);
  }
  if (!in_CY || (bool)in_ZR) {
    return *(undefined8 *)(unaff_r9 + 4);
  }
  if (!in_CY || (bool)in_ZR) {
    return CONCAT44(param_2,param_1);
  }
  if (!in_CY || (bool)in_ZR) {
    uRam08a39a02 = param_1;
    uRam08a39a06 = param_1;
    uRam08a39a0a = param_4;
    uRam08a39a0e = unaff_r4;
    uRam08a39a12 = unaff_r7;
    uRam08a39a16 = unaff_r8;
    iRam08a39a1a = unaff_r9;
    uRam08a39a1e = unaff_r10;
    puRam08a39a22 = unaff_r11;
  }
  if (in_OV) {
    *unaff_r11 = (char)param_1;
  }
  else {
    coprocessor_loadlong(0xf,in_cr0,unaff_r6 + -0x264);
  }
  if ((bool)in_NG != in_OV) {
    func_0x078f9a4e();
  }
  UNRECOVERED_JUMPTABLE = (code *)func_0x074b9a54();
  if (!(bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x08a39a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x08a39a2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xff0000);
                    /* WARNING: Could not recover jumptable at 0x08a39a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}

