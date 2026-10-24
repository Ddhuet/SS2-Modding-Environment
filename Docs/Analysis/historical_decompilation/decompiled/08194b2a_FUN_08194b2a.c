
/* WARNING: Control flow encountered bad instruction data */

void FUN_08194b2a(void)

{
  undefined4 *unaff_r7;
  undefined4 unaff_r10;
  char in_NG;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    software_interrupt(0xb2b5bc);
    coprocessor_function(0xc,10,5,in_cr10,in_cr14,in_cr14);
    *unaff_r7 = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

