
/* WARNING: Control flow encountered bad instruction data */

void FUN_08196034(int param_1)

{
  int unaff_r10;
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    *(undefined4 *)(unaff_r10 + (param_1 >> 0xb)) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

