
/* WARNING: Control flow encountered bad instruction data */

void FUN_088255fc(void)

{
  undefined1 *unaff_r4;
  undefined1 unaff_r5;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    *unaff_r4 = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

