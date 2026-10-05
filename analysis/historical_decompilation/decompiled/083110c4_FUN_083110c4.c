
/* WARNING: Control flow encountered bad instruction data */

void FUN_083110c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int unaff_r8;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    func_0x070be7a4();
    param_2 = extraout_r1;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (!(bool)in_ZR) {
    *(undefined4 *)(unaff_r11 + -0xff2) = unaff_pc;
  }
  if ((bool)in_CY) {
    *(BADSPACEBASE **)(unaff_r8 + -4) = register0x00000054;
    *(undefined4 *)(unaff_r8 + -8) = unaff_r10;
    *(undefined4 *)(unaff_r8 + -0xc) = unaff_r4;
    *(undefined4 *)(unaff_r8 + -0x10) = param_4;
    *(undefined4 *)(unaff_r8 + -0x14) = param_3;
    *(undefined4 *)(unaff_r8 + -0x18) = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

