
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_088cae1c(uint param_1,undefined1 *param_2,byte *param_3,byte *param_4)

{
  byte unaff_r4;
  uint unaff_r5;
  undefined1 *puVar1;
  undefined1 *unaff_r6;
  undefined1 *puVar2;
  byte *pbVar3;
  byte *unaff_r7;
  byte *unaff_r8;
  byte *pbVar4;
  uint in_r12;
  int unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar5;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined4 in_cr13;
  
  pbVar4 = unaff_r8;
  puVar2 = unaff_r6;
  if (in_CY && !in_ZR) {
    puVar2 = unaff_r6 + (unaff_r5 >> 6);
    *(BADSPACEBASE **)unaff_r6 = register0x00000054;
    pbVar4 = unaff_r8 + (in_r12 >> 8 | in_r12 << 0x18);
    *(byte **)unaff_r8 = pbVar4;
  }
  if (!in_NG) {
    unaff_r7 = unaff_r7 + (int)pbVar4 * -0x8000;
  }
  if (!in_CY || in_ZR) {
    return *(undefined8 *)(*(int *)(unaff_r7 + -0x14) + -0x20);
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    bVar5 = false;
    if (in_ZR) {
      param_1 = (uint)&stack0x00000000 & (uint)pbVar4;
      bVar5 = param_1 == 0;
    }
    if (bVar5) {
      param_4 = (byte *)(param_1 & param_1 << 0x1d);
      puVar1 = puVar2 + 2;
      *puVar2 = 0;
      pbVar3 = (byte *)(0xfa - (int)(param_2 + !in_CY) << ((uint)param_2 & 0xff));
      in_CY = pbVar4 <= pbVar3;
      bVar5 = pbVar3 == pbVar4;
    }
    else {
      bVar5 = false;
      puVar1 = puVar2;
    }
    if (bVar5) {
      *puVar1 = *param_2;
      pbVar3 = (byte *)(((uint)unaff_r7 ^ (uint)pbVar4) & ((uint)unaff_r7 ^ (uint)pbVar4) << 0x1a);
      unaff_r7 = pbVar3 + 2;
      *pbVar3 = (byte)unaff_r5 & unaff_r4;
      bVar5 = (byte *)(0xfa - (int)(param_2 + 100 + !in_CY) << ((uint)(param_2 + 100) & 0xff)) ==
              pbVar4;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      *unaff_r7 = *param_3;
    }
    if (bVar5 && param_4 == pbVar4) {
      *pbVar4 = (byte)unaff_r7 & unaff_r4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR || in_NG != (bool)in_OV) {
    coprocessor_storelong(0xd,in_cr13,&stack0x00000378);
  }
  else {
    unaff_lr = unaff_lr + 0x2a8;
    coprocessor_storelong(0xd,in_cr7,unaff_lr);
  }
  if (!in_CY || in_ZR) {
    coprocessor_loadlong(8,in_cr10,unaff_lr);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

