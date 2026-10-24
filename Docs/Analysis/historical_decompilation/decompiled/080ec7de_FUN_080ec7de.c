
/* WARNING: Control flow encountered bad instruction data */

void FUN_080ec7de(void)

{
  int unaff_r6;
  char in_NG;
  char in_OV;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    return;
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(6,in_cr13,unaff_r6 + 0x394);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

