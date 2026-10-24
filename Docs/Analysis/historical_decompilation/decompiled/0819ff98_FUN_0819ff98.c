
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819ff98(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  uint extraout_r3;
  uint extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  undefined4 *puVar3;
  undefined4 *extraout_r12_00;
  undefined4 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr15;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  if (!(bool)in_ZR && in_NG == in_OV) {
    uVar4 = func_0x0700d714();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    software_interrupt(0x99a3c1);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_moveto(7,5,4,unaff_r9,in_cr12,in_cr10);
  }
  puVar3 = in_r12;
  if ((bool)in_OV) {
    puVar3 = (undefined4 *)((int)in_r12 - (param_4 >> 0x13 | param_4 << 0xd));
    *in_r12 = unaff_pc;
  }
  if ((bool)in_NG) {
    uVar4 = func_0x09938d38();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    puVar3 = extraout_r12_00;
  }
  else {
    software_interrupt(0x65757f);
  }
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  puVar1 = (undefined4 *)uVar4;
  if ((bool)in_CY) {
    unaff_r11 = *puVar1;
    unaff_r9 = puVar1[-2];
    unaff_r5 = puVar1[-3];
    param_4 = puVar1[-4];
    iVar2 = puVar1[-5];
  }
  if ((bool)in_ZR) {
    *(BADSPACEBASE **)iVar2 = register0x00000054;
    *(undefined4 **)(iVar2 + -4) = puVar3;
    *(undefined4 *)(iVar2 + -8) = unaff_r11;
    *(undefined4 *)(iVar2 + -0xc) = unaff_r9;
    *(undefined4 *)(iVar2 + -0x10) = unaff_r5;
    *(undefined4 *)(iVar2 + -0x14) = unaff_r4;
    *(uint *)(iVar2 + -0x18) = param_4;
    *(undefined4 *)(iVar2 + -0x1c) = param_3;
  }
  if (!(bool)in_NG) {
    coprocessor_movefromRt(2,1,7,in_cr11,in_cr15);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

