
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c1586(void)

{
  int unaff_r6;
  int unaff_r10;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr6;
  
  if (in_CY && !in_ZR) {
    *(undefined4 *)(unaff_r6 + 0x5c6) = unaff_r11;
    return;
  }
  if (in_NG != in_OV) {
    if (in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!in_NG) {
      coprocessor_loadlong(0xc,in_cr6,unaff_r10 + -0x18c);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

