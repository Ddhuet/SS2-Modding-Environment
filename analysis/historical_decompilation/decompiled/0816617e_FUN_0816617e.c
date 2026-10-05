
/* WARNING: Control flow encountered bad instruction data */

void FUN_0816617e(void)

{
  int unaff_r6;
  undefined4 unaff_r11;
  int in_r12;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(in_r12 + (unaff_r6 >> 0xb)) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

