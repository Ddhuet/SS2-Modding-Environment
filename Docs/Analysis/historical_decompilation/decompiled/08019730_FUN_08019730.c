
/* WARNING: Control flow encountered bad instruction data */

void FUN_08019730(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_r4;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  uint in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr6;
  
  puVar2 = param_1;
  if (in_ZR) {
    puVar2 = param_1 + -0x15c;
    *param_1 = unaff_r11;
  }
  if (in_NG) {
    *unaff_r8 = unaff_r11;
    unaff_r8[-1] = unaff_r10;
    unaff_r8[-2] = param_3;
  }
  puVar3 = param_2;
  if (in_CY) {
    puVar3 = param_2 + unaff_r7 * -0x4000;
    *param_2 = unaff_r4;
  }
  if (in_NG) {
    coprocessor_store(8,in_cr6,unaff_r7 + -0xc);
    uVar1 = (uint)puVar2 >> (in_r12 & 0xff);
    in_CY = CARRY4((uint)puVar2,uVar1);
    puVar3 = (undefined4 *)((int)puVar2 + uVar1);
    in_ZR = puVar3 == (undefined4 *)0x0;
  }
  if (in_CY) {
    *puVar2 = unaff_lr;
    puVar2[-1] = unaff_r4;
    puVar2[-2] = param_4;
  }
  if (in_CY && !in_ZR) {
    *unaff_r8 = 0x8019754;
    unaff_r8[-1] = unaff_lr;
    unaff_r8[-2] = in_r12;
    unaff_r8[-3] = param_4;
    unaff_r8[-4] = puVar3;
  }
  if (!in_ZR) {
    *(BADSPACEBASE **)(unaff_r9 + -4) = register0x00000054;
    *(uint *)(unaff_r9 + -8) = in_r12;
    *(int *)(unaff_r9 + -0xc) = unaff_r9;
    *(undefined4 **)(unaff_r9 + -0x10) = puVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

