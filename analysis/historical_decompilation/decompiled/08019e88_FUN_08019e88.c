
/* WARNING: Control flow encountered bad instruction data */

void FUN_08019e88(undefined4 param_1)

{
  undefined4 *unaff_r9;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    software_interrupt(0x5b5f0);
  }
  if (in_ZR) {
    *unaff_r9 = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

