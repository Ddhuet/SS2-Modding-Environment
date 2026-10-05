
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08568a0a) */
/* WARNING: Removing unreachable block (ram,0x085689f6) */
/* WARNING: Removing unreachable block (ram,0x08568a02) */
/* WARNING: Removing unreachable block (ram,0x08568a12) */

void FUN_085689de(undefined4 param_1,undefined4 param_2,uint param_3,char *param_4)

{
  undefined4 *unaff_r4;
  undefined4 *puVar1;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint *unaff_r8;
  uint *puVar2;
  uint *puVar3;
  uint unaff_r9;
  undefined4 *unaff_r10;
  uint unaff_r11;
  uint in_r12;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  bool bVar4;
  
  if (in_CY && !in_ZR) {
    *(char *)(unaff_r8 + -0x149) = (char)unaff_r11;
    *unaff_r8 = unaff_lr;
    unaff_r8[-1] = in_r12;
    unaff_r8[-2] = unaff_r11;
    unaff_r8[-3] = unaff_r7;
    unaff_r8[-4] = unaff_r5;
    unaff_r8[-5] = (uint)param_4;
  }
  if (in_NG) {
    *unaff_r8 = (uint)param_4;
    unaff_r8[1] = unaff_r6;
    unaff_r8[2] = unaff_r9;
    unaff_r8[3] = (uint)unaff_r10;
    unaff_r8[4] = (uint)register0x00000054;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = unaff_r8;
  if (in_OV) {
    puVar2 = (uint *)((int)unaff_r8 + 0x5a2);
    *unaff_r8 = (uint)puVar2;
  }
  if (in_OV != false) {
    if (in_CY && !in_ZR) {
      *unaff_r10 = param_2;
      unaff_r10[1] = param_3;
      unaff_r10[2] = unaff_r6;
      unaff_r10[3] = puVar2;
      unaff_r10[4] = unaff_r9;
      unaff_r10[5] = register0x00000054;
      unaff_r10[6] = unaff_lr;
    }
    if (in_OV) {
      puVar1 = unaff_r4 + -0x1a1;
      *(char *)unaff_r4 = (char)unaff_r7;
      unaff_r4 = unaff_r4 + -0x3c2;
      *(char *)puVar1 = (char)puVar2;
    }
    *unaff_r4 = param_2;
    unaff_r4[1] = unaff_r4;
    unaff_r4[2] = unaff_r6;
    unaff_r4[3] = unaff_r10;
    unaff_r4[4] = register0x00000054;
    unaff_r4[5] = unaff_lr;
    if (!in_CY || in_ZR) {
      param_4 = (char *)(0x22000000 - unaff_r6);
    }
    else {
      param_3 = 0x80000004 - unaff_r6;
    }
    bVar4 = false;
    if (!in_CY) {
      in_CY = false;
      param_3 = unaff_r6 ^ 0x21000000;
      bVar4 = (int)param_3 < 0;
    }
    puVar3 = puVar2;
    if (bVar4) {
      puVar3 = (uint *)((int)puVar2 + -0x423);
      *puVar2 = (uint)param_4;
    }
    if (in_CY) {
      *puVar3 = param_3;
      *param_4 = (char)puVar3 + '\"';
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

