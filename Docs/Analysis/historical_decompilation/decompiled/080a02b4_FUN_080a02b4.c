
/* WARNING: Control flow encountered bad instruction data */

void FUN_080a02b4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  
  puVar1 = param_1;
  if (in_ZR) {
    puVar1 = param_1 + -0x17c;
    *param_1 = unaff_r11;
  }
  if (in_NG) {
    *param_4 = unaff_r11;
    param_4[-1] = unaff_r10;
    param_4[-2] = param_3;
    param_4[-3] = param_2;
    param_4[-4] = puVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

