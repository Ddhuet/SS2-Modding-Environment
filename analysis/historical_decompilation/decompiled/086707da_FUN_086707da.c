
/* WARNING: Control flow encountered bad instruction data */

void FUN_086707da(void)

{
  undefined4 unaff_r7;
  undefined4 unaff_r10;
  int unaff_r11;
  bool in_NG;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr5;
  undefined4 in_cr15;
  
  if (in_NG != (bool)in_OV) {
    *(char *)(unaff_r11 + -0x5fb) = (char)unaff_r11;
  }
  if (!in_NG) {
    coprocessor_moveto(7,0,2,unaff_r10,in_cr0,in_cr15);
    coprocessor_store(0xd,in_cr5,unaff_r7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

