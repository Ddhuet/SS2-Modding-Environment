
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f7126(void)

{
  int unaff_r6;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_CY && !in_ZR) {
    coprocessor_store(5,in_cr11,unaff_r6 + 0x2f4);
  }
  if (in_NG == in_OV) {
    coprocessor_function(0xe,9,4,in_cr8,in_cr14,in_cr3);
  }
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xd5c9bc);
  }
  software_interrupt(0xece9e4);
  coprocessor_movefromRt(7,7,7,in_cr11,in_cr3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

