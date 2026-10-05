
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e3d24c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined1 *unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int in_r12;
  int extraout_r12;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    unaff_lr = 0x8e3d250;
    func_0x07d6a6dc();
    param_2 = extraout_r1;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG == in_OV) {
    coprocessor_loadlong(0xf,in_cr15,0x8e3d258);
  }
  software_interrupt(0xffffef);
  if (!(bool)in_ZR && in_NG == in_OV) {
    coproc_movefrom_Peripheral_System(7,in_cr15,7);
  }
  if (in_NG == in_OV) {
    coprocessor_loadlong(0xf,in_cr15,unaff_lr);
  }
  if ((bool)in_OV) {
    *(undefined4 *)(in_r12 + 4) = param_2;
    *(undefined4 *)(in_r12 + 8) = param_3;
    *(undefined4 *)(in_r12 + 0xc) = param_4;
    *(undefined4 *)(in_r12 + 0x10) = unaff_r4;
    *(undefined1 **)(in_r12 + 0x14) = unaff_r5;
    *(undefined4 *)(in_r12 + 0x18) = unaff_r6;
    *(undefined4 *)(in_r12 + 0x1c) = unaff_r7;
    *(undefined4 *)(in_r12 + 0x20) = unaff_r8;
    *(undefined4 *)(in_r12 + 0x24) = unaff_r9;
    *(undefined4 *)(in_r12 + 0x28) = unaff_r10;
    *(undefined4 *)(in_r12 + 0x2c) = unaff_r11;
    *(BADSPACEBASE **)(in_r12 + 0x30) = register0x00000054;
    *(undefined4 *)(in_r12 + 0x34) = unaff_lr;
    *(undefined4 *)(in_r12 + 0x38) = 0x8e3d268;
  }
  if ((bool)in_NG) {
    *unaff_r5 = (char)unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

