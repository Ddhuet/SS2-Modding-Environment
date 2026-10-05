
/* WARNING: Control flow encountered bad instruction data */

void FUN_08289e88(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined1 *param_4)

{
  int unaff_r4;
  undefined1 unaff_r11;
  bool in_NG;
  bool in_OV;
  undefined4 in_cr2;
  undefined4 in_cr6;
  undefined4 in_cr11;
  
  *(undefined1 *)(unaff_r4 + 0x5aa) = unaff_r11;
  if (!in_NG) {
    *param_4 = param_3;
  }
  if (!in_OV) {
    coprocessor_function(0xf,7,3,in_cr6,in_cr11,in_cr2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

