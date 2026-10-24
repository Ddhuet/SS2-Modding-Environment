
/* WARNING: Control flow encountered bad instruction data */

void FUN_0868e43c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  
  if (in_NG != in_OV) {
    puVar1 = (undefined4 *)((int)param_1 * -0x3ff);
    *param_1 = unaff_r11;
    *puVar1 = 0x868e448;
    puVar1[-1] = register0x00000054;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r10;
    puVar1[-4] = unaff_r9;
    puVar1[-5] = unaff_r8;
    puVar1[-6] = unaff_r5;
    param_1 = puVar1 + -7;
  }
  if (in_CY) {
    in_OV = SCARRY4(unaff_r9,(int)param_1) != SCARRY4(unaff_r9 + (int)param_1,1);
    in_NG = (int)param_1 + unaff_r9 + 1 < 0;
  }
  if (in_NG != in_OV) {
    coprocessor_store(1,in_cr0,param_1 + -0xbc);
    software_interrupt(0x20be20);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

