
/* WARNING: Control flow encountered bad instruction data */

void FUN_08afb3b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_r12;
  undefined4 uVar4;
  undefined4 uVar5;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr11;
  
  if (!in_NG) {
    coprocessor_storelong(5,in_cr11,in_r12);
  }
  if (in_CY && !in_ZR) {
    coprocessor_movefromRt(3,6,in_cr8);
    unaff_r5 = coprocessor_movefromRt2(3,6,in_cr8);
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    uVar5 = *(undefined4 *)unaff_r5;
    uVar4 = *(undefined4 *)(unaff_r5 + -4);
    uVar3 = *(undefined4 *)(unaff_r5 + -8);
    uVar2 = *(undefined4 *)(unaff_r5 + -0xc);
    puVar1 = *(undefined4 **)(unaff_r5 + -0x14);
    *puVar1 = *(undefined4 *)(unaff_r5 + -0x20);
    puVar1[1] = param_3;
    puVar1[2] = unaff_r4;
    puVar1[3] = puVar1;
    puVar1[4] = uVar2;
    puVar1[5] = uVar3;
    puVar1[6] = uVar4;
    puVar1[7] = uVar5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

