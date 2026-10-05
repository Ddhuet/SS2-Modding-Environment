
/* WARNING: Control flow encountered bad instruction data */

void FUN_08281190(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  uint extraout_r2;
  uint extraout_r2_00;
  undefined4 extraout_r3;
  int *unaff_r6;
  undefined4 *unaff_r7;
  int unaff_r8;
  int iVar1;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (in_NG == in_OV) {
    software_interrupt(0xb2b5b8);
    unaff_r7 = (undefined4 *)((int)unaff_r7 + 0xaad);
    *unaff_r7 = unaff_r10;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_load(0,in_cr10,unaff_lr);
    iVar1 = *unaff_r6;
  }
  else {
    iVar1 = coprocessor_movefromRt(1,4,4,in_cr0,in_cr3);
    func_0x065643e0();
    param_2 = extraout_r1;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *(undefined4 *)(iVar1 + 4) = param_2;
    *(undefined4 *)(iVar1 + 8) = param_4;
    *(undefined4 **)(iVar1 + 0xc) = unaff_r7;
    *(int *)(iVar1 + 0x10) = iVar1;
    *(undefined4 *)(iVar1 + 0x14) = unaff_r11;
    *(undefined4 *)(iVar1 + 0x18) = 0x82811b0;
    *(undefined4 *)(unaff_r8 + 4) = param_4;
    *(undefined4 **)(unaff_r8 + 8) = unaff_r7;
    *(int *)(unaff_r8 + 0xc) = unaff_r8;
    *(undefined4 *)(unaff_r8 + 0x10) = unaff_r11;
    *(undefined4 *)(unaff_r8 + 0x14) = 0x82811b4;
    func_0x065237dc();
    param_3 = extraout_r2_00;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    coprocessor_function(0xc,8,4,in_cr8,in_cr13,in_cr12);
  }
  else {
    in_CY = false;
    in_ZR = (param_3 | 0x24) == 0;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

