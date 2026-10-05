
/* WARNING: Control flow encountered bad instruction data */

void FUN_08192c5c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 unaff_r7;
  int unaff_r11;
  undefined1 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(3,in_cr13,unaff_r7);
  }
  else {
    *(char *)(param_3 + 0xfbc) = (char)unaff_r11;
    coprocessor_storelong(9,in_cr12,unaff_r11 + 0x31c);
  }
  *(undefined1 *)(param_4 + 0x1e0) = unaff_lr;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

