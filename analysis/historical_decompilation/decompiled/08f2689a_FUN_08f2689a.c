
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f2689a(void)

{
  undefined4 in_r12;
  bool in_OV;
  undefined4 in_cr11;
  
  if (in_OV) {
    coprocessor_storelong(5,in_cr11,in_r12);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

