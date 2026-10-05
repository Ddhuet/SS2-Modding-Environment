
/* WARNING: Control flow encountered bad instruction data */

void FUN_0807a9ac(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  int unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr6;
  undefined4 in_cr15;
  
  piVar1 = param_1;
  if (in_CY) {
    piVar1 = param_1 + 0x17c;
    *param_1 = (int)unaff_r11;
  }
  piVar2 = piVar1;
  if (!in_ZR) {
    piVar2 = piVar1 + -100;
    coprocessor_store(1,in_cr0,piVar1);
  }
  coprocessor_storelong2(7,in_cr15,unaff_lr + -0x218);
  if (!in_ZR) {
    coprocessor_store(0xc,in_cr1,piVar2);
  }
  coprocessor_storelong2(7,in_cr15,unaff_r10 + -0x218);
  if (in_NG) {
    *unaff_r11 = in_r12;
    unaff_r11[-1] = unaff_r11;
    unaff_r11[-2] = unaff_r10 + -0x218;
    unaff_r11[-3] = param_3;
    unaff_r11[-4] = param_2;
    coprocessor_store(8,in_cr6,unaff_r11 + -5);
  }
  if (!in_ZR) {
    coprocessor_store(0xc,in_cr1,param_3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

