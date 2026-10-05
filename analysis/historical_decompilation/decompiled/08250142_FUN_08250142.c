
/* WARNING: Control flow encountered bad instruction data */

void FUN_08250142(void)

{
  undefined4 in_r3;
  undefined4 *unaff_r9;
  int unaff_r10;
  undefined4 unaff_lr;
  bool in_ZR;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_ZR) {
    coprocessor_loadlong(5,in_cr11,unaff_r10 + 0x24c);
  }
  else {
    *unaff_r9 = unaff_lr;
    coprocessor_loadlong(9,in_cr15,in_r3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

