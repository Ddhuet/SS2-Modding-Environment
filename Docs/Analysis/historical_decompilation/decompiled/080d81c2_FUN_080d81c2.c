
/* WARNING: Control flow encountered bad instruction data */

void FUN_080d81c2(undefined4 param_1,undefined4 param_2,char *param_3,char param_4)

{
  undefined4 unaff_r8;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,unaff_r8);
  }
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xdbd8d4);
  }
  *param_3 = '\x03' - (param_4 + !in_CY);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

