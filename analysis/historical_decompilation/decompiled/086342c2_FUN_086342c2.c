
/* WARNING: Control flow encountered bad instruction data */

void FUN_086342c2(void)

{
  undefined4 *unaff_r6;
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *unaff_r6 = unaff_r11;
  }
  func_0x073b32ac();
  func_0x073f31b6();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

