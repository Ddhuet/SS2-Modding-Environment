
/* WARNING: Control flow encountered bad instruction data */

void FUN_081947c2(int param_1,undefined4 param_2)

{
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  int iVar1;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    software_interrupt(0xb9b5b4);
    iVar1 = unaff_r8;
  }
  else {
    iVar1 = unaff_r8 + 0x2c8;
    coprocessor_load(0xe,in_cr11,unaff_r8);
  }
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = unaff_r6;
  *(undefined4 *)(param_1 + 0xc) = unaff_r7;
  *(int *)(param_1 + 0x10) = iVar1;
  *(undefined4 *)(param_1 + 0x14) = unaff_r10;
  *(undefined4 *)(param_1 + 0x18) = unaff_r11;
  *(int *)(param_1 + 0x1c) = in_r12;
  *(undefined4 *)(param_1 + 0x20) = unaff_lr;
  *(undefined4 *)(param_1 + 0x24) = 0x81947d2;
  if (in_NG == in_OV) {
    software_interrupt(0xa0b3ec);
  }
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xe5f619);
  if (in_CY) {
    coprocessor_storelong(0xf,in_cr7,in_r12 + -0x1cc);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

