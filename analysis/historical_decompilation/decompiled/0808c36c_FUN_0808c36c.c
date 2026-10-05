
/* WARNING: Control flow encountered bad instruction data */

void FUN_0808c36c(uint param_1,int param_2,int param_3,int *param_4)

{
  uint unaff_r5;
  int unaff_r7;
  int unaff_r8;
  int *unaff_r9;
  int unaff_r11;
  int in_r12;
  undefined4 unaff_pc;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr5;
  undefined4 in_cr15;
  
  if (in_NG != (bool)in_OV) {
    unaff_r11 = param_3 + (param_1 >> (unaff_r5 & 0x1f) | param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  coprocessor_moveto(7,6,3,unaff_pc,in_cr0,in_cr5);
  if (!in_ZR) {
    *unaff_r9 = unaff_r7;
    unaff_r9[-1] = param_1;
    *unaff_r9 = unaff_r8;
    unaff_r9[-1] = (int)param_4;
  }
  if (in_NG) {
    *param_4 = unaff_r7;
    param_4[-1] = (int)param_4;
    param_4[-2] = param_1;
    *param_4 = in_r12;
    param_4[-1] = unaff_r11;
    param_4[-2] = (int)param_4;
    param_4[-3] = param_3;
    param_4[-4] = param_2;
  }
  coprocessor_store2(7,in_cr15,unaff_r8 + -0x1e8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

