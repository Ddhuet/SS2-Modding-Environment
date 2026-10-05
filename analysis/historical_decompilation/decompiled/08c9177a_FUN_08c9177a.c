
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c9177a(void)

{
  int unaff_r9;
  int unaff_r11;
  undefined4 unaff_lr;
  bool in_OV;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr11;
  
  if (in_OV) {
    coprocessor_load(5,in_cr11,unaff_r9 + 0x158);
    coprocessor_load(7,in_cr5,unaff_r11 + 0x1d8);
    coprocessor_storelong(5,in_cr7,unaff_lr);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

