
/* WARNING: Control flow encountered bad instruction data */

void FUN_08794050(uint param_1,uint param_2,undefined4 *param_3,char *param_4)

{
  char cVar1;
  uint unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  uint unaff_r11;
  uint in_r12;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint unaff_lr;
  undefined1 in_NG;
  bool in_ZR;
  bool in_OV;
  bool bVar4;
  bool bVar5;
  
  if (in_ZR) {
    unaff_r11 = in_r12 & (int)unaff_r4 >> 10;
    param_4 = (char *)((uint)&stack0x00000000 & (int)unaff_r4 >> 10);
  }
  if (in_ZR) {
    param_4 = (char *)((uint)&stack0x00000000 & (int)unaff_r4 >> 0xe);
    unaff_r11 = (uint)&stack0x00000000 & (int)unaff_r4 >> 0xe;
  }
  if (in_ZR) {
    unaff_r11 = (uint)&stack0x00000000 & (int)unaff_r4 >> 0x12;
    param_4 = (char *)(unaff_lr & (int)unaff_r4 >> 0x12);
  }
  if (in_ZR) {
    param_4 = (char *)(unaff_lr & (int)unaff_r4 >> 0x16);
    unaff_r11 = unaff_lr & (int)unaff_r4 >> 0x16;
  }
  if (in_ZR) {
    unaff_r11 = unaff_lr & (int)unaff_r4 >> 0x1a;
    param_4 = (char *)((int)unaff_r4 >> 0x1a & 0x879407c);
    unaff_r4 = (int)unaff_r4 >> 2 & 0x8794080;
    in_r12 = (int)unaff_r4 >> 2 & 0x8794084;
  }
  bVar4 = false;
  if (in_ZR) {
    in_r12 = (int)unaff_r4 >> 6 & 0x8794088;
    unaff_r4 = param_1 & (int)unaff_r4 >> 6;
    in_NG = (int)unaff_r4 < 0;
    bVar4 = unaff_r4 == 0;
  }
  bVar5 = false;
  if (bVar4) {
    unaff_r4 = param_1 & (int)unaff_r4 >> 10;
    in_NG = (int)unaff_r4 < 0;
    bVar5 = unaff_r4 == 0;
  }
  bVar4 = false;
  if (bVar5) {
    in_r12 = param_1 & (int)unaff_r4 >> 10;
    in_NG = (int)in_r12 < 0;
    bVar4 = in_r12 == 0;
  }
  bVar5 = false;
  if (bVar4) {
    in_r12 = param_1 & (int)unaff_r4 >> 0xe;
    in_NG = (int)in_r12 < 0;
    bVar5 = in_r12 == 0;
  }
  bVar4 = false;
  if (bVar5) {
    unaff_r4 = param_2 & (int)unaff_r4 >> 0xe;
    in_NG = (int)unaff_r4 < 0;
    bVar4 = unaff_r4 == 0;
  }
  bVar5 = false;
  if (bVar4) {
    unaff_r4 = param_2 & (int)unaff_r4 >> 0x12;
    in_NG = (int)unaff_r4 < 0;
    bVar5 = unaff_r4 == 0;
  }
  bVar4 = false;
  if (bVar5) {
    in_r12 = param_2 & (int)unaff_r4 >> 0x12;
    in_NG = (int)in_r12 < 0;
    bVar4 = in_r12 == 0;
  }
  bVar5 = false;
  if (bVar4) {
    in_r12 = param_2 & (int)unaff_r4 >> 0x16;
    in_NG = (int)in_r12 < 0;
    bVar5 = in_r12 == 0;
  }
  bVar4 = false;
  if (bVar5) {
    unaff_r4 = (uint)param_3 & (int)unaff_r4 >> 0x16;
    in_NG = (int)unaff_r4 < 0;
    bVar4 = unaff_r4 == 0;
  }
  bVar5 = false;
  if (bVar4) {
    unaff_r4 = (uint)param_3 & (int)unaff_r4 >> 0x1a;
    in_NG = (int)unaff_r4 < 0;
    bVar5 = unaff_r4 == 0;
  }
  bVar4 = false;
  if (bVar5) {
    in_r12 = (uint)param_3 & (int)unaff_r4 >> 0x1a;
    in_NG = (int)in_r12 < 0;
    bVar4 = in_r12 == 0;
  }
  bVar5 = false;
  if (bVar4) {
    in_r12 = (uint)param_3 & (int)unaff_r4 >> 0x1e;
    in_NG = (int)in_r12 < 0;
    bVar5 = in_r12 == 0;
  }
  bVar4 = false;
  if (bVar5) {
    unaff_r4 = (uint)param_4 & (int)unaff_r4 >> 0x1e;
    in_NG = (int)unaff_r4 < 0;
    bVar4 = unaff_r4 == 0;
  }
  bVar5 = false;
  if (bVar4) {
    unaff_r5 = (uint)param_4 & (int)unaff_r4 >> 2;
    in_NG = (int)unaff_r5 < 0;
    bVar5 = unaff_r5 == 0;
  }
  bVar4 = false;
  if (bVar5) {
    puVar2 = (undefined1 *)((uint)param_4 & (int)unaff_r4 >> 2);
    in_NG = (int)puVar2 < 0;
    bVar4 = puVar2 == (undefined1 *)0x0;
  }
  bVar5 = false;
  if (bVar4) {
    puVar3 = (undefined1 *)((uint)param_4 & (int)unaff_r4 >> 6);
    in_NG = (int)puVar3 < 0;
    bVar5 = puVar3 == (undefined1 *)0x0;
  }
  if (bVar5) {
    unaff_r5 = unaff_r4 & (int)unaff_r4 >> 6;
    in_NG = (int)unaff_r5 < 0;
  }
  if ((bool)in_NG == in_OV) {
    *(uint *)(unaff_r11 + 4) = param_1;
    *(undefined4 **)(unaff_r11 + 8) = param_3;
    *(char **)(unaff_r11 + 0xc) = param_4;
    *(undefined4 *)(unaff_r11 + 0x10) = unaff_r6;
    *(undefined4 *)(unaff_r11 + 0x14) = unaff_r7;
    *(undefined4 *)(unaff_r11 + 0x18) = unaff_r8;
    *(uint *)(unaff_r11 + 0x1c) = unaff_r11;
    *(uint *)(unaff_r11 + 0x20) = in_r12;
    *(undefined4 *)(unaff_r11 + 0x24) = 0x87940f0;
  }
  if (!in_OV) {
    return;
  }
  if (!(bool)in_NG) {
    cVar1 = (char)(char *)*param_3 + -0x22;
    *(char *)*param_3 = cVar1;
    *param_4 = cVar1;
  }
  *(undefined1 *)(unaff_r5 - 0x222) = (char)(undefined1 *)(unaff_r5 - 0x222);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

