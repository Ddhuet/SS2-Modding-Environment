
/* WARNING: Control flow encountered bad instruction data */

void FUN_080b5fd4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr1;
  undefined4 in_stack_00000000;
  
  if (in_NG) {
    in_stack_00000000 = 0x80b5fdc;
  }
  if (in_CY) {
    *param_1 = unaff_lr;
    param_1[-1] = register0x00000054;
    param_1[-2] = unaff_r11;
    *(BADSPACEBASE **)((int)param_1 + -0x13) = register0x00000054;
  }
  puVar1 = param_1;
  if (!in_ZR) {
    puVar1 = param_1 + -4;
    coprocessor_store(0xc,in_cr1,param_1);
  }
  func_0x091f3d14(puVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

