
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_085aed6c(void)

{
  int unaff_r7;
  int in_r12;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_storelong(5,in_cr11,in_r12 + 0x168);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,unaff_lr + 0x374);
    coprocessor_loadlong(0xe,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_storelong(0xc,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,in_r12 + 0x370);
  }
  else {
    coprocessor_storelong(5,in_cr10,in_r12);
  }
  if (in_CY && !in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined4 *)(*(byte *)(unaff_r7 + -0xbcd) - 0x2c);
}

