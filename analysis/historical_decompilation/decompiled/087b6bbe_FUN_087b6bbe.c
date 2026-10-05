
/* WARNING: Control flow encountered bad instruction data */

void FUN_087b6bbe(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 extraout_r2;
  undefined4 unaff_r4;
  uint unaff_r5;
  int *unaff_r6;
  int *piVar2;
  undefined4 *unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 unaff_lr;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  bool bVar3;
  bool bVar4;
  undefined4 in_cr0;
  undefined4 in_cr5;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  piVar2 = unaff_r6;
  if ((bool)in_NG) {
    piVar2 = unaff_r6 + 0x152;
    unaff_r11 = *unaff_r6;
    unaff_r9 = *(undefined4 *)(unaff_r10 + 0x563);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    unaff_lr = 0x87b6bca;
    uVar5 = func_0x06a2055e();
    param_3 = extraout_r2;
    in_r12 = extraout_r12;
  }
  uVar1 = (uint)uVar5;
  if (!(bool)in_OV) {
    unaff_r7 = (undefined4 *)((int)unaff_r7 + -0xb6);
    *(char *)unaff_r7 = (char)uVar5;
  }
  if (!(bool)in_NG) {
    coprocessor_store(0,in_cr0,unaff_r8);
  }
  if (!(bool)in_OV) {
    *(undefined4 *)(unaff_r11 + 4) = param_3;
    *(undefined4 *)(unaff_r11 + 8) = unaff_r4;
    *(undefined4 **)(unaff_r11 + 0xc) = unaff_r7;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_OV) {
    *(uint *)((int)piVar2 + 0x376) = uVar1;
  }
  if ((bool)in_NG) {
    *unaff_r7 = (int)((ulonglong)uVar5 >> 0x20);
    unaff_r7[1] = param_3;
    unaff_r7[2] = unaff_r4;
    unaff_r7[3] = piVar2;
    unaff_r7[4] = unaff_r9;
    unaff_r7[5] = unaff_r10;
    unaff_r7[6] = in_r12;
    unaff_r7[7] = unaff_lr;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    unaff_r5 = uVar1 & (int)piVar2 >> 8;
  }
  if ((bool)in_ZR) {
    coprocessor_store(0,in_cr12,uVar1 - 0x38);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_store(0,in_cr5,uVar1);
  }
  bVar3 = false;
  bVar4 = (bool)in_CY;
  if ((bool)in_ZR) {
    coprocessor_loadlong(0,in_cr10,uVar1);
    coprocessor_load(0xd,in_cr0,uVar1);
    uVar1 = uVar1 * 0x4000;
    bVar4 = CARRY4(unaff_r5,uVar1) || CARRY4(unaff_r5 + uVar1,(uint)(byte)in_CY);
    bVar3 = unaff_r5 + uVar1 + (uint)(byte)in_CY == 0;
  }
  if (bVar4 && !bVar3) {
    func_0x07bb9172();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

