
/* WARNING: Control flow encountered bad instruction data */

void FUN_081deb16(undefined4 param_1,int param_2)

{
  undefined2 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *(undefined2 *)(param_2 + 0x5a) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

