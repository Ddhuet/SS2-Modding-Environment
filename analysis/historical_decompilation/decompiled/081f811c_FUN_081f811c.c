
/* WARNING: Control flow encountered bad instruction data */

void FUN_081f811c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int extraout_r2;
  int extraout_r3;
  undefined1 *unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  int *unaff_r7;
  uint unaff_r8;
  int *unaff_r9;
  int unaff_r10;
  undefined4 *unaff_r11;
  int in_r12;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar3;
  undefined4 in_cr14;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  if (in_NG == in_OV) {
    uRam081f814c = 0x81f8124;
    iRam081f8128 = param_3;
    iRam081f812c = param_4;
    puRam081f8130 = unaff_r4;
    uRam081f8134 = unaff_r5;
    piRam081f8138 = unaff_r7;
    uRam081f813c = unaff_r8;
    iRam081f8140 = unaff_r10;
    iRam081f8144 = in_r12;
    puRam081f8148 = (undefined1 *)register0x00000054;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    in_CY = false;
    unaff_r9 = (int *)(unaff_r8 | 0xa40);
    in_NG = (int)unaff_r9 < 0;
    in_ZR = unaff_r9 == (int *)0x0;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *(uint *)(unaff_r8 + unaff_lr * 0x200000) = unaff_r8;
    software_interrupt(0x8c8a88);
  }
  else {
    unaff_lr = 0x81f8130;
    uVar4 = func_0x067dd378();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  uVar1 = (uint)uVar4;
  if (in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)&stack0x000006a0;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    uRam081f8160 = 0x81f813c;
    uRam081f813c = uVar1;
    iRam081f8140 = param_3;
    iRam081f8144 = param_4;
    puRam081f8148 = unaff_r4;
    uRam081f814c = unaff_r5;
    piRam081f8150 = unaff_r7;
    piRam081f8154 = unaff_r9;
    iRam081f8158 = unaff_r10;
    iRam081f815c = unaff_lr;
  }
  coprocessor_loadlong2(9,in_cr14,param_4);
  bVar3 = false;
  if ((bool)in_CY) {
    bVar3 = (bool)((byte)(unaff_r5 >> 4) & 1);
    uVar1 = (uint)unaff_r7 & unaff_r5 << 0x1c;
    in_NG = (int)uVar1 < 0;
  }
  if (!bVar3) {
    register0x00000054 = *(BADSPACEBASE **)unaff_r4;
    unaff_r11 = *(undefined4 **)(unaff_r4 + -4);
    unaff_r10 = *(int *)(unaff_r4 + -8);
    unaff_r9 = *(int **)(unaff_r4 + -0xc);
    unaff_r5 = *(uint *)(unaff_r4 + -0x10);
    param_3 = *(int *)(unaff_r4 + -0x14);
    iVar2 = *(int *)(unaff_r4 + -0x18);
    uVar1 = *(uint *)(unaff_r4 + -0x1c);
    unaff_r4 = unaff_r4 + -0x20;
    software_interrupt(0x3e3d3b);
  }
  if ((bool)in_NG) {
    *(char *)(unaff_r6 + -0x545) = (char)unaff_r4;
    *unaff_r7 = unaff_lr;
    unaff_r7[-1] = unaff_r10;
    unaff_r7[-2] = (int)unaff_r9;
    unaff_r7[-3] = unaff_r6;
    unaff_r7[-4] = param_3;
    unaff_r7[-5] = iVar2;
    *unaff_r9 = unaff_lr;
    unaff_r9[-1] = (int)unaff_r11;
    unaff_r9[-2] = unaff_r8;
    unaff_r9[-3] = unaff_r6;
    unaff_r9[-4] = param_4 + 900;
    unaff_r4 = (undefined1 *)(unaff_r5 + 0xfb800000);
  }
  if (bVar3) {
    *unaff_r11 = register0x00000054;
    unaff_r11[-1] = unaff_r11;
    unaff_r11[-2] = unaff_r10;
    unaff_r11[-3] = unaff_r9;
    unaff_r11[-4] = unaff_r5;
    unaff_r11[-5] = unaff_r4;
    unaff_r11[-6] = uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

