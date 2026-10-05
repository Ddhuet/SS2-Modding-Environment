
/* WARNING: Control flow encountered bad instruction data */

void FUN_086247d8(undefined4 param_1,int *param_2)

{
  int unaff_r5;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *param_2 = unaff_r5 + -0x2c000501;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

