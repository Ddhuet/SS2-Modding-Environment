
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a4ed64(void)

{
  int *piVar1;
  int extraout_r12;
  int extraout_r12_00;
  int iVar2;
  int extraout_r12_01;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined8 uVar3;
  
  func_0x0797c2c6();
  iVar2 = extraout_r12;
  if (in_NG != in_OV) {
    func_0x0813dab4();
    iVar2 = extraout_r12_00;
  }
  coprocessor_load2(0xb,in_cr12,iVar2 + 0x2ec);
  coprocessor_loadlong2(0xd,in_cr13,&stack0x00000000);
  if ((bool)in_ZR) {
    software_interrupt(0x32b9aa);
  }
  uVar3 = func_0x07919fea();
  if (!(bool)in_CY) {
    register0x00000054 = (BADSPACEBASE *)(extraout_r12_01 + 0xb900);
    in_ZR = (undefined1 *)register0x00000054 == (undefined1 *)0x0;
  }
  coprocessor_store(0xc,in_cr13,(undefined1 *)((int)register0x00000054 + -0x2ec));
  if (!(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar1 = (int *)((uint)uVar3 & 0x8a4ed90);
  *piVar1 = (int)(piVar1 + -0x2293b69);
  piVar1[1] = (int)((ulonglong)uVar3 >> 0x20);
  (*(code *)0x0)();
  return;
}

