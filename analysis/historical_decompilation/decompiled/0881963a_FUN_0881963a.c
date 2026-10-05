
/* WARNING: Control flow encountered bad instruction data */

void FUN_0881963a(void)

{
  undefined1 *unaff_r4;
  undefined1 unaff_r5;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr13;
  
  if (in_NG) {
    *unaff_r4 = unaff_r5;
    unaff_r4[-0x554] = (char)(unaff_r4 + -0x554) + -0x54;
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_loadlong(4,in_cr4,&stack0x00000110);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

