
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08664ade(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int extraout_r3;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr12;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (in_NG == in_OV) {
    if (in_NG != in_OV) {
      *(undefined4 *)(param_2 + -4) = unaff_r11;
      *(undefined4 *)(param_2 + -8) = unaff_r10;
      *(undefined4 *)(param_2 + -0xc) = unaff_r9;
      *(undefined4 *)(param_2 + -0x10) = unaff_r8;
      *(undefined4 *)(param_2 + -0x14) = unaff_r7;
      *(undefined4 *)(param_2 + -0x18) = unaff_r6;
      *(int *)(param_2 + -0x1c) = unaff_r5;
      uVar3 = func_0x09ad33b6();
      param_4 = extraout_r3;
    }
    uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
    software_interrupt(0xa0bc61);
    if ((bool)in_ZR || in_NG != in_OV) {
      uVar1 = uVar2 >> 0x1e | uVar2 << 2;
      in_OV = SBORROW4(uVar2,uVar1);
      in_NG = (int)(uVar2 - uVar1) < 0;
      in_ZR = uVar2 == uVar1;
    }
    else {
      coprocessor_function(0xd,6,0,in_cr12,in_cr1,in_cr0);
    }
    if (!(bool)in_NG) {
      uVar1 = uVar2 & ~((int)uVar2 >> ((uint)uVar3 & 0xff));
      in_NG = (int)uVar1 < 0;
      in_ZR = uVar1 == 0;
    }
    if (!(bool)in_NG) {
      unaff_r5 = (int)*(char *)(param_4 + 0x12);
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      *(int *)(uVar2 - 0x1d4) = unaff_r5;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return CONCAT44(param_2 * -0x3ff + -0x24,*(undefined4 *)(param_2 * -0x3ff + -0x20));
}

