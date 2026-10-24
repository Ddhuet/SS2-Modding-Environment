
/* WARNING: Control flow encountered bad instruction data */

void FUN_0805852c(uint param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  uint unaff_r5;
  int unaff_r8;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  bool in_NG;
  bool in_OV;
  undefined4 in_cr6;
  
  if (in_NG != in_OV) {
    unaff_r11 = param_2 + (param_1 >> (unaff_r5 & 0x1f) | param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  if (in_NG) {
    *param_4 = in_r12;
    param_4[-1] = unaff_r11;
    param_4[-2] = unaff_r10;
    param_4[-3] = param_3;
    param_4[-4] = param_2;
  }
  if (in_OV) {
    coprocessor_storelong(8,in_cr6,unaff_r8 + -4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

