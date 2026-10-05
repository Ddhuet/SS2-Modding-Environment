
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819fdf2(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int unaff_r7;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr6;
  
  if (!in_ZR && in_NG == (bool)in_OV) {
    software_interrupt(0xb5b5b5);
  }
  if (!in_NG) {
    *(undefined1 *)(unaff_r7 + -0xa0c) = param_4;
  }
  coprocessor_load2(5,in_cr6,param_2 + -0x1b8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

