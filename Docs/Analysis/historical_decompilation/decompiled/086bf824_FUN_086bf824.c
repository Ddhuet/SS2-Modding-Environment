
/* WARNING: Control flow encountered bad instruction data */

void FUN_086bf824(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint unaff_r4;
  int unaff_r5;
  undefined1 *unaff_r6;
  int unaff_r7;
  char cVar8;
  uint unaff_r8;
  char *unaff_r10;
  char unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_ZR && in_NG == (bool)in_OV) {
    unaff_r11 = (char)*(undefined4 *)(unaff_r8 + 0x599);
  }
  if (in_ZR) {
    *param_2 = (int)param_1;
    *param_1 = (int)(param_1 + -0x100);
    puVar6 = (undefined4 *)(((uint)in_CY << 0x1f | unaff_r4 >> 1) - unaff_r5);
    puVar2 = (undefined4 *)(((uint)in_CY << 0x1f | (uint)unaff_r6 >> 1) - unaff_r7);
    puVar1 = unaff_r6 + -0x68;
    *unaff_r6 = (char)puVar2;
    *puVar6 = puVar2;
    param_2 = (int *)((int)puVar6 + -0x802);
    *(undefined4 **)((int)puVar6 + -0x401) = puVar2;
    piVar3 = puVar2 + -0x100;
    *puVar2 = piVar3;
  }
  else {
    puVar1 = (undefined1 *)(((uint)in_CY << 0x1f | unaff_r8 >> 1) - param_4);
    piVar3 = (int *)(puVar1 + -0x461);
    *puVar1 = (char)piVar3;
    puVar1 = unaff_r6;
  }
  piVar4 = piVar3;
  if (in_CY) {
    piVar4 = (int *)((int)piVar3 + 0x481);
    *piVar3 = unaff_r7 + (int)puVar1 * 2;
  }
  if (!in_NG) {
    unaff_r10 = unaff_r10 + 0x4fb;
  }
  piVar3 = param_2;
  if (in_ZR) {
    piVar3 = (int *)((int)param_2 + -0x401);
    *param_2 = (int)piVar4;
  }
  if (!in_CY) {
    piVar4 = (int *)((int)piVar4 + 0x5f1);
  }
  piVar5 = piVar4;
  piVar7 = piVar3;
  if (in_ZR) {
    piVar7 = (int *)((int)piVar3 + -0x401);
    *piVar3 = (int)piVar4;
    piVar5 = piVar4 + -0x100;
    *piVar4 = (int)piVar5;
  }
  cVar8 = (char)unaff_r8;
  if (in_CY && !in_ZR) {
    cVar8 = unaff_r11 + (char)((uint)unaff_r10 >> 1) + in_CY;
  }
  if (in_ZR) {
    *piVar7 = (int)piVar5;
    *(int **)((int)piVar7 + -0x401) = piVar5;
    *(int **)((int)piVar7 + -0x802) = piVar5;
    *(int **)((int)piVar7 + -0xc03) = piVar5;
    *piVar5 = (int)(piVar5 + -0x100);
  }
  if (in_CY && !in_ZR) {
    *unaff_r10 = cVar8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

