
/* WARNING: Control flow encountered bad instruction data */

void FUN_087d3740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 extraout_r3;
  undefined1 extraout_r3_00;
  undefined1 *unaff_r4;
  undefined4 unaff_r6;
  undefined8 *unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (in_NG == in_OV) {
    unaff_lr = 0x87d3744;
    uVar1 = func_0x076c0d38();
    param_4 = extraout_r3;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x87d3748;
    uVar1 = func_0x076c2138();
    param_4 = extraout_r3_00;
  }
  if ((bool)in_NG) {
    *unaff_r4 = param_4;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *unaff_r8 = uVar1;
    *(undefined4 *)(unaff_r8 + 1) = unaff_r6;
    *(undefined8 **)((int)unaff_r8 + 0xc) = unaff_r8;
    *(undefined4 *)(unaff_r8 + 2) = unaff_r10;
    *(BADSPACEBASE **)((int)unaff_r8 + 0x14) = register0x00000054;
    *(undefined4 *)(unaff_r8 + 3) = unaff_lr;
  }
  if (in_NG == in_OV) {
    if ((bool)in_ZR || in_NG != in_OV) {
      func_0x072c18b4();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

