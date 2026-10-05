
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08d60620) */
/* WARNING: Removing unreachable block (ram,0x08d60624) */

void FUN_08d605ec(uint param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 unaff_r4;
  byte *unaff_r5;
  uint unaff_r6;
  byte *unaff_r7;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  undefined1 uVar4;
  char in_OV;
  undefined4 in_cr8;
  
  if (!(bool)in_NG) {
    unaff_r11 = (uint)*(byte *)(unaff_r11 - 0x5b6);
  }
  if (!(bool)in_OV) {
    unaff_r7 = (byte *)(uint)*(byte *)(unaff_r11 - 0x576);
  }
  if (!(bool)in_NG) {
    unaff_r7 = unaff_r7 + -0x656;
    unaff_r5 = (byte *)((uint)*unaff_r7 - ((uint)param_4 >> 6 | (int)param_4 << 0x1a));
    unaff_r6 = (uint)*unaff_r5;
  }
  if ((bool)in_OV) {
    uVar3 = (int)param_4 - ((uint)param_4 >> 0x15);
    *param_4 = (char)uVar3;
  }
  else {
    uVar3 = (uint)*(byte *)(unaff_r6 - ((uint)param_4 >> 7));
  }
  if (!in_ZR) {
    uVar4 = 0;
    if (in_NG != in_OV) {
      unaff_lr = 0x8d60648;
      func_0x08056a0c(param_1);
      in_r12 = extraout_r12;
    }
    if (in_NG != in_OV) {
      unaff_lr = 0x8d6064c;
      func_0x07cb2a10();
      in_r12 = extraout_r12_00;
    }
    if ((bool)uVar4 || in_NG != in_OV) {
      coprocessor_loadlong(0xf,in_cr8,unaff_r4);
    }
    if ((bool)in_NG) {
      uRam08d60664 = 0x8d60658;
      uRam08d60658 = in_r12;
      puRam08d6065c = (undefined1 *)register0x00000054;
      uRam08d60660 = unaff_lr;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar1 = (int *)(param_1 & 0x8d60610);
  piVar2 = (int *)((int)piVar1 - (int)unaff_r5);
  *piVar1 = (int)piVar2;
  piVar1[1] = param_2;
  *piVar2 = (int)piVar2 - (int)unaff_r7;
  piVar2[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x08d6061c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_r6 >> (uVar3 & 0xff) & 0x8d60624))();
  return;
}

