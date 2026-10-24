
/* WARNING: Control flow encountered bad instruction data */

void FUN_087478ce(undefined4 param_1,int param_2)

{
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  if (in_CY && !in_ZR) {
    coprocessor_storelong(5,in_cr11,param_2 + 0x244);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

