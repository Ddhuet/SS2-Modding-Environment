
/* WARNING: Control flow encountered bad instruction data */

void FUN_087b643a(void)

{
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  undefined4 *unaff_r10;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  if (in_NG) {
    coprocessor_loadlong(5,in_cr11,unaff_r8);
  }
  if (in_CY && !in_ZR) {
    *unaff_r10 = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

