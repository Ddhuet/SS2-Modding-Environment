
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08016940) */

void FUN_0801690c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr13;
  
  if (in_ZR) {
    *param_1 = unaff_r11;
    param_1 = param_1 + -0x17c;
  }
  else {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r8;
    param_1[-3] = param_4;
    param_1[-4] = param_3;
    param_1[-5] = param_2;
    param_1[-6] = param_1;
  }
  if (in_NG) {
    software_interrupt(0xf0c01);
  }
  puVar1 = param_1;
  if (!in_ZR) {
    puVar1 = param_1 + -0x3c;
    coprocessor_store(8,in_cr6,param_1);
  }
  if (in_CY) {
    *puVar1 = unaff_lr;
    puVar1[-1] = unaff_r5;
    puVar1[-2] = unaff_r4;
  }
  if (in_NG) {
    coprocessor_store(0,in_cr13,in_r12 + -0x70);
  }
  if (!in_ZR) {
    *puVar1 = unaff_r6;
    puVar1[-1] = param_4;
    coprocessor_store(0,in_cr0,unaff_r8);
    register0x00000054 = *(BADSPACEBASE **)param_4;
    param_4 = *(int *)(param_4 + -8);
  }
  if (in_CY) {
    *param_2 = unaff_lr;
    param_2[-1] = register0x00000054;
    param_2[-2] = unaff_r11;
    param_2[-3] = unaff_r4;
    param_2[-4] = param_4;
  }
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

