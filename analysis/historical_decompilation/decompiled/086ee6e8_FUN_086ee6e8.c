
/* WARNING: Control flow encountered bad instruction data */

void FUN_086ee6e8(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 unaff_r11;
  int in_r12;
  char in_NG;
  bool in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(param_2 + 0x5f1) = unaff_r11;
  }
  if (in_CY) {
    *(undefined4 *)(in_r12 + 0x7f0) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

