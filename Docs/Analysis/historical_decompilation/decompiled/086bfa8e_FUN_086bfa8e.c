
/* WARNING: Control flow encountered bad instruction data */

void FUN_086bfa8e(uint param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 unaff_r6;
  undefined4 unaff_r8;
  byte *pbVar4;
  undefined4 *unaff_lr;
  undefined4 *puVar5;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  uVar1 = param_1;
  if (in_ZR) {
    uVar1 = param_1 - 0x594;
    *(BADSPACEBASE **)param_1 = register0x00000054;
    *param_2 = uVar1;
    puVar2 = (uint *)((int)param_2 + -0x801);
    param_2[-0x100] = uVar1;
    param_2 = (uint *)((int)param_2 + -0xc02);
    *puVar2 = uVar1;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    uVar1 = (uint)*(byte *)(param_4 + 0x401);
    bRam086c00a2 = *(byte *)((int)param_2 + 0x5d2);
    *(byte *)(bRam086c00a2 + 0x5ce) = bRam086c00a2;
    bRam086c00b2 = *(byte *)((int)param_2 + 0x5d2);
    *(byte *)(bRam086c00b2 + 0x5ce) = bRam086c00b2;
    register0x00000054 = (BADSPACEBASE *)(uint)*(byte *)(param_4 + 0x5cc);
  }
  puVar5 = unaff_lr;
  puVar2 = param_3;
  if (in_OV) {
    puVar2 = (uint *)((int)param_3 + -0x5d2);
    register0x00000054 = (BADSPACEBASE *)(uint)(byte)*param_3;
    puVar5 = (undefined4 *)((int)unaff_lr + -0x471);
    *(char *)unaff_lr = (char)unaff_r8;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    *(undefined1 *)((int)register0x00000054 + 0x46d) = unaff_r6;
  }
  if (in_ZR) {
    *param_2 = (uint)register0x00000054;
    puVar3 = (uint *)((int)param_2 + -0x9cd);
    param_2[-0x173] = uVar1;
    param_2 = (uint *)((int)param_2 + -0xdce);
    *puVar3 = uVar1;
  }
  if (!in_CY) {
    uVar1 = (uint)*(byte *)(param_4 + 0x401);
    bRam086c00fe = *(byte *)((int)param_2 + 0x5f2);
    *(byte *)((int)register0x00000054 + 0x5ee) = bRam086c00fe;
    param_2 = param_2 + 0x2f9;
    bRam086c010e = (byte)*param_2;
    pbVar4 = (byte *)((int)register0x00000054 + 0xbdc);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + 0xbdc);
    *pbVar4 = bRam086c010e;
    param_4 = (uint)*(byte *)(bRam086c010e + 0x5ec);
  }
  if (in_CY && !in_ZR) {
    param_4 = *puVar2;
  }
  if (in_OV) {
    *puVar5 = unaff_r8;
  }
  if (!in_CY) {
    *(undefined1 *)((int)register0x00000054 + 0x48d) = unaff_r6;
  }
  if (in_ZR) {
    *param_2 = param_4;
    param_2[-0x17b] = uVar1;
    *(uint *)((int)param_2 + -0x9ed) = uVar1;
    *(uint *)((int)param_2 + -0xdee) = uVar1;
    *(uint *)((int)param_2 + -0x11ef) = uVar1;
    param_2[-0x57c] = uVar1;
    *(uint *)((int)param_2 + -0x19f1) = uVar1;
    *(uint *)((int)param_2 + -0x1df2) = uVar1;
    *(uint *)((int)param_2 + -0x21f3) = uVar1;
    param_2[-0x97d] = uVar1;
    *(uint *)((int)param_2 + -0x29f5) = uVar1;
    *(uint *)((int)param_2 + -0x2df6) = uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

