
/* WARNING: Control flow encountered bad instruction data */

void FUN_0855050a(void)

{
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  
  if (in_NG != in_OV) {
    coprocessor_moveto(5,7,5,unaff_r11,in_cr7,in_cr5);
    coprocessor_moveto(0xd,6,4,unaff_r9,in_cr6,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

