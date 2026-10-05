
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08b06f42(void)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  int unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr8;
  
  if (!(bool)in_CY || (bool)in_ZR) {
    *(undefined4 *)(unaff_r11 + 4) = unaff_r4;
    *(undefined4 *)(unaff_r11 + 8) = unaff_r8;
    *(int *)(unaff_r11 + 0xc) = unaff_r10;
    *(undefined4 *)(unaff_r11 + 0x10) = in_r12;
    *(BADSPACEBASE **)(unaff_r11 + 0x14) = register0x00000054;
    *(undefined4 *)(unaff_r11 + 0x18) = 0x8b06f4a;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_storelong(9,in_cr8,unaff_r6);
    func_0x0746d1c6();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    return *(undefined4 *)(unaff_r10 + 4);
  }
  if (in_NG == in_OV) {
    return *(undefined4 *)(unaff_r10 + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

