
/* WARNING: Control flow encountered bad instruction data */

void FUN_0816765c(void)

{
  undefined4 *unaff_r5;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    *unaff_r5 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

