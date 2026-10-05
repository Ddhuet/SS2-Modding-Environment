
/* WARNING: Control flow encountered bad instruction data */

void FUN_081b6896(undefined4 param_1)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  if (in_CY) {
    unaff_r11 = unaff_r11 + (int)(short)unaff_r4 * (int)(short)unaff_r5 +
                (int)(short)((uint)unaff_r5 >> 0x10) * (int)(short)((uint)unaff_r4 >> 0x10);
  }
  if (!in_ZR) {
    coprocessor_load(0xd,in_cr10,unaff_r9);
  }
  coprocessor_load2(0xd,in_cr2,unaff_r4 + 0x3b4);
  if (in_NG == in_OV) {
    coprocessor_moveto(5,0,0,param_1,in_cr8,in_cr14);
  }
  *(undefined4 *)(unaff_r11 + -0x1d3) = unaff_r5;
  coprocessor_function(4,0,5,in_cr8,in_cr5,in_cr11);
  if (in_CY) {
    coprocessor_storelong(2,in_cr12,unaff_r10);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

