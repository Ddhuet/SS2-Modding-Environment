
/* WARNING: Control flow encountered bad instruction data */

void FUN_0810743e(int param_1)

{
  undefined2 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr12;
  
  if (in_ZR || in_NG != in_OV) {
    *(undefined2 *)(param_1 + 0x51) = unaff_r11;
  }
  coprocessor_function2(7,1,2,in_cr3,in_cr12,in_cr12);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

