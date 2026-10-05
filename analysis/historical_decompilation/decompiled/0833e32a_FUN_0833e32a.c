
/* WARNING: Control flow encountered bad instruction data */

void FUN_0833e32a(void)

{
  int unaff_r6;
  undefined1 in_CY;
  undefined4 in_cr2;
  
  func_0x08febb10();
  if (!(bool)in_CY) {
    coprocessor_storelong(8,in_cr2,unaff_r6 + 0xc0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

