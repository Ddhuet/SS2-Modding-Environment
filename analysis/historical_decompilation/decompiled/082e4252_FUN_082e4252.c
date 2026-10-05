
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e4252(void)

{
  int unaff_r5;
  bool in_ZR;
  undefined4 in_cr11;
  
  if (in_ZR) {
    coprocessor_storelong(5,in_cr11,unaff_r5 + 0x308);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

