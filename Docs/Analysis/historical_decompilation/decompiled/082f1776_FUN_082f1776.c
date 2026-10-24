
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f1776(undefined4 param_1,int param_2,undefined1 param_3)

{
  undefined4 *unaff_r10;
  undefined4 unaff_r11;
  undefined1 *in_r12;
  bool in_NG;
  bool in_ZR;
  
  if (in_ZR) {
    *unaff_r10 = unaff_r11;
    *(undefined4 *)(param_2 + -0x401) = param_1;
  }
  if (!in_NG) {
    *in_r12 = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

