
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08e493a6(void)

{
  int unaff_r9;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    return *(undefined4 *)(unaff_r9 + 4);
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

