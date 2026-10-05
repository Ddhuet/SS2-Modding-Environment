
/* WARNING: Control flow encountered bad instruction data */

void FUN_08682daa(int param_1,int param_2)

{
  undefined1 unaff_r9;
  bool in_OV;
  
  if (in_OV) {
    *(undefined1 *)(param_2 + param_1 * -0x80000000) = unaff_r9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

