
void FUN_08288b28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined1 *unaff_r5;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint unaff_r6;
  undefined4 unaff_r8;
  int unaff_r10;
  undefined1 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr4;
  
  puVar2 = unaff_r5;
  if (in_ZR || in_NG != in_OV) {
    puVar2 = unaff_r5 + (unaff_r6 >> 0xb);
    *unaff_r5 = unaff_r11;
  }
  if (in_CY) {
    uVar3 = *(undefined4 *)(puVar2 + -8);
    coprocessor_load(0,in_cr4,unaff_r8);
    *(BADSPACEBASE **)(unaff_r10 + -4) = register0x00000054;
    *(undefined4 *)(unaff_r10 + -8) = in_r12;
    *(undefined4 *)(unaff_r10 + -0xc) = uVar3;
    *(undefined4 *)(unaff_r10 + -0x10) = param_4;
    *(undefined4 *)(unaff_r10 + -0x14) = param_2;
    *(undefined4 *)(unaff_r10 + -0x18) = param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xd01f,0x8288b44);
  (*pcVar1)();
}

