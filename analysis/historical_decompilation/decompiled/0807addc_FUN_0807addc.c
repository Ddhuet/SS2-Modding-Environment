
/* WARNING: Control flow encountered bad instruction data */

void FUN_0807addc(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint unaff_r4;
  uint unaff_r7;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr4;
  
  puVar1 = param_1;
  if (in_CY) {
    puVar1 = param_1 + -0x144;
    *param_1 = unaff_r11;
  }
  if (in_ZR || in_NG != in_OV) {
    unaff_r4 = unaff_r7 & 0xc0000008;
  }
  if (in_ZR) {
    coprocessor_function(6,0,0,in_cr0,in_cr4,in_cr0);
  }
  else {
    *puVar1 = unaff_lr;
    puVar1[-1] = register0x00000054;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r11;
    puVar1[-4] = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

