
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f88d74(void)

{
  undefined4 unaff_r11;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  coprocessor_moveto(5,7,2,unaff_r11,in_cr12,in_cr5);
  coprocessor_function2(4,0xe,2,in_cr10,in_cr14,in_cr4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

