
/* WARNING: Control flow encountered bad instruction data */

void FUN_081f82c4(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined1 unaff_r4;
  uint *unaff_r9;
  int unaff_r11;
  int in_r12;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined4 in_s9;
  
  if (!in_ZR && in_NG == in_OV) {
    unaff_r11 = *(int *)(unaff_lr + ((uint)&stack0x00000000 >> 0xb));
  }
  coprocessor_storelong(9,in_cr13,param_4);
  if (!in_ZR) {
    *unaff_r9 = param_1;
    unaff_r9[1] = param_2;
  }
  if (in_CY) {
    *(uint *)(param_1 - 0xc16) = param_2;
  }
  else {
    in_NG = (int)(param_1 ^ 0xa80) < 0;
    coprocessor_load(8,in_cr3,unaff_r11 + -0xd4);
  }
  if ((bool)in_NG) {
    *(undefined1 *)(param_4 + 0x101) = unaff_r4;
    *(undefined4 *)(in_r12 + -0x120) = in_s9;
    coprocessor_function(0xf,4,2,in_cr4,in_cr15,in_cr14);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

