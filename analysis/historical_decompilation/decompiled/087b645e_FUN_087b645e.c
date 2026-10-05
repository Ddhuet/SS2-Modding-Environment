
/* WARNING: Control flow encountered bad instruction data */

void FUN_087b645e(void)

{
  undefined1 *unaff_r4;
  char *unaff_r5;
  byte *unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined1 unaff_r10;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined4 unaff_s24;
  
  if ((bool)in_OV) {
    func_0x0a1239f6();
  }
  if ((bool)in_NG) {
    *(char *)(unaff_r9 + -0xaa4) = (char)unaff_r4;
  }
  else {
    unaff_r4 = (undefined1 *)(uint)*unaff_r6;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *(char **)(unaff_r4 + 0x745) = unaff_r5;
  }
  if (in_NG == in_OV) {
    *(undefined4 *)(unaff_r8 + -0x330) = unaff_s24;
  }
  if (!(bool)in_OV) {
    *unaff_r5 = (char)unaff_r5 + -0x66;
  }
  if (!(bool)in_NG) {
    *unaff_r4 = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

