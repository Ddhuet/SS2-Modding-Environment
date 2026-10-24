
/* WARNING: Control flow encountered bad instruction data */

void FUN_08aadf6c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  char in_NG;
  undefined1 in_CY;
  char in_OV;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (!(bool)in_CY) {
    *(undefined4 *)(unaff_r11 + 4) = param_1;
    *(undefined4 *)(unaff_r11 + 8) = unaff_r4;
    *(undefined4 *)(unaff_r11 + 0xc) = unaff_r8;
    *(undefined4 *)(unaff_r11 + 0x10) = unaff_r10;
    *(undefined4 *)(unaff_r11 + 0x14) = in_r12;
    *(BADSPACEBASE **)(unaff_r11 + 0x18) = register0x00000054;
    *(undefined4 *)(unaff_r11 + 0x1c) = 0x8aadf74;
  }
  if (in_NG != in_OV) {
    if (in_NG != in_OV) {
      uVar2 = func_0x09ff23bc();
    }
    uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if ((bool)in_NG) {
      uVar1 = *unaff_r5;
    }
    if (!(bool)in_CY) {
      func_0x079823c4((int)uVar2,uVar1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

