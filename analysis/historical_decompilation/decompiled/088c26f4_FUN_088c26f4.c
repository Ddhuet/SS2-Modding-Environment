
/* WARNING: Control flow encountered bad instruction data */

void FUN_088c26f4(void)

{
  undefined4 unaff_r11;
  undefined4 in_cr4;
  undefined4 in_cr13;
  
  coprocessor_moveto(5,6,3,unaff_r11,in_cr13,in_cr4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

