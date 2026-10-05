
/* WARNING: Control flow encountered bad instruction data */

void FUN_08192512(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 unaff_r4;
  uint unaff_r7;
  int unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_function(5,0xc,5,in_cr11,in_cr0,in_cr13);
  }
  if (in_ZR) {
    coprocessor_loadlong(0xe,in_cr14,0x8192892);
  }
  if (!in_CY) {
    unaff_r11 = *(int *)(param_3 + -4);
    unaff_r4 = *(undefined4 *)(param_3 + -8);
    param_4 = *(int *)(param_3 + -0xc);
  }
  if (in_NG) {
    coprocessor_moveto(3,2,1,unaff_r4,in_cr8,in_cr14);
  }
  if (in_OV && SBORROW4(unaff_r11,param_4 >> (unaff_r7 & 0xff))) {
    software_interrupt(0x6b6865);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

