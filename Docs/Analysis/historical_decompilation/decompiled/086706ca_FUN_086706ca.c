
/* WARNING: Control flow encountered bad instruction data */

void FUN_086706ca(void)

{
  undefined4 unaff_r6;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    software_interrupt(0xf4bbb6);
  }
  else {
    coprocessor_store(0xd,in_cr11,unaff_r6);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

