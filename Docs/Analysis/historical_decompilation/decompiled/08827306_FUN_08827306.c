
/* WARNING: Control flow encountered bad instruction data */

void FUN_08827306(void)

{
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    if (!in_ZR && in_NG == in_OV) {
      coprocessor_load(0xc,in_cr12,in_r12);
    }
    coprocessor_function(0xb,0xc,6,in_cr14,in_cr13,in_cr13);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

