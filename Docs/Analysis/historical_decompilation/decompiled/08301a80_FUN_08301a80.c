
/* WARNING: Control flow encountered bad instruction data */

void FUN_08301a80(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  undefined4 unaff_r8;
  int unaff_r9;
  int iVar2;
  int in_r12;
  bool in_CY;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr13;
  
  bVar4 = unaff_r6 < 0x39400000 || 0x39400000 - unaff_r6 < (uint)in_CY;
  bVar6 = SBORROW4(0x39400000,unaff_r6) != SBORROW4(0x39400000 - unaff_r6,(uint)!in_CY);
  iVar2 = 0x39400000 - (unaff_r6 + !in_CY);
  bVar3 = iVar2 == 0;
  bVar5 = bVar4;
  iVar1 = 0;
  if (!bVar3) {
    bVar5 = 0xffffc67f < unaff_r6 || CARRY4(unaff_r6 + 0x3980,(uint)bVar4);
    bVar6 = SCARRY4(unaff_r6,0x3980) != SCARRY4(unaff_r6 + 0x3980,(uint)bVar4);
    param_1 = unaff_r6 + 0x3980 + (uint)bVar4;
    bVar3 = param_1 == 0;
    iVar1 = param_1;
  }
  bVar4 = iVar1 < 0;
  if (bVar4 != bVar6) {
    software_interrupt(0xc2db);
  }
  if (bVar5) {
    software_interrupt(0xcedffb);
  }
  if (!bVar3 && bVar4 == bVar6) {
    software_interrupt(0xeef708);
  }
  if (bVar4) {
    coprocessor_load(3,in_cr3,in_r12 + -0x3ec);
  }
  if (bVar5) {
    coprocessor_store(0,in_cr0,unaff_r5 + -0x6c);
  }
  if (bVar3 || bVar4 != bVar6) {
    coprocessor_storelong(4,in_cr2,unaff_r4 + 0x3bc);
  }
  if (!bVar6) {
    param_3 = (int *)((int)param_3 + -0x915);
    param_1 = *param_3;
  }
  if (!bVar3) {
    coprocessor_store(0xf,in_cr3,unaff_r6 - 0x40);
    param_3 = (int *)((uint)param_3 & param_4 << 8);
  }
  coprocessor_loadlong(2,in_cr13,param_3 + 0xf6);
  if (bVar3 || bVar4 != bVar6) {
    *(BADSPACEBASE **)unaff_r9 = register0x00000054;
    *(int *)(unaff_r9 + -4) = iVar2;
    *(undefined4 *)(unaff_r9 + -8) = unaff_r8;
    *(int *)(unaff_r9 + -0xc) = unaff_r5;
    *(int **)(unaff_r9 + -0x10) = param_3 + 0xf6;
    *(undefined4 *)(unaff_r9 + -0x14) = param_2;
    *(int *)(unaff_r9 + -0x18) = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

