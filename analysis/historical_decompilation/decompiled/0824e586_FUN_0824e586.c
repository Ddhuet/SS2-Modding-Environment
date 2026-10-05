
/* WARNING: Control flow encountered bad instruction data */

void FUN_0824e586(void)

{
  int unaff_r5;
  int unaff_r6;
  int unaff_r9;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr7;
  
  if (in_OV) {
    unaff_r6 = (int)((uint6)((int6)unaff_r9 * (int6)(short)unaff_r5) >> 0x10) + unaff_r11;
  }
  if ((bool)in_NG != in_OV) {
    software_interrupt(0xc20266);
  }
  if (!in_ZR && (bool)in_NG == in_OV) {
    coprocessor_loadlong(0xc,in_cr0,unaff_r6 + 0x140);
  }
  if (in_CY) {
    coprocessor_storelong(0,in_cr7,unaff_r5 + -0x4c);
  }
  if (!in_ZR && (bool)in_NG == in_OV) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

