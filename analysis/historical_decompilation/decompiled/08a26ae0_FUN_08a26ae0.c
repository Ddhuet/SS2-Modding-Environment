
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a26ae0(void)

{
  undefined4 unaff_r11;
  undefined4 in_cr11;
  
  coprocessor_moveto(5,5,5,unaff_r11,in_cr11,in_cr11);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

