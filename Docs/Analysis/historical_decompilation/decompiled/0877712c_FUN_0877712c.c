
/* WARNING: Control flow encountered bad instruction data */

void FUN_0877712c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  undefined4 unaff_r8;
  int unaff_r10;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar4;
  undefined4 in_cr8;
  
  if (in_CY) {
    *(char *)(unaff_r6 + -0x567) = (char)unaff_r11;
  }
  else {
    unaff_r4 = unaff_r4 + -0x565;
    *unaff_r4 = (char)unaff_lr;
  }
  if (in_NG != in_OV) {
    *(short *)((int)param_1 + unaff_r5) = (short)param_1;
  }
  puVar3 = param_2;
  puVar2 = param_1;
  if (in_CY && !in_ZR) {
    puVar2 = (undefined4 *)((int)param_1 + -0x183);
    *param_1 = unaff_r4;
    puVar3 = (undefined4 *)((int)param_2 + ((uint)param_2 >> 0xb));
    *param_2 = unaff_r8;
  }
  bVar4 = false;
  if (in_ZR) {
    lVar1 = (ulonglong)unaff_r7 * ZEXT48(puVar3);
    in_NG = lVar1 < 0;
    bVar4 = lVar1 == 0;
    unaff_r8 = (undefined4)lVar1;
    puVar3 = (undefined4 *)((ulonglong)lVar1 >> 0x20);
  }
  if (bVar4 || in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)(unaff_r11 | unaff_r10 << 3);
  }
  if (in_CY && !bVar4) {
    coprocessor_loadlong(0xc,in_cr8,puVar3);
    software_interrupt(0xd18ed1);
  }
  if (bVar4 || in_NG != in_OV) {
    *(undefined4 **)((int)register0x00000054 + 0xd1) = puVar2;
    *(BADSPACEBASE **)(unaff_r11 + 0x58c) = register0x00000054;
  }
  if (in_CY && !bVar4) {
    puVar2[-1] = 0x8777170;
    puVar2[-2] = unaff_lr;
    puVar2[-3] = in_r12;
    puVar2[-4] = unaff_r10;
    puVar2[-5] = unaff_r8;
    puVar2[-6] = unaff_r7;
    puVar2[-7] = param_4;
    puVar2[-8] = puVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

