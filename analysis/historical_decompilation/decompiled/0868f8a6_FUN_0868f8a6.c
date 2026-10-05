
/* WARNING: Control flow encountered bad instruction data */

void FUN_0868f8a6(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 unaff_r4;
  undefined1 *unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  uint unaff_r10;
  uint unaff_r11;
  undefined4 in_r12;
  undefined1 in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_ZR) {
    uVar1 = (uint)unaff_r5 & 0xff;
    in_CY = uVar1 == 0 && in_CY || uVar1 != 0 && (bool)((byte)(unaff_r11 >> uVar1 - 1) & 1);
    unaff_r11 = unaff_r10 ^ unaff_r11 >> uVar1;
    in_NG = (int)unaff_r11 < 0;
  }
  if (!in_CY) {
    *(BADSPACEBASE **)unaff_r5 = register0x00000054;
    *(undefined4 *)(unaff_r5 + -4) = in_r12;
    *(uint *)(unaff_r5 + -8) = unaff_r11;
    *(undefined4 *)(unaff_r5 + -0xc) = unaff_r8;
    *(undefined4 *)(unaff_r5 + -0x10) = unaff_r6;
    *(undefined4 *)(unaff_r5 + -0x14) = param_3;
    *(undefined4 *)(unaff_r5 + -0x18) = param_1;
    *unaff_r5 = (char)param_4;
  }
  if ((bool)in_NG) {
    param_4 = param_4 + -0x14d;
    unaff_r4 = *param_4;
  }
  if (in_CY) {
    software_interrupt(0x808232);
  }
  if ((bool)in_NG) {
    *(undefined4 *)(unaff_r11 - 0x52c) = unaff_r4;
  }
  if (in_CY) {
    uRam0868f8ca = unaff_r8;
  }
  if (!(bool)in_NG) {
    param_4[-0x140] = unaff_r9;
  }
  if (!in_CY) {
    *(BADSPACEBASE **)(param_2 + -0x522) = register0x00000054;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

