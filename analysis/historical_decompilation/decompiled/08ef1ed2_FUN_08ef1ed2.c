
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ef1ed2(undefined4 param_1,int param_2)

{
  undefined4 unaff_r11;
  bool in_NG;
  
  if (in_NG) {
    *(undefined4 *)(param_2 + -0x557) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

