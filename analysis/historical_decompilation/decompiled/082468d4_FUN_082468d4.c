
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08503004) */
/* WARNING: Removing unreachable block (ram,0x085032c8) */

void FUN_082468d4(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_function(5,0xc,5,in_cr11,in_cr5,in_cr7);
  }
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

