
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e187a8(void)

{
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,unaff_r7);
    coprocessor_storelong(5,in_cr12,unaff_r4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

