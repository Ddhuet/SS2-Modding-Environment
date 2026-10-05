
/* WARNING: Control flow encountered bad instruction data */

void FUN_0811c644(void)

{
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr12;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_moveto(5,6,5,unaff_r11,in_cr0,in_cr12);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

