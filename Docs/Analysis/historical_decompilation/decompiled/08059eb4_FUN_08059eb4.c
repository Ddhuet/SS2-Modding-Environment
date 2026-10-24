
/* WARNING: Control flow encountered bad instruction data */

void FUN_08059eb4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 unaff_r11;
  bool in_CY;
  
  if (in_CY) {
    *(undefined4 *)(param_1 + -0x5f0) = unaff_r11;
    *(undefined4 *)(param_2 + param_1 * -0x100) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

