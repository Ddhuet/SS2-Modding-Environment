
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e4b08(void)

{
  undefined1 in_r3;
  int unaff_r10;
  bool in_ZR;
  bool in_CY;
  undefined1 in_stack_00000004;
  int in_stack_00000014;
  
  if (!in_CY) {
    unaff_r10 = in_stack_00000014;
    in_r3 = in_stack_00000004;
  }
  if (!in_ZR) {
    *(undefined1 *)(unaff_r10 + -0xe4b) = in_r3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

