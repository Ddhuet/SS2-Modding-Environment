
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e99b4(void)

{
  int unaff_r7;
  char in_NG;
  char in_OV;
  undefined4 in_cr2;
  
  if (in_NG == in_OV) {
    coprocessor_storelong(8,in_cr2,unaff_r7 + 0x178);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

