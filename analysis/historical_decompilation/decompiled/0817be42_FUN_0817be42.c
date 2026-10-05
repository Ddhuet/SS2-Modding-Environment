
/* WARNING: Control flow encountered bad instruction data */

void FUN_0817be42(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined1 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_ZR) {
    *param_4 = param_1;
  }
  if (!in_CY) {
    *(undefined1 *)(param_3 + 0x1dd) = in_r12;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

