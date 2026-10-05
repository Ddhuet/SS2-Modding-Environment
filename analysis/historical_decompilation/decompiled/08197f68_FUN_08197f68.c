
/* WARNING: Control flow encountered bad instruction data */

void FUN_08197f68(void)

{
  int unaff_r9;
  undefined2 unaff_r11;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (in_NG != in_OV) {
    coprocessor_function(5,8,7,in_cr11,in_cr12,in_cr12);
  }
  *(undefined2 *)(unaff_r9 + 0x6d) = unaff_r11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

