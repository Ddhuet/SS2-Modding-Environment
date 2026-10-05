
/* WARNING: Control flow encountered bad instruction data */

void FUN_08633998(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int extraout_r2;
  undefined4 unaff_r11;
  int extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr2;
  
  puVar1 = param_3;
  if (in_NG != in_OV) {
    puVar1 = (undefined4 *)((int)param_3 + ((uint)param_3 >> 0xb));
    *param_3 = unaff_r11;
  }
  func_0x08aecc2e(param_1,param_2,puVar1);
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_store(6,in_cr2,extraout_r2 + 0x3a8);
  }
  if (in_NG != in_OV) {
    in_ZR = extraout_r12 == !(bool)in_CY + 0xb000000d;
  }
  if (!(bool)in_ZR) {
    software_interrupt(0xdeb2dd);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

