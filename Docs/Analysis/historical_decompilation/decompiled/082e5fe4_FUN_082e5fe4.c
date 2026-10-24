
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x082e6004) */
/* WARNING: Removing unreachable block (ram,0x08326440) */
/* WARNING: Removing unreachable block (ram,0x0832642c) */
/* WARNING: Removing unreachable block (ram,0x082e6014) */

void FUN_082e5fe4(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,byte param_5)

{
  uint uVar1;
  uint extraout_r2;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    *unaff_r5 = param_1;
    unaff_r5[1] = param_3;
    unaff_r5[2] = unaff_r6;
    unaff_r5[3] = unaff_r7;
    unaff_r5[4] = unaff_r8;
    unaff_r5[5] = unaff_r10;
    unaff_r5[6] = in_r12;
    unaff_r5[7] = register0x00000054;
    unaff_r5[8] = 0x82e5fec;
  }
  if ((bool)in_NG) {
    *(char *)(param_2 - (unaff_r8 >> 10)) = (char)unaff_r5;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uVar2 = func_0x0827490c();
    param_3 = extraout_r2;
  }
  uVar1 = (uint)uVar2;
  if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x08326428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (!(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    (*(code *)(uVar1 * 0x40000000 + -0x8326431))();
    return;
  }
  if ((bool)in_ZR) {
    uVar1 = (uint)param_5;
  }
  coprocessor_storelong2(4,in_cr0,unaff_r11);
                    /* WARNING: Jumptable at 0x082e6000 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  if ((bool)in_ZR) {
    (*(code *)(param_3 & 0x14))(uVar1);
    return;
  }
  if ((bool)in_NG) {
    *(uint *)(param_3 - 4) = unaff_r8;
    *(int *)(param_3 - 8) = (int)((ulonglong)uVar2 >> 0x20);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

