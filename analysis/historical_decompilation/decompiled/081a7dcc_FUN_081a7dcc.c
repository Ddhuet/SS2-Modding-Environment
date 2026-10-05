
/* WARNING: Control flow encountered bad instruction data */

void FUN_081a7dcc(void)

{
  undefined4 unaff_r11;
  bool in_CY;
  undefined4 in_cr4;
  undefined4 in_cr15;
  
  if (!in_CY) {
    coprocessor_moveto(5,0,7,unaff_r11,in_cr4,in_cr15);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

