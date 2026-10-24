
/* WARNING: Control flow encountered bad instruction data */

void FUN_08730ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 extraout_r3;
  undefined1 *unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  undefined4 unaff_r8;
  int unaff_r10;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  bool bVar6;
  undefined4 in_cr8;
  undefined8 uVar7;
  
  uVar7 = CONCAT44(param_2,param_1);
  if ((bool)in_OV) {
    unaff_lr = 0x8730ea4;
    uVar7 = func_0x0875e458();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  puVar4 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
  puVar2 = (undefined4 *)uVar7;
  if ((bool)in_OV) {
    puVar2 = *(undefined4 **)(unaff_r5 + 4);
    unaff_r4 = *(undefined1 **)(unaff_r5 + 0xc);
    unaff_r7 = *(uint *)(unaff_r5 + 0x14);
    unaff_r11 = *(uint *)(unaff_r5 + 0x1c);
    register0x00000054 = *(BADSPACEBASE **)(unaff_r5 + 0x20);
    unaff_lr = *(undefined4 *)(unaff_r5 + 0x24);
    unaff_r5 = unaff_r5 + 0x24;
  }
  if ((bool)in_ZR) {
    unaff_r6 = unaff_r5 ^ unaff_r5 >> 0x10;
  }
  if ((bool)in_CY) {
    *(char *)(unaff_r6 - 0x567) = (char)unaff_r11;
  }
  else {
    unaff_r4 = unaff_r4 + -0x565;
    *unaff_r4 = (char)unaff_lr;
  }
  if (in_NG != in_OV) {
    *(short *)((int)puVar2 + unaff_r5) = (short)puVar2;
  }
  puVar5 = puVar4;
  puVar3 = puVar2;
  if ((bool)in_CY && !(bool)in_ZR) {
    puVar3 = (undefined4 *)((int)puVar2 + -0x183);
    *puVar2 = unaff_r4;
    puVar5 = (undefined4 *)((int)puVar4 + ((uint)puVar4 >> 0xb));
    *puVar4 = unaff_r8;
  }
  bVar6 = false;
  if ((bool)in_ZR) {
    lVar1 = (ulonglong)unaff_r7 * ZEXT48(puVar5);
    in_NG = lVar1 < 0;
    bVar6 = lVar1 == 0;
    unaff_r8 = (undefined4)lVar1;
    puVar5 = (undefined4 *)((ulonglong)lVar1 >> 0x20);
  }
  if (bVar6 || in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)(unaff_r11 | unaff_r10 << 3);
  }
  if ((bool)in_CY && !bVar6) {
    coprocessor_loadlong(0xc,in_cr8,puVar5);
    software_interrupt(0xd18ed1);
  }
  if (bVar6 || in_NG != in_OV) {
    *(undefined4 **)((int)register0x00000054 + 0xd1) = puVar3;
    *(BADSPACEBASE **)(unaff_r11 + 0x58c) = register0x00000054;
  }
  if ((bool)in_CY && !bVar6) {
    puVar3[-1] = 0x8730ef0;
    puVar3[-2] = unaff_lr;
    puVar3[-3] = in_r12;
    puVar3[-4] = unaff_r10;
    puVar3[-5] = unaff_r8;
    puVar3[-6] = unaff_r7;
    puVar3[-7] = param_4;
    puVar3[-8] = puVar5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

