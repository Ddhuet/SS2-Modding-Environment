
/* WARNING: Control flow encountered bad instruction data */

void FUN_086eb51c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_r11;
  bool in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  puVar1 = param_1;
  if (in_NG != (bool)in_OV) {
    puVar1 = (undefined4 *)((int)param_1 * -0x3ff);
    *param_1 = unaff_r11;
  }
  if (!in_NG) {
    coprocessor_loadlong(7,in_cr11,puVar1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

