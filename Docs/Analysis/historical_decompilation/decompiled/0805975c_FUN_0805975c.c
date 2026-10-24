
/* WARNING: Control flow encountered bad instruction data */

void FUN_0805975c(undefined4 param_1,int param_2)

{
  undefined4 unaff_r4;
  int in_r12;
  bool in_CY;
  
  if (in_CY) {
    *(undefined4 *)(param_2 + in_r12 * -0x10000000) = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

