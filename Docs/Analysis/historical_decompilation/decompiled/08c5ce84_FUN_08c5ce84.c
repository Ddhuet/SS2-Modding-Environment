
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c5ce84(void)

{
  undefined4 unaff_r11;
  undefined4 in_cr0;
  undefined4 in_cr11;
  
  coprocessor_moveto(5,7,1,unaff_r11,in_cr11,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

