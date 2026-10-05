
/* WARNING: Control flow encountered bad instruction data */

void FUN_0883d7c4(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 *unaff_r4;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  char *unaff_r8;
  char *pcVar5;
  char *pcVar6;
  undefined4 unaff_r9;
  undefined1 *unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_r11;
  undefined1 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  pcVar5 = unaff_r8;
  if (in_NG) {
    pcVar5 = unaff_r8 + -0x582;
    *unaff_r8 = (char)unaff_r11;
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
  if (in_CY && !in_ZR) {
    *(undefined4 *)pcVar5 = param_2;
    *(undefined4 *)(pcVar5 + 4) = param_4;
    *(undefined4 *)(pcVar5 + 8) = unaff_r5;
    *(undefined4 *)(pcVar5 + 0xc) = unaff_r7;
    *(undefined4 *)(pcVar5 + 0x10) = unaff_r9;
    *(undefined4 *)(pcVar5 + 0x14) = unaff_r11;
    *(BADSPACEBASE **)(pcVar5 + 0x18) = register0x00000054;
    pcVar5[0x1c] = -0x1c;
    pcVar5[0x1d] = -0x29;
    pcVar5[0x1e] = -0x7d;
    pcVar5[0x1f] = '\b';
  }
  if (in_CY) {
    param_3 = (char *)((uint)param_3 ^ 0x20000002);
  }
  puVar3 = unaff_r4;
  if (in_NG) {
    puVar3 = unaff_r4 + -0x111;
    *(char *)unaff_r4 = (char)puVar3;
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
  if (in_NG != (bool)in_OV) {
    if (in_CY) {
      param_3 = (char *)((uint)param_3 ^ 0x20000002);
    }
    puVar4 = puVar3;
    if (in_NG) {
      puVar4 = puVar3 + -0x111;
      *(char *)puVar3 = (char)puVar4;
    }
    pcVar2 = param_3;
    pcVar6 = pcVar5;
    if (in_CY) {
      *unaff_r10 = 0;
      unaff_r10[-0xddd] = 0;
      puVar7 = unaff_r10 + -0x2997;
      unaff_r10[-0x1bba] = 0;
      unaff_r10 = unaff_r10 + -0x3774;
      *puVar7 = 0;
      pcVar6 = pcVar5 + -0xddd;
      *pcVar5 = (char)unaff_r10;
      pcVar2 = param_3 + -0xaaa;
      *param_3 = (char)unaff_r10;
      puVar3 = (undefined4 *)((int)puVar4 + 0x222);
      *puVar4 = pcVar2;
      puVar4 = (undefined4 *)((int)puVar4 + -0x222);
      *puVar3 = puVar4;
    }
    coprocessor_function(4,0xe,4,in_cr11,in_cr14,in_cr2);
    coprocessor_function(4,0xe,4,in_cr11,in_cr14,in_cr2);
    coprocessor_function(4,0xe,4,in_cr11,in_cr14,in_cr2);
    coprocessor_function(4,0xe,4,in_cr11,in_cr14,in_cr2);
    coprocessor_function(4,0xe,4,in_cr4,in_cr11,in_cr2);
    if (in_NG == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_CY) {
      unaff_r10 = (undefined1 *)((uint)pcVar2 ^ 0x82000000);
    }
    pcVar5 = pcVar6;
    if (in_NG) {
      pcVar5 = pcVar6 + -0x582;
      *pcVar6 = (char)unaff_r11;
    }
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    coprocessor_function(0xe,0xe,7,in_cr14,in_cr14,in_cr14);
    if (in_CY && !in_ZR) {
      *(undefined4 *)pcVar5 = param_2;
      *(undefined4 *)(pcVar5 + 4) = param_4;
      *(undefined4 *)(pcVar5 + 8) = unaff_r5;
      *(undefined4 *)(pcVar5 + 0xc) = unaff_r7;
      *(undefined4 *)(pcVar5 + 0x10) = unaff_r9;
      *(undefined4 *)(pcVar5 + 0x14) = unaff_r11;
      *(BADSPACEBASE **)(pcVar5 + 0x18) = register0x00000054;
      pcVar5[0x1c] = 'd';
      pcVar5[0x1d] = -0x28;
      pcVar5[0x1e] = -0x7d;
      pcVar5[0x1f] = '\b';
    }
    if (in_CY) {
      pcVar2 = (char *)((uint)pcVar2 ^ 0x20000002);
    }
    puVar3 = puVar4;
    if (in_NG) {
      puVar3 = puVar4 + -0x111;
      *(char *)puVar4 = (char)puVar3;
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
      pcVar2 = (char *)((uint)pcVar2 ^ 0x20000002);
    }
    puVar4 = puVar3;
    if (in_NG) {
      puVar4 = puVar3 + -0x111;
      *(char *)puVar3 = (char)puVar4;
    }
    if (in_CY) {
      *unaff_r10 = unaff_lr;
      unaff_r10[-0xeee] = unaff_lr;
      unaff_r10[-0x1ddc] = unaff_lr;
      cVar1 = (char)unaff_r10 + 'H';
      unaff_r10[-0x2cca] = unaff_lr;
      *pcVar5 = cVar1;
      *pcVar2 = cVar1;
      *puVar4 = pcVar2 + -0xaaa;
      *(undefined1 **)((int)puVar4 + 0x222) = (undefined1 *)((int)puVar4 + -0x222);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

