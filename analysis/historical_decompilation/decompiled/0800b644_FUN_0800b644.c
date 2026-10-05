
/* WARNING: Control flow encountered bad instruction data */

void FUN_0800b644(undefined4 param_1)

{
  undefined4 *unaff_r4;
  bool in_ZR;
  
  if (in_ZR) {
    *unaff_r4 = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

