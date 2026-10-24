
/* WARNING: Control flow encountered bad instruction data */

void FUN_08603a70(int param_1)

{
  undefined4 unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    *(undefined4 *)(param_1 + -0x5af) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

