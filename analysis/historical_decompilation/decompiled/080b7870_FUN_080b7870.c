
/* WARNING: Control flow encountered bad instruction data */

void FUN_080b7870(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    *(undefined4 *)(param_1 + -0x500) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

