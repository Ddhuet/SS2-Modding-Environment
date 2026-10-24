
/* WARNING: Control flow encountered bad instruction data */

void FUN_080ca6c0(undefined4 param_1,char param_2,undefined4 param_3,int param_4)

{
  int unaff_r5;
  uint unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  byte *unaff_lr;
  bool in_NG;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr2;
  
  software_interrupt(0x2b587);
  if (!in_NG) {
    *(undefined4 *)(unaff_r5 + -4) = 0x80ca6cc;
    *(byte **)(unaff_r5 + -8) = unaff_lr;
    *(BADSPACEBASE **)(unaff_r5 + -0xc) = register0x00000054;
    *(undefined4 *)(unaff_r5 + -0x10) = unaff_r11;
    *(undefined4 *)(unaff_r5 + -0x14) = unaff_r9;
    *(undefined4 *)(unaff_r5 + -0x18) = unaff_r8;
    *(undefined4 *)(unaff_r5 + -0x1c) = unaff_r7;
    *(uint *)(unaff_r5 + -0x20) = unaff_r6;
    *(int *)(unaff_r5 + -0x24) = unaff_r5;
    *(int *)(unaff_r5 + -0x28) = param_4;
  }
  if (!in_CY) {
    unaff_r6 = (uint)*unaff_lr;
  }
  coprocessor_loadlong(4,in_cr2,param_4 + 0xa4);
  if (in_OV) {
    *(char *)(unaff_r6 - 0x725) = -0x5c - param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

