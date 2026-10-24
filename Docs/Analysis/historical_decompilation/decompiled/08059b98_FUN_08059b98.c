
/* WARNING: Control flow encountered bad instruction data */

void FUN_08059b98(int param_1,int param_2,int param_3)

{
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr15;
  
  if (in_ZR) {
    unaff_r11 = 0;
  }
  if (in_CY) {
    param_1 = 0x209;
  }
  coprocessor_store2(0,in_cr15,param_3 + -0x68);
  if (in_NG) {
    *(undefined4 *)(param_1 + param_2 * -0x1000000) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

