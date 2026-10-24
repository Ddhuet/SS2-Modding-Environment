
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_086f3a66(void)

{
  int unaff_r6;
  int unaff_r7;
  bool in_ZR;
  undefined1 in_CY;
  bool in_OV;
  
  if (in_ZR) {
    in_CY = (undefined1)((uint)(unaff_r6 << 0x15) >> 0x1f);
  }
  if (!in_OV) {
    return *(undefined4 *)(unaff_r7 + -0x1c);
  }
  if (!(bool)in_CY) {
    in_CY = false;
  }
  if ((bool)in_CY) {
    software_interrupt(0x6b2e2d);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

