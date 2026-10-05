
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c3190(undefined4 param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  puVar1 = param_4;
  if (in_ZR || in_NG != in_OV) {
    puVar1 = param_4 + 0x5d3;
    *param_4 = (char)unaff_r11;
  }
  if (in_ZR) {
    *(undefined4 *)(param_3 + -4) = 0x81c319c;
    *(undefined4 *)(param_3 + -8) = unaff_lr;
    *(BADSPACEBASE **)(param_3 + -0xc) = register0x00000054;
    *(undefined4 *)(param_3 + -0x10) = in_r12;
    *(undefined4 *)(param_3 + -0x14) = unaff_r11;
    *(undefined4 *)(param_3 + -0x18) = unaff_r8;
    *(undefined4 *)(param_3 + -0x1c) = unaff_r7;
    *(undefined4 *)(param_3 + -0x20) = unaff_r6;
    *(undefined4 *)(param_3 + -0x24) = unaff_r5;
    *(undefined1 **)(param_3 + -0x28) = puVar1;
    *(undefined4 *)(param_3 + -0x2c) = param_2;
  }
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

