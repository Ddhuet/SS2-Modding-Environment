
/* WARNING: Control flow encountered bad instruction data */

void FUN_086f1b26(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr4;
  
  if (in_ZR) {
    coprocessor_moveto(5,7,4,unaff_r11,in_cr4,in_cr4);
  }
  if (in_CY) {
    *(undefined4 *)(param_4 + -0x471) = unaff_lr;
    *(undefined1 *)(param_3 + 0x5e3) = (char)(undefined1 *)(param_3 + 0x5e3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

