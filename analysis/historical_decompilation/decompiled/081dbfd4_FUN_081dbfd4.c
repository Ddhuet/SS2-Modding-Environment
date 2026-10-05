
/* WARNING: Control flow encountered bad instruction data */

void FUN_081dbfd4(void)

{
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_NG == in_OV) {
    coprocessor_moveto(5,5,5,unaff_r11,in_cr15,in_cr14);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

