
/* WARNING: Control flow encountered bad instruction data */

void FUN_087469de(void)

{
  undefined4 in_r3;
  bool in_CY;
  undefined4 in_cr3;
  
  if (!in_CY) {
    coprocessor_load(0xc,in_cr3,in_r3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

