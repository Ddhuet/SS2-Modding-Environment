
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x085880bc) */

ulonglong FUN_085880ac(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  uint unaff_r5;
  byte *unaff_r6;
  byte *pbVar2;
  byte *pbVar3;
  uint unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  uint in_r12;
  uint extraout_r12;
  uint unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined4 in_cr4;
  undefined4 in_cr11;
  ulonglong uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  if ((bool)in_OV) {
    return (ulonglong)param_1;
  }
  if (in_NG != '\0') {
    coprocessor_store(9,in_cr11,unaff_r6);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_storelong(8,in_cr4,unaff_r9);
  }
  pbVar2 = unaff_r6;
  if (!(bool)in_CY) {
    pbVar2 = unaff_r6 + (unaff_r5 >> 10);
    *(int *)unaff_r6 = unaff_r10;
  }
  if (in_NG != '\0') {
    unaff_lr = 0x85880c4;
    uVar4 = func_0x0747af34();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if ((bool)in_OV) {
    *(int *)(unaff_r10 + (in_r12 >> 0x15)) = unaff_r10;
  }
  pbVar3 = pbVar2;
  if (!(bool)in_NG) {
    pbVar3 = pbVar2 + -0x74b;
    unaff_r8 = (uint)*pbVar2;
  }
  if (in_NG != in_OV) {
    *(ulonglong *)(unaff_r11 + 4) = uVar4;
    *(undefined4 *)(unaff_r11 + 0xc) = param_4;
    *(undefined4 *)(unaff_r11 + 0x10) = unaff_r4;
    *(uint *)(unaff_r11 + 0x14) = unaff_r5;
    *(byte **)(unaff_r11 + 0x18) = pbVar3;
    *(uint *)(unaff_r11 + 0x1c) = unaff_r8;
    *(int *)(unaff_r11 + 0x20) = unaff_r11;
    *(BADSPACEBASE **)(unaff_r11 + 0x24) = register0x00000054;
    *(undefined4 *)(unaff_r11 + 0x28) = 0x85880d4;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    return *(ulonglong *)(*(int *)(unaff_r9 + 0x20) + 4);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    unaff_lr = 0x85880dc;
    uVar4 = func_0x074765b8((int)uVar4,(int)(uVar4 >> 0x20));
    param_3 = extraout_r2_00;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    return uVar4;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return (ulonglong)*(uint *)(unaff_r9 + 4);
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return uVar4;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *(int *)(unaff_r9 + 4) = (int)uVar4;
    *(undefined4 *)(unaff_r9 + 8) = param_3;
    *(uint *)(unaff_r9 + 0xc) = unaff_r5;
    *(byte **)(unaff_r9 + 0x10) = pbVar3;
    *(uint *)(unaff_r9 + 0x14) = unaff_r8;
    *(int *)(unaff_r9 + 0x18) = unaff_r9;
    *(int *)(unaff_r9 + 0x1c) = unaff_r10;
    *(undefined4 *)(unaff_r9 + 0x20) = 0x85880f8;
  }
  if ((bool)in_OV) {
    pbVar2 = pbVar3 + -0x66d;
    *pbVar3 = (byte)pbVar2;
    pbVar3 = pbVar2 + -((uint)&stack0x00000000 >> 0xc | (int)&stack0x00000000 << 0x14);
    *pbVar2 = (byte)pbVar3;
  }
  pbVar2 = pbVar3;
  if ((bool)in_NG) {
    pbVar2 = pbVar3 + -(unaff_lr >> 0xc | unaff_lr << 0x14);
    *pbVar3 = (byte)pbVar2;
  }
  if ((bool)in_OV) {
    pbVar3 = pbVar2 + -(unaff_lr >> 0xc | unaff_lr << 0x14);
    *pbVar2 = (byte)pbVar3;
    *pbVar3 = (byte)(pbVar3 + -0x10c08588);
    bVar1 = (byte)(pbVar3 + -0x20e28588);
    pbVar3[-0x10c08588] = bVar1;
    pbVar3[-0x20e28588] = bVar1 + 0x3c;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

