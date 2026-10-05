
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x082d2d9e) */
/* WARNING: Removing unreachable block (ram,0x081d2556) */
/* WARNING: Removing unreachable block (ram,0x0835119e) */
/* WARNING: Removing unreachable block (ram,0x081d2566) */
/* WARNING: Removing unreachable block (ram,0x081d256a) */

void FUN_081d254e(uint param_1,code *UNRECOVERED_JUMPTABLE,int param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  undefined4 unaff_pc;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_storelong(5,in_cr11,param_3 + 700);
  }
                    /* WARNING: Could not recover jumptable at 0x081d2552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_ZR) {
    (*(code *)(param_1 & ((uint)unaff_r11 >> 0xd | (int)unaff_r11 << 0x13)))();
    return;
  }
  if (!in_NG) {
    UNRECOVERED_JUMPTABLE = (code *)((uint)&stack0x00000000 ^ 0x56200000);
  }
  if (in_CY) {
    software_interrupt(0xcfa044);
  }
  else {
    unaff_r11 = (undefined4 *)
                ((ulonglong)
                 (CONCAT44(unaff_r11,unaff_r4) +
                 ((longlong)(short)in_r12 * (longlong)(short)unaff_pc -
                 (longlong)(short)((uint)in_r12 >> 0x10) * (longlong)(short)((uint)unaff_pc >> 0x10)
                 )) >> 0x20);
  }
  if (in_NG != (bool)in_OV) {
    if (!in_NG) {
      *(undefined4 **)(param_1 + (param_1 >> 9)) = unaff_r11;
      if (in_CY) {
        software_interrupt(0x984c30);
      }
      software_interrupt(0xb49840);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *unaff_r11 = 0x835118e;
    unaff_r11[-1] = unaff_lr;
    unaff_r11[-2] = register0x00000054;
    unaff_r11[-3] = unaff_r10;
    unaff_r11[-4] = unaff_r9;
    unaff_r11[-5] = unaff_r8;
    unaff_r11[-6] = unaff_r7;
    unaff_r11[-7] = unaff_r6;
    unaff_r11[-8] = param_4;
    unaff_r11[-9] = param_3;
    unaff_r11[-10] = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x0835118e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

