
/* WARNING: Control flow encountered bad instruction data */

void FUN_086fbaac(int param_1)

{
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  if (in_CY && !in_ZR) {
    coprocessor_loadlong(5,in_cr11,param_1 + 0x200);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

