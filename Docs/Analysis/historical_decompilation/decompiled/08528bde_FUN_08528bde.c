
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08528c42) */
/* WARNING: Removing unreachable block (ram,0x08528c3e) */
/* WARNING: Removing unreachable block (ram,0x08528c46) */

void FUN_08528bde(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int unaff_r8;
  char *unaff_r9;
  int unaff_r10;
  int unaff_r11;
  ushort *puVar4;
  int in_r12;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  piVar1 = param_1;
  if (in_NG != in_OV) {
    piVar1 = (int *)((int)param_1 * -0x3ff);
    *param_1 = unaff_r11;
  }
  if ((bool)in_ZR) {
    puVar4 = (ushort *)((uint)piVar1 & (int)piVar1 << 0xe);
    unaff_r9 = unaff_r9 + unaff_r8;
    unaff_r11 = (int)puVar4 + unaff_r10;
    piVar1 = (int *)(uint)*puVar4;
  }
  if (in_NG != in_OV) {
    coprocessor_store(0xc,in_cr11,piVar1);
    software_interrupt(0xbe00);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    in_ZR = false;
    in_NG = '\0';
  }
  piVar2 = piVar1;
  if (!(bool)in_ZR && in_NG == in_OV) {
    piVar2 = piVar1 + -0xc0;
    *piVar1 = in_r12;
  }
  if ((bool)in_ZR) {
    piVar2 = (int *)(unaff_r9 + -((unaff_r8 >> 1) + (uint)!(bool)in_CY));
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = 0x8528c0e;
    piVar2 = (int *)func_0x0855b412();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_store(0xc,in_cr12,piVar2);
  }
  uVar5 = false;
  uVar6 = in_CY;
  if ((bool)in_ZR) {
    uVar3 = unaff_lr - (int)((int)piVar2 + (uint)!(bool)in_CY);
    uVar6 = 0x429460f < uVar3 || uVar3 + 0xfbd6b9f1 < (uint)(byte)in_CY;
    in_OV = SBORROW4(uVar3,0x429460f) != SBORROW4(uVar3 + 0xfbd6b9f1,(uint)!(bool)in_CY);
    piVar2 = (int *)(uVar3 - (!(bool)in_CY + 0x429460f));
    in_NG = (int)piVar2 < 0;
    uVar5 = piVar2 == (int *)0x0;
  }
  if ((bool)uVar5 || in_NG != in_OV) {
    uVar3 = (uint)piVar2 & 0xd1;
    piVar2 = (int *)(uVar3 - 0x300);
    *(BADSPACEBASE **)uVar3 = register0x00000054;
  }
  if ((bool)uVar5) {
    register0x00000054 = (BADSPACEBASE *)((uint)piVar2 & (int)piVar2 << 10);
    piVar2 = (int *)(int)*unaff_r9;
  }
  if ((bool)uVar5 || in_NG != in_OV) {
    unaff_lr = 0x8528c32;
    piVar2 = (int *)func_0x0855f436();
  }
  if ((bool)uVar5 || in_NG != in_OV) {
    coprocessor_store(0xc,in_cr13,piVar2);
  }
  if ((bool)uVar5) {
    piVar2 = (int *)(unaff_lr - (unaff_r8 + (uint)!(bool)uVar6));
  }
  piVar2[-1] = 0x8528c52;
  piVar2[-2] = unaff_lr;
  piVar2[-3] = (int)register0x00000054;
  piVar2[-4] = unaff_r11;
  func_0x08563456();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

