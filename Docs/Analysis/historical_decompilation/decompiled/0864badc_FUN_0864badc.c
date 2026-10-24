
/* WARNING: Control flow encountered bad instruction data */

void FUN_0864badc(undefined4 param_1)

{
  int unaff_r9;
  undefined1 in_ZR;
  undefined1 in_CY;
  
  if ((bool)in_ZR) {
    param_1 = func_0x09d39120();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *(undefined4 *)(unaff_r9 + 0xca3) = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

