
/* WARNING: Control flow encountered bad instruction data */

void FUN_086ec1e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr13;
  
  puVar1 = param_1;
  if (in_ZR) {
    puVar1 = (undefined4 *)((int)param_1 * -0x3ff);
    *param_1 = unaff_r11;
  }
  if (!in_ZR && in_NG == in_OV) {
    if (in_ZR || in_NG != in_OV) {
      coprocessor_store(0xb,in_cr13,puVar1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

