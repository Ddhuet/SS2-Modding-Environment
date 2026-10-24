
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08d90028(undefined4 param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  uint unaff_r10;
  undefined4 in_r12;
  undefined4 extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (!(bool)in_ZR) {
    param_1 = func_0x076bd474();
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    return *(undefined4 *)(unaff_r10 + 4);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    in_CY = false;
    in_ZR = (unaff_r10 | 0x11000000) == 0;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_r10 + 4) = param_1;
  *(undefined4 *)(unaff_r10 + 8) = unaff_r4;
  *(undefined4 *)(unaff_r10 + 0xc) = unaff_r8;
  *(undefined4 *)(unaff_r10 + 0x10) = unaff_r9;
  *(undefined4 *)(unaff_r10 + 0x14) = in_r12;
  *(BADSPACEBASE **)(unaff_r10 + 0x18) = register0x00000054;
  *(undefined4 *)(unaff_r10 + 0x1c) = 0x8d90040;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

