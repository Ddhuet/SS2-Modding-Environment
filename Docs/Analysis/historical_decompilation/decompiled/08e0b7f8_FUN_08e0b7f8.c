
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e0b7f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined8 *unaff_r7;
  undefined4 unaff_r8;
  int *unaff_r9;
  uint unaff_r10;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr7;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    unaff_lr = 0x8e0b800;
    uVar1 = func_0x07c68da0();
    param_3 = extraout_r2;
  }
  if (in_NG != in_OV) {
    if (!(bool)in_CY || (bool)in_ZR) {
      *unaff_r7 = uVar1;
      *(undefined4 *)(unaff_r7 + 1) = param_3;
      *(undefined4 *)((int)unaff_r7 + 0xc) = unaff_r5;
      *(undefined4 *)(unaff_r7 + 2) = unaff_r6;
      *(int **)((int)unaff_r7 + 0x14) = unaff_r9;
      *(uint *)(unaff_r7 + 3) = unaff_r10;
      *(BADSPACEBASE **)((int)unaff_r7 + 0x1c) = register0x00000054;
      *(undefined4 *)(unaff_r7 + 4) = unaff_lr;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_NG != in_OV) {
      coprocessor_store(9,in_cr7,unaff_r8);
    }
    if (!(bool)in_OV) {
      *unaff_r9 = (int)unaff_r9 + (unaff_r10 >> 0x15);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

