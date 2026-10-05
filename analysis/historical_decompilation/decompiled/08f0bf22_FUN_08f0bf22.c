
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f0bf22(void)

{
  int unaff_r7;
  int unaff_r11;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if ((bool)in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,&stack0x00000160);
  }
  coprocessor_loadlong(2,in_cr8,&stack0x00000220);
  if (in_ZR || (bool)in_NG != in_OV) {
    coprocessor_loadlong(0xf,in_cr15,unaff_r11 + 0x3f8);
    coprocessor_loadlong(0xf,in_cr15,unaff_r11 + 0x3f8);
    coprocessor_loadlong(0xf,in_cr15,unaff_r11 + 0x3f8);
    coprocessor_loadlong(0xf,in_cr15,unaff_r11 + 0x3f8);
    coprocessor_load(0xf,in_cr15,unaff_r11 + 0x3f8);
    coprocessor_load(0xf,in_cr15,unaff_r11 + 0x7f0);
    coprocessor_load(0xf,in_cr15,unaff_r11 + 0xba8);
  }
  if (!in_OV) {
    *(undefined4 *)(unaff_r7 + ((uint)&stack0x00000000 >> 0x1f | (int)&stack0x00000000 << 1)) =
         unaff_pc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

