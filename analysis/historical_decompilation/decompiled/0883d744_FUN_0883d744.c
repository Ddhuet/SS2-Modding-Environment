
/* WARNING: Control flow encountered bad instruction data */

void FUN_0883d744(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  char cVar2;
  char *pcVar3;
  undefined4 *unaff_r4;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  char *unaff_r8;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 unaff_r9;
  undefined1 *unaff_r10;
  undefined1 *puVar9;
  int unaff_r11;
  undefined4 in_r12;
  undefined1 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  cVar2 = (char)unaff_r11;
  pcVar6 = unaff_r8;
  if (in_NG) {
    pcVar6 = unaff_r8 + -0x582;
    *unaff_r8 = cVar2;
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
  }
  if (in_CY && !in_ZR) {
    *(undefined4 *)pcVar6 = param_2;
    *(undefined4 *)(pcVar6 + 4) = param_4;
    *(undefined4 *)(pcVar6 + 8) = unaff_r5;
    *(undefined4 *)(pcVar6 + 0xc) = unaff_r7;
    *(undefined4 *)(pcVar6 + 0x10) = unaff_r9;
    *(int *)(pcVar6 + 0x14) = unaff_r11;
    *(BADSPACEBASE **)(pcVar6 + 0x18) = register0x00000054;
    pcVar6[0x1c] = 'd';
    pcVar6[0x1d] = -0x29;
    pcVar6[0x1e] = -0x7d;
    pcVar6[0x1f] = '\b';
  }
  if (in_CY) {
    param_3 = (char *)((uint)param_3 ^ 0x20000002);
  }
  puVar4 = unaff_r4;
  if (in_NG) {
    puVar4 = unaff_r4 + -0x111;
    *(char *)unaff_r4 = (char)puVar4;
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
  }
  if (in_NG == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY) {
    param_3 = (char *)((uint)param_3 ^ 0x20000002);
  }
  puVar5 = puVar4;
  if (in_NG) {
    puVar5 = puVar4 + -0x111;
    *(char *)puVar4 = (char)puVar5;
  }
  uVar1 = (undefined1)in_r12;
  pcVar3 = param_3;
  pcVar7 = pcVar6;
  if (in_CY) {
    *unaff_r10 = uVar1;
    unaff_r10[-0xccc] = uVar1;
    puVar9 = unaff_r10 + -0x2664;
    unaff_r10[-0x1998] = uVar1;
    unaff_r10 = unaff_r10 + -0x3330;
    *puVar9 = uVar1;
    pcVar7 = pcVar6 + -0xccc;
    *pcVar6 = (char)unaff_r10;
    pcVar3 = param_3 + -0xaaa;
    *param_3 = (char)unaff_r10;
    puVar4 = (undefined4 *)((int)puVar5 + 0x222);
    *puVar5 = pcVar3;
    puVar5 = (undefined4 *)((int)puVar5 + -0x222);
    *puVar4 = puVar5;
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_loadlong(4,in_cr11,&stack0x00000208);
    coprocessor_loadlong(4,in_cr11,&stack0x00000208);
    coprocessor_loadlong(4,in_cr11,&stack0x00000208);
    coprocessor_loadlong(4,in_cr11,&stack0x00000208);
    coprocessor_loadlong(4,in_cr4,unaff_r11 + 0x208);
  }
  if (in_NG == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY) {
    unaff_r10 = (undefined1 *)((uint)pcVar3 ^ 0x82000000);
  }
  pcVar6 = pcVar7;
  if (in_NG) {
    pcVar6 = pcVar7 + -0x582;
    *pcVar7 = cVar2;
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
  if (in_CY && !in_ZR) {
    *(undefined4 *)pcVar6 = param_2;
    *(undefined4 *)(pcVar6 + 4) = param_4;
    *(undefined4 *)(pcVar6 + 8) = unaff_r5;
    *(undefined4 *)(pcVar6 + 0xc) = unaff_r7;
    *(undefined4 *)(pcVar6 + 0x10) = unaff_r9;
    *(int *)(pcVar6 + 0x14) = unaff_r11;
    *(BADSPACEBASE **)(pcVar6 + 0x18) = register0x00000054;
    pcVar6[0x1c] = -0x1c;
    pcVar6[0x1d] = -0x29;
    pcVar6[0x1e] = -0x7d;
    pcVar6[0x1f] = '\b';
  }
  if (in_CY) {
    pcVar3 = (char *)((uint)pcVar3 ^ 0x20000002);
  }
  puVar4 = puVar5;
  if (in_NG) {
    puVar4 = puVar5 + -0x111;
    *(char *)puVar5 = (char)puVar4;
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
  if (in_NG == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY) {
    pcVar3 = (char *)((uint)pcVar3 ^ 0x20000002);
  }
  puVar5 = puVar4;
  if (in_NG) {
    puVar5 = puVar4 + -0x111;
    *(char *)puVar4 = (char)puVar5;
  }
  pcVar7 = pcVar3;
  pcVar8 = pcVar6;
  if (in_CY) {
    *unaff_r10 = 0;
    unaff_r10[-0xddd] = 0;
    puVar9 = unaff_r10 + -0x2997;
    unaff_r10[-0x1bba] = 0;
    unaff_r10 = unaff_r10 + -0x3774;
    *puVar9 = 0;
    pcVar8 = pcVar6 + -0xddd;
    *pcVar6 = (char)unaff_r10;
    pcVar7 = pcVar3 + -0xaaa;
    *pcVar3 = (char)unaff_r10;
    puVar4 = (undefined4 *)((int)puVar5 + 0x222);
    *puVar5 = pcVar7;
    puVar5 = (undefined4 *)((int)puVar5 + -0x222);
    *puVar4 = puVar5;
  }
  coprocessor_function(4,0xe,4,in_cr11,in_cr14,in_cr2);
  coprocessor_function(4,0xe,4,in_cr11,in_cr14,in_cr2);
  coprocessor_function(4,0xe,4,in_cr11,in_cr14,in_cr2);
  coprocessor_function(4,0xe,4,in_cr11,in_cr14,in_cr2);
  coprocessor_function(4,0xe,4,in_cr4,in_cr11,in_cr2);
  if (in_NG != (bool)in_OV) {
    if (in_CY) {
      unaff_r10 = (undefined1 *)((uint)pcVar7 ^ 0x82000000);
    }
    pcVar6 = pcVar8;
    if (in_NG) {
      pcVar6 = pcVar8 + -0x582;
      *pcVar8 = cVar2;
    }
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    if (in_CY && !in_ZR) {
      *(undefined4 *)pcVar6 = param_2;
      *(undefined4 *)(pcVar6 + 4) = param_4;
      *(undefined4 *)(pcVar6 + 8) = unaff_r5;
      *(undefined4 *)(pcVar6 + 0xc) = unaff_r7;
      *(undefined4 *)(pcVar6 + 0x10) = unaff_r9;
      *(int *)(pcVar6 + 0x14) = unaff_r11;
      *(BADSPACEBASE **)(pcVar6 + 0x18) = register0x00000054;
      pcVar6[0x1c] = 'd';
      pcVar6[0x1d] = -0x28;
      pcVar6[0x1e] = -0x7d;
      pcVar6[0x1f] = '\b';
    }
    if (in_CY) {
      pcVar7 = (char *)((uint)pcVar7 ^ 0x20000002);
    }
    puVar4 = puVar5;
    if (in_NG) {
      puVar4 = puVar5 + -0x111;
      *(char *)puVar5 = (char)puVar4;
    }
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    if (in_NG == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_CY) {
      pcVar7 = (char *)((uint)pcVar7 ^ 0x20000002);
    }
    puVar5 = puVar4;
    if (in_NG) {
      puVar5 = puVar4 + -0x111;
      *(char *)puVar4 = (char)puVar5;
    }
    if (in_CY) {
      *unaff_r10 = unaff_lr;
      unaff_r10[-0xeee] = unaff_lr;
      unaff_r10[-0x1ddc] = unaff_lr;
      cVar2 = (char)unaff_r10 + 'H';
      unaff_r10[-0x2cca] = unaff_lr;
      *pcVar6 = cVar2;
      *pcVar7 = cVar2;
      *puVar5 = pcVar7 + -0xaaa;
      *(undefined1 **)((int)puVar5 + 0x222) = (undefined1 *)((int)puVar5 + -0x222);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

