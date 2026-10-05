
/* WARNING: Control flow encountered bad instruction data */

void FUN_086cae8a(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r3;
  undefined4 *unaff_r5;
  undefined4 *puVar2;
  undefined4 unaff_r7;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 unaff_lr;
  char in_NG;
  char in_OV;
  undefined4 in_cr10;
  
  puVar2 = unaff_r5;
  if (in_NG != in_OV) {
    puVar2 = (undefined4 *)((int)unaff_r5 + 0x585);
    *unaff_r5 = unaff_r11;
  }
  uVar1 = unaff_r7;
  if (!(bool)in_OV) {
    unaff_r7 = *(undefined4 *)(param_2 + 0x5b2);
    uVar1 = uRam086cb44e;
  }
  uRam086cb44e = uVar1;
  if (in_NG == in_OV) {
    coprocessor_storelong(0xe,in_cr10,puVar2);
    unaff_lr = 0x86caea2;
    param_1 = func_0x0a035ffa();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_NG) {
    *(int *)(unaff_r10 + 0x55) = param_1;
    unaff_r8 = (int *)((int)unaff_r8 + 0x5a9);
    *unaff_r8 = (int)puVar2;
  }
  if (in_NG == in_OV) {
    *(undefined4 *)(param_1 + -4) = unaff_lr;
    *(undefined4 *)(param_1 + -8) = in_r12;
    *(int **)(param_1 + -0xc) = unaff_r8;
    *(undefined4 *)(param_1 + -0x10) = unaff_r7;
    *(undefined4 **)(param_1 + -0x14) = puVar2;
    *(undefined4 *)(param_1 + -0x18) = param_4;
    func_0x09b357fa();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

