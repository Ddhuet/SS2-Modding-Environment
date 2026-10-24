
/* WARNING: Control flow encountered bad instruction data */

void FUN_0812837e(void)

{
  bool in_OV;
  undefined4 in_cr7;
  
  if (in_OV) {
    coprocessor_loadlong(8,in_cr7,0x812838a);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

