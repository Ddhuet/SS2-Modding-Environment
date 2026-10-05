
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0827f416(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_stack_00000000;
  
  if (in_ZR || in_NG != in_OV) {
    return in_stack_00000000;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

