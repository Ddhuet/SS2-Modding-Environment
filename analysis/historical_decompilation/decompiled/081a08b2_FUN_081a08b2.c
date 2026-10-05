
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_081a08b2(int param_1,int param_2,int param_3)

{
  uint unaff_r9;
  undefined4 unaff_r11;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr4;
  undefined4 in_cr8;
  
  if (!in_CY || in_ZR) {
    coprocessor_moveto(5,5,5,unaff_r11,in_cr8,in_cr8);
    param_2 = param_2 + (unaff_r9 >> 0xd);
  }
  if (in_CY) {
    return CONCAT44(param_2,param_1 + 0x28);
  }
  software_interrupt(0xdf1949);
  coprocessor_storelong(6,in_cr4,param_3 + -0x84);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

