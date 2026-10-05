
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_081ef47c(void)

{
  int unaff_r7;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    return *(undefined8 *)(unaff_r7 + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

