
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f89374(void)

{
  undefined4 in_r3;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r11;
  undefined4 in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  coprocessor_moveto(5,7,2,unaff_r11,in_cr12,in_cr5);
  coprocessor_function2(4,0xc,2,in_cr10,in_cr12,in_cr4);
  coprocessor_function2(4,0xe,2,in_cr10,in_cr12,in_cr4);
  if (!in_ZR && in_NG == (bool)in_OV) {
    coprocessor_function(4,0xc,2,in_cr10,in_cr12,in_cr4);
  }
  if (in_NG) {
    coprocessor_storelong(4,in_cr10,in_r12);
  }
  if (!in_CY || in_ZR) {
    *unaff_r8 = in_r3;
    unaff_r8[1] = unaff_r7;
    unaff_r8[2] = unaff_r11;
    unaff_r8[3] = 0x8f89390;
  }
  coprocessor_storelong(8,in_cr9,unaff_r11);
  if (!in_ZR && in_NG == (bool)in_OV) {
    coprocessor_function(0xc,0xc,6,in_cr12,in_cr14,in_cr14);
    coprocessor_function(0xc,0xe,7,in_cr14,in_cr14,in_cr14);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

