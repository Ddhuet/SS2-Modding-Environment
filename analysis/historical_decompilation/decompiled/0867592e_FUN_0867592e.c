
/* WARNING: Control flow encountered bad instruction data */

void FUN_0867592e(undefined4 param_1,undefined4 *param_2)

{
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    *param_2 = unaff_r11;
  }
  if (!in_ZR && in_NG == in_OV) {
    software_interrupt(0xf10180);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

