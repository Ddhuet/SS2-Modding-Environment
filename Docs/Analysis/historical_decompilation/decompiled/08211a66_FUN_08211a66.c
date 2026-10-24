
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08211a66(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint extraout_r2;
  uint extraout_r2_00;
  undefined4 *extraout_r3;
  undefined4 *extraout_r3_00;
  uint unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  undefined1 *unaff_r9;
  undefined1 *puVar5;
  uint unaff_r10;
  undefined4 unaff_r11;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  undefined1 *puVar6;
  uint unaff_lr;
  undefined4 unaff_pc;
  char in_NG;
  bool in_CY;
  char in_OV;
  undefined1 uVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined8 uVar12;
  
  uVar12 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    return CONCAT44(param_2,param_1);
  }
  uVar1 = unaff_r5 >> 3;
  bVar8 = uVar1 < unaff_r10;
  bVar2 = unaff_r10 - uVar1 < (uint)in_CY;
  uVar10 = bVar8 || bVar2;
  uVar11 = SBORROW4(unaff_r10,uVar1) != SBORROW4(unaff_r10 - uVar1,(uint)!in_CY);
  iVar3 = -(uVar1 + !in_CY);
  puVar6 = (undefined1 *)(unaff_r10 + iVar3);
  uVar7 = (int)(unaff_r10 + iVar3) < 0;
  uVar9 = unaff_r10 == uVar1 + !in_CY;
  if (!(bool)uVar9) {
    *(undefined4 *)(param_2 - (unaff_r7 >> 5 | unaff_r7 << 0x1b)) = unaff_pc;
  }
  puVar5 = unaff_r9;
  if (!(bool)uVar11) {
    puVar5 = unaff_r9 + -0x133;
    *unaff_r9 = (char)unaff_r5;
  }
  if (bVar8 || bVar2) {
    *(uint *)(unaff_r4 - 4) = unaff_lr;
    *(int *)(unaff_r4 - 8) = in_r12;
    *(undefined4 *)(unaff_r4 - 0xc) = unaff_r11;
    *(uint *)(unaff_r4 - 0x10) = unaff_r10;
    *(int *)(unaff_r4 - 0x14) = unaff_r8;
    *(uint *)(unaff_r4 - 0x18) = unaff_r6;
    *(int *)(unaff_r4 - 0x1c) = unaff_r5;
    *(uint *)(unaff_r4 - 0x20) = unaff_r4;
  }
  if (uVar7 != uVar11) {
    unaff_lr = unaff_lr & ~((unaff_r10 + iVar3) * 0x10000000);
  }
  if ((bVar8 || bVar2) && !(bool)uVar9) {
    software_interrupt(0x8f929d);
  }
  if ((bool)uVar9 || uVar7 != uVar11) {
    coprocessor_storelong(6,in_cr10,param_1 + 600);
  }
  if ((bool)uVar9) {
    unaff_lr = 0x8211a8a;
    uVar12 = func_0x08351a5e();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  uVar4 = (undefined4)uVar12;
  bVar8 = false;
  if ((bool)uVar7) {
    uVar1 = unaff_r6 & 0xff;
    uVar10 = uVar1 == 0 && (bool)uVar10 ||
             uVar1 != 0 && (bool)((byte)(unaff_r7 >> 0x20 - uVar1) & 1);
    param_3 = unaff_r4 ^ unaff_r7 << uVar1;
    bVar8 = (int)param_3 < 0;
    uVar9 = param_3 == 0;
  }
  if (!(bool)uVar11) {
    unaff_r5 = 0x4b00000 - unaff_r5;
  }
  if (bVar8) {
    coprocessor_moveto(7,3,3,unaff_r7,in_cr9,in_cr9);
  }
  if (bVar8 != (bool)uVar11) {
    unaff_r5 = unaff_r5 + ((uint)puVar5 >> 0x1c);
  }
  if ((bool)uVar10 && !(bool)uVar9) {
    unaff_r8 = unaff_r5 + 0x27c;
  }
  if (bVar8 == (bool)uVar11) {
    software_interrupt(0xa19589);
  }
  if (!(bool)uVar9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar8) {
    puVar6 = *(undefined1 **)puVar5;
    in_r12 = *(int *)(puVar5 + -4);
    unaff_r5 = *(int *)(puVar5 + -8);
    param_4 = *(undefined4 **)(puVar5 + -0xc);
    uVar4 = *(undefined4 *)(puVar5 + -0x10);
    puVar5 = puVar5 + -0x14;
    uVar7 = true;
  }
  else {
    uVar10 = (undefined1 *)0x56 < (undefined1 *)(unaff_r10 + iVar3);
    uVar11 = SBORROW4(unaff_r10 + iVar3,0x57);
    unaff_r6 = (unaff_r10 + iVar3) - 0x57;
    uVar7 = (int)unaff_r6 < 0;
    uVar9 = unaff_r6 == 0;
  }
  uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),uVar4);
  if ((bool)uVar9) {
    unaff_lr = 0x8211ab2;
    uVar12 = func_0x08a5efc6();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if (!(bool)uVar9 && uVar7 == uVar11) {
    return *(undefined8 *)(unaff_r8 + 4);
  }
  if (!(bool)uVar9 && uVar7 == uVar11) {
    in_r12 = in_r12 + 0x8bd;
  }
  *(char *)((int)uVar12 + 0x410) = (char)puVar6;
  if (!(bool)uVar9) {
    *param_4 = 0x8211ac6;
    param_4[-1] = unaff_lr;
    param_4[-2] = puVar6;
    param_4[-3] = in_r12;
    param_4[-4] = unaff_r10;
    param_4[-5] = puVar5;
    param_4[-6] = unaff_r8;
    param_4[-7] = unaff_r7;
    param_4[-8] = unaff_r6;
    param_4[-9] = unaff_r5;
    param_4[-10] = param_4;
    param_4[-0xb] = param_3;
    param_4[-0xc] = (int)((ulonglong)uVar12 >> 0x20);
  }
  if ((bool)uVar11) {
    *(char *)((int)uVar12 + -0xa23) = (char)unaff_r4;
  }
  if (uVar7 != uVar11) {
    *(char *)(unaff_lr + unaff_r10 * 0x400000) = (char)unaff_lr;
  }
  if ((bool)uVar10 && !(bool)uVar9) {
    software_interrupt(0x939ca7);
  }
  if ((bool)uVar9 || uVar7 != uVar11) {
    coprocessor_moveto(0xd,6,4,unaff_r10,in_cr7,in_cr8);
  }
  if ((bool)uVar9) {
    coprocessor_function(9,0,7,in_cr15,in_cr3,in_cr14);
  }
  if (!(bool)uVar10) {
    coprocessor_load(7,in_cr2,param_3 - 0x6c);
  }
  if ((bool)uVar11) {
    software_interrupt(0x64574a);
  }
  if ((bool)uVar7) {
    *(char *)((int)param_4 + -0x375) = (char)unaff_r7;
  }
  if (uVar7 != uVar11) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)uVar10 && !(bool)uVar9) {
    software_interrupt(0x8c92a2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

