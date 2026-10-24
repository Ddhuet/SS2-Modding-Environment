
/* WARNING: Control flow encountered bad instruction data */

void FUN_08083202(int param_1)

{
  undefined4 unaff_r4;
  bool in_CY;
  bool in_OV;
  
  if (in_OV) {
    *(undefined4 *)(param_1 + -0x687) = unaff_r4;
  }
  if (!in_CY) {
    *(int *)(param_1 + 0x300) = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

