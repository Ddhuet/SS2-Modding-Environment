
/* WARNING: Control flow encountered bad instruction data */

void FUN_08019870(int *param_1,uint param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int extraout_r2;
  undefined4 *puVar3;
  uint extraout_r3;
  uint unaff_r4;
  undefined4 unaff_r6;
  uint unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  uint uVar4;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  undefined1 in_OV;
  bool bVar5;
  undefined4 in_cr4;
  undefined8 uVar6;
  
  piVar1 = param_1;
  if (in_ZR) {
    piVar1 = param_1 + -0x15c;
    *param_1 = unaff_r11;
  }
  if (in_CY) {
    unaff_lr = 0x8019878;
    uVar6 = func_0x0801c888();
    param_2 = (uint)((ulonglong)uVar6 >> 0x20);
    piVar1 = (int *)uVar6;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  bVar5 = (bool)((byte)((uint)param_3 >> 0x1e) & 1);
  uVar4 = unaff_r4 & param_3 << 2;
  puVar3 = (undefined4 *)(param_4 & param_2);
  if ((bool)in_OV) {
    *puVar3 = unaff_lr;
    puVar3[-1] = unaff_r11;
    puVar3[-2] = param_4;
    puVar3[-3] = param_2;
    puVar3[-4] = piVar1;
  }
  if ((int)puVar3 < 0) {
    *(uint *)unaff_r11 = uVar4;
    *(uint *)(unaff_r11 + -4) = unaff_r8;
  }
  if ((bool)in_OV) {
    *(uint *)unaff_r4 = uVar4;
    *(undefined4 *)(unaff_r4 - 4) = unaff_r10;
    *(undefined4 *)(unaff_r4 - 8) = unaff_r9;
    *(int **)(unaff_r4 - 0xc) = piVar1;
  }
  piVar2 = piVar1;
  if (puVar3 != (undefined4 *)0x0) {
    piVar2 = piVar1 + -10;
    coprocessor_load(0xd,in_cr4,piVar1);
  }
  if ((int)puVar3 < 0) {
    unaff_r4 = (uint)piVar2 ^ unaff_r8 << 1;
    bVar5 = 0xffafffff < unaff_r8;
    unaff_r8 = unaff_r8 + 0x500000;
  }
  if (bVar5) {
    *(undefined4 *)(unaff_r4 - 4) = in_r12;
    *(int *)(unaff_r4 - 8) = unaff_r11;
    *(uint *)(unaff_r4 - 0xc) = unaff_r8;
    *(undefined4 *)(unaff_r4 - 0x10) = unaff_r6;
    *(uint *)(unaff_r4 - 0x14) = unaff_r4;
    *(uint *)(unaff_r4 - 0x18) = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

