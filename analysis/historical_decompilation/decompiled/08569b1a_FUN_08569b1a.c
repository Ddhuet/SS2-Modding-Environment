
/* WARNING: Control flow encountered bad instruction data */

void FUN_08569b1a(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r10;
  bool in_CY;
  
  if (in_CY) {
    *(undefined4 *)(param_3 + -0x584) = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

