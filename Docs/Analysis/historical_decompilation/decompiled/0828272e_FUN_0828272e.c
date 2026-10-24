
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828272e(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined8 uVar3;
  
  if (in_CY && !in_ZR) {
    unaff_r11 = param_3 - ((int)param_1 * 0x800 + (uint)!in_CY);
  }
  piVar1 = param_1;
  if (!in_ZR && in_NG == (bool)in_OV) {
    piVar1 = (int *)*param_1;
    param_2 = param_1[1];
    param_4 = param_1[2];
    unaff_r5 = param_1[3];
    unaff_r7 = param_1[4];
    unaff_r9 = param_1[5];
    register0x00000054 = (BADSPACEBASE *)param_1[7];
  }
  if (in_NG) {
    unaff_r10 = unaff_r10 + 200;
    coprocessor_storelong(1,in_cr15,unaff_r10);
  }
  uVar3 = func_0x084f6cda(piVar1,param_2,param_3,param_4);
  iVar2 = (int)uVar3;
  if (!in_CY || in_ZR) {
    *(undefined4 *)(unaff_r9 + 4) = extraout_r2;
    *(int *)(unaff_r9 + 8) = unaff_r7;
    *(undefined4 *)(unaff_r9 + 0xc) = unaff_r8;
    *(int *)(unaff_r9 + 0x10) = unaff_r9;
    *(int *)(unaff_r9 + 0x14) = unaff_r11;
    *(undefined4 *)(unaff_r9 + 0x18) = 0x8282746;
  }
  else {
    *(undefined8 *)(iVar2 + 4) = uVar3;
    *(undefined4 *)(iVar2 + 0xc) = unaff_r4;
    *(int *)(iVar2 + 0x10) = unaff_r5;
    *(int *)(iVar2 + 0x14) = unaff_r7;
    *(int *)(iVar2 + 0x18) = unaff_r9;
    *(int *)(iVar2 + 0x1c) = unaff_r10;
    *(int *)(iVar2 + 0x20) = unaff_r11;
    *(undefined1 **)(iVar2 + 0x24) =
         (undefined1 *)((int)register0x00000054 + (uint)in_CY + iVar2 * 2);
    *(undefined4 *)(iVar2 + 0x28) = 0x828274e;
  }
  if (in_NG == (bool)in_OV) {
    coprocessor_store(0,in_cr8,unaff_r7 + 0x208);
  }
  if (in_NG) {
    unaff_r5 = unaff_r5 - ((uint)register0x00000054 >> 0x1e);
  }
  if (!in_CY) {
    coprocessor_loadlong(3,in_cr12,unaff_r5);
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    software_interrupt(0x7bdd4);
  }
  if (!in_ZR) {
    coprocessor_function(7,6,6,in_cr5,in_cr9,in_cr14);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

