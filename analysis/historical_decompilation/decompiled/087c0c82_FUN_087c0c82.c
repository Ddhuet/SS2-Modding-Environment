
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_087c0c82(void)

{
  int unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    return *(undefined4 *)(unaff_r11 + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

