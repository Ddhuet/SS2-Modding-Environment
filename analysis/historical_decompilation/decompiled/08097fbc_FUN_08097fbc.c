
/* WARNING: Control flow encountered bad instruction data */

void FUN_08097fbc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  
  puVar1 = param_1;
  if (in_ZR) {
    puVar1 = param_1 + -0x15c;
    *param_1 = unaff_r11;
  }
  if (in_NG) {
    coprocessor_load(0xc,in_cr0,param_4 + -0x18);
  }
  if (in_CY) {
    *puVar1 = unaff_lr;
    puVar1[-1] = register0x00000054;
    puVar1[-2] = unaff_r11;
    puVar1[-3] = unaff_r5;
    puVar1[-4] = param_4;
  }
  if (in_OV) {
    *unaff_r4 = param_2;
    unaff_r4[1] = param_3;
    unaff_r4[2] = param_4;
    unaff_r4[3] = unaff_r4;
    unaff_r4[4] = in_r12;
    unaff_r4[5] = unaff_lr;
    unaff_r4[6] = 0x8097fd0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

