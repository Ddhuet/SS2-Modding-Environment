
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ab0574(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int extraout_r3;
  int extraout_r3_00;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if ((bool)in_NG) {
    uVar1 = func_0x0799dac0();
    param_4 = extraout_r3;
  }
  if (in_NG != in_OV) {
    uVar1 = func_0x077c0ac4();
    param_4 = extraout_r3_00;
  }
  if (in_NG != in_OV) {
    if (!(bool)in_CY || (bool)in_ZR) {
      *(undefined8 *)(param_4 + 4) = uVar1;
      *(int *)(param_4 + 0xc) = param_4;
      *(undefined4 *)(param_4 + 0x10) = unaff_r5;
      *(undefined4 *)(param_4 + 0x14) = unaff_r7;
      *(undefined4 *)(param_4 + 0x18) = unaff_r9;
      *(undefined4 *)(param_4 + 0x1c) = unaff_r11;
      *(BADSPACEBASE **)(param_4 + 0x20) = register0x00000054;
      *(undefined4 *)(param_4 + 0x24) = 0x8ab0588;
    }
    if ((bool)in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

