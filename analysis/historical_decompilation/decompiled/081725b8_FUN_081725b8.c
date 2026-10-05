
/* WARNING: Control flow encountered bad instruction data */

void FUN_081725b8(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *extraout_r1;
  undefined1 *extraout_r1_00;
  int *extraout_r2;
  int *extraout_r2_00;
  int *extraout_r2_01;
  int *extraout_r2_02;
  int *piVar4;
  int *extraout_r3;
  int *extraout_r3_00;
  int *extraout_r3_01;
  int *extraout_r3_02;
  int *extraout_r3_03;
  int unaff_r4;
  undefined1 *unaff_r5;
  byte *unaff_r6;
  undefined4 *unaff_r7;
  int unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  byte in_r12;
  byte extraout_r12;
  byte extraout_r12_00;
  byte extraout_r12_01;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  if (!(bool)in_CY || (bool)in_ZR) {
    unaff_lr = 0x81725bc;
    uVar5 = func_0x06bdfcac();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *param_4 = unaff_r8;
    piVar4 = param_3;
    param_4 = (int *)((int)param_4 + 0x78f);
  }
  else {
    piVar4 = param_3 + unaff_r8 * 0x2000000;
    unaff_r8 = *param_3;
  }
  if (in_NG == in_OV) {
    unaff_lr = 0x81725c8;
    uVar5 = func_0x06b5ac38();
    piVar4 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    unaff_lr = 0x81725cc;
    uVar5 = func_0x06b5dc88();
    piVar4 = extraout_r2_01;
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  puVar2 = (undefined1 *)((ulonglong)uVar5 >> 0x20);
  if ((bool)in_CY && !(bool)in_ZR) {
    param_4[-0x6d16000] = unaff_r8;
  }
  if (in_NG == in_OV) {
    piVar4 = piVar4 + 0x8f;
    coprocessor_store(8,in_cr9,piVar4);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    in_r12 = in_r12 & 0xfd;
  }
  puVar3 = puVar2 + 0xdd9;
  *puVar2 = 0;
  *unaff_r5 = (char)unaff_lr;
  if (!(bool)in_ZR && in_NG == in_OV) {
    iVar1 = unaff_lr >> 0x13;
    *unaff_r6 = in_r12;
    *unaff_r7 = (int)uVar5;
    unaff_r7[1] = puVar3;
    unaff_r7[2] = piVar4;
    unaff_r7[3] = unaff_r6 + iVar1;
    unaff_r7[4] = unaff_r7;
    unaff_r7[5] = unaff_r8;
    unaff_r7[6] = unaff_r9;
    unaff_r7[7] = unaff_r10;
    unaff_r7[8] = unaff_lr;
    unaff_r7[9] = 0x81725f0;
    software_interrupt(0xcfcdcb);
    if (!(bool)in_ZR && in_NG == in_OV) {
      unaff_lr = 0x81725fc;
      func_0x075e7d60();
      puVar3 = extraout_r1;
      piVar4 = extraout_r2_02;
      param_4 = extraout_r3_02;
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      register0x00000054 = (BADSPACEBASE *)(uint)*(byte *)(unaff_r4 + 0x2ce);
    }
    else {
      *param_4 = (int)puVar3;
      param_4[1] = (int)piVar4;
      param_4[2] = (int)(unaff_r6 + iVar1);
      param_4[3] = (int)unaff_r7;
      param_4[4] = unaff_r8;
      param_4[5] = unaff_r9;
      param_4[6] = unaff_lr;
      param_4[7] = 0x8172604;
      func_0x07567158();
      puVar3 = extraout_r1_00;
      param_4 = extraout_r3_03;
    }
    if (in_NG == in_OV) {
      coprocessor_function(0xc,0xb,6,in_cr11,in_cr4,in_cr5);
    }
    else {
      uRam08172638 = 0x8172614;
      puRam08172618 = puVar3;
      piRam0817261c = param_4;
      puRam08172620 = unaff_r5 + 0x6e5;
      puRam08172624 = unaff_r7;
      iRam08172628 = unaff_r8;
      iRam0817262c = unaff_r9;
      uRam08172630 = unaff_r11;
      puRam08172634 = (undefined1 *)register0x00000054;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

