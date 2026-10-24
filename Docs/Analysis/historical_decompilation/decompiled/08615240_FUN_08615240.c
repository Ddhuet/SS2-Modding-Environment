
/* WARNING: Control flow encountered bad instruction data */

void FUN_08615240(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    uVar1 = SignedSaturate(param_3 >> 0xb,3);
    SignedDoesSaturate(param_3 >> 0xb,3);
    *(char *)(param_3 * -0x7fff) = (char)uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

