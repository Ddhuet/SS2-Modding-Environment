
/* WARNING: Control flow encountered bad instruction data */

void FUN_0805ac64(int param_1)

{
  undefined4 unaff_r11;
  bool in_CY;
  
  if (in_CY) {
    *(undefined4 *)(param_1 + -0x570) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

