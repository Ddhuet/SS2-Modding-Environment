
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825265a(void)

{
  int unaff_r5;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_load(5,in_cr11,unaff_r5 + 0x110);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

