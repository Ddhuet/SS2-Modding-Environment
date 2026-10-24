
/* WARNING: Control flow encountered bad instruction data */

void FUN_08675f8e(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY) {
    *(undefined4 *)(param_4 - (param_3 >> 10 | param_3 << 0x16)) = unaff_r11;
  }
  if (in_ZR) {
    in_CY = (bool)((byte)(param_3 >> 0x1c) & 1);
  }
  if (!in_CY) {
    *(int *)(param_4 + -0xa9f) = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

