
/* WARNING: Control flow encountered bad instruction data */

void FUN_0856913c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  int unaff_lr;
  char in_NG;
  char in_OV;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    unaff_lr = 0x8569140;
    uVar1 = func_0x06f9676c();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG == in_OV) {
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    coprocessor_storelong(9,in_cr13,&stack0x00000000);
    coprocessor_loadlong(0xc,in_cr12,&stack0x00000000);
    if (in_NG != in_OV) {
      *(undefined8 *)(unaff_lr + 4) = uVar1;
      *(undefined4 *)(unaff_lr + 0xc) = param_3;
      *(undefined4 *)(unaff_lr + 0x10) = param_4;
      *(undefined4 *)(unaff_lr + 0x14) = unaff_r4;
      *(undefined4 *)(unaff_lr + 0x18) = unaff_r5;
      *(undefined4 *)(unaff_lr + 0x1c) = unaff_r6;
      *(undefined4 *)(unaff_lr + 0x20) = unaff_r7;
      *(undefined4 *)(unaff_lr + 0x24) = unaff_r8;
      *(undefined4 *)(unaff_lr + 0x28) = unaff_r9;
      *(undefined4 *)(unaff_lr + 0x2c) = unaff_r10;
      *(undefined4 *)(unaff_lr + 0x30) = unaff_r11;
      *(undefined4 *)(unaff_lr + 0x34) = in_r12;
      *(BADSPACEBASE **)(unaff_lr + 0x38) = register0x00000054;
      *(int *)(unaff_lr + 0x3c) = unaff_lr;
      *(undefined4 *)(unaff_lr + 0x40) = 0x8569158;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

