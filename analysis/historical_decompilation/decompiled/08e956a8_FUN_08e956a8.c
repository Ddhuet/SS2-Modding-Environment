
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e956a8(void)

{
  undefined4 *in_r3;
  undefined4 unaff_r11;
  bool in_OV;
  
  if (in_OV) {
    *in_r3 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

