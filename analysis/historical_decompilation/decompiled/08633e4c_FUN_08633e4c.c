
/* WARNING: Control flow encountered bad instruction data */

void FUN_08633e4c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 unaff_lr;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    *param_2 = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

