
/* WARNING: Control flow encountered bad instruction data */

void FUN_08624ea6(int param_1,undefined4 param_2)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR) {
    param_1 = param_1 + 0x5c;
  }
  if (in_NG != in_OV) {
    *(int *)(param_1 + 0x10) = param_1 + 0x10;
    *(undefined4 *)(param_1 + 0x14) = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

