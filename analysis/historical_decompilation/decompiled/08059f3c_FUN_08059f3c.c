
/* WARNING: Control flow encountered bad instruction data */

void FUN_08059f3c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int *unaff_r9;
  int *piVar2;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  piVar2 = unaff_r9;
  puVar1 = param_1;
  if (in_ZR) {
    puVar1 = param_1 + -0x17c;
    *param_1 = unaff_r11;
    piVar2 = (int *)((int)unaff_r9 + -0xc06);
    *unaff_r9 = (int)puVar1;
  }
  if (in_NG) {
    software_interrupt(0x3430e);
  }
  if (in_OV) {
    *puVar1 = unaff_lr;
    puVar1[-1] = unaff_r11;
    puVar1[-2] = param_2;
    puVar1[-3] = puVar1;
  }
  if (in_ZR) {
    *unaff_r5 = 0x8059f5c;
    unaff_r5[-1] = register0x00000054;
    unaff_r5[-2] = unaff_r11;
    unaff_r5[-3] = unaff_r10;
    unaff_r5[-4] = piVar2;
    unaff_r5[-5] = unaff_r8;
    unaff_r5[-6] = unaff_r7;
    unaff_r5[-7] = unaff_r6;
    unaff_r5[-8] = unaff_r5;
    unaff_r5[-9] = unaff_r4;
    unaff_r5[-10] = puVar1;
  }
  else {
    *unaff_r4 = unaff_lr;
    unaff_r4[-1] = unaff_r11;
    unaff_r4[-2] = unaff_r8;
    unaff_r4[-3] = param_2;
    unaff_r4[-4] = puVar1;
  }
  if (!in_CY) {
    *unaff_r8 = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

