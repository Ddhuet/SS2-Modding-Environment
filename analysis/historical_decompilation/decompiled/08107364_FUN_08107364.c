
/* WARNING: Control flow encountered bad instruction data */

void FUN_08107364(void)

{
  undefined4 *unaff_r8;
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    *unaff_r8 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

