
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d7493a(void)

{
  int unaff_r11;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  undefined8 in_d28;
  
  if (in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,&stack0x00000000);
    *(undefined8 *)(unaff_r11 + 0x2ec) = in_d28;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

