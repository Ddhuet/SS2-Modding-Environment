
/* WARNING: Control flow encountered bad instruction data */

void FUN_08313442(void)

{
  int unaff_r6;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,unaff_r6 + -0x58);
  }
  if (!in_CY) {
    coprocessor_function(0xe,0xb,7,in_cr3,in_cr1,in_cr13);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

