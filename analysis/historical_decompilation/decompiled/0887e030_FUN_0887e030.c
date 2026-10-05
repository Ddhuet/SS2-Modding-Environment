
/* WARNING: Control flow encountered bad instruction data */

void FUN_0887e030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int unaff_r7;
  int iVar1;
  ushort *unaff_r9;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (!in_CY || in_ZR) {
    coprocessor_loadlong(5,in_cr11,unaff_lr);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY && !in_ZR) {
    iVar1 = unaff_r7;
    if (!in_CY || in_ZR) {
      param_4 = *(undefined4 *)(unaff_r7 + 8);
      iVar1 = *(int *)(unaff_r7 + 0x10);
      unaff_r11 = *(undefined4 **)(unaff_r7 + 0x18);
      in_r12 = *(undefined4 *)(unaff_r7 + 0x1c);
      register0x00000054 = *(BADSPACEBASE **)(unaff_r7 + 0x20);
    }
    if (in_ZR) {
      register0x00000054 = *(BADSPACEBASE **)(iVar1 + -8);
      in_r12 = *(undefined4 *)(iVar1 + -0xc);
      unaff_r11 = *(undefined4 **)(iVar1 + -0x10);
      unaff_r5 = *(undefined4 *)(iVar1 + -0x1c);
      unaff_r4 = *(undefined4 *)(iVar1 + -0x20);
      param_4 = *(undefined4 *)(iVar1 + -0x24);
      param_2 = *(undefined4 *)(iVar1 + -0x28);
      iVar1 = iVar1 + -0x2c;
      unaff_r9 = (ushort *)(uint)*unaff_r9;
    }
    if (in_ZR || in_NG != in_OV) {
      *unaff_r11 = param_2;
      unaff_r11[1] = param_4;
      unaff_r11[2] = unaff_r4;
      unaff_r11[3] = unaff_r5;
      unaff_r11[4] = iVar1;
      unaff_r11[5] = unaff_r9;
      unaff_r11[6] = unaff_r11;
      unaff_r11[7] = in_r12;
      unaff_r11[8] = register0x00000054;
      unaff_r11[9] = 0x887e050;
    }
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_NG == in_OV) {
      coprocessor_function(10,0xb,5,in_cr11,in_cr11,in_cr10);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

