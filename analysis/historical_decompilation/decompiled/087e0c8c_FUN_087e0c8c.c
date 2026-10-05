
/* WARNING: Control flow encountered bad instruction data */

void FUN_087e0c8c(uint param_1,undefined4 param_2)

{
  uint unaff_r4;
  uint unaff_r5;
  uint *unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar1;
  uint *unaff_r11;
  uint *puVar2;
  int extraout_r12;
  int extraout_r12_00;
  int iVar3;
  bool in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  char cVar4;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr13;
  undefined8 uVar5;
  
  if ((bool)in_ZR) {
    unaff_r11 = (uint *)(((uint)unaff_r7 >> (unaff_r5 & 0x1f) |
                         (int)unaff_r7 << 0x20 - (unaff_r5 & 0x1f)) - unaff_r9);
  }
  if (in_NG) {
    puVar2 = unaff_r11 + param_1 * 0x20;
    *(char *)unaff_r11 = (char)unaff_r5;
  }
  else {
    unaff_r9 = *(int *)(unaff_r9 + 0x447);
    puVar2 = unaff_r11;
  }
  if ((bool)in_OV) {
    unaff_r7 = (uint *)*puVar2;
  }
  cVar4 = false;
  if (in_NG) {
    param_1 = *unaff_r7 | 0x74;
    cVar4 = (int)param_1 < 0;
    in_ZR = param_1 == 0;
  }
  if (!(bool)cVar4) {
    param_1 = unaff_r4 ^ 0x54;
  }
  if (!(bool)in_ZR && cVar4 == in_OV) {
    uVar5 = func_0x07302290(param_1);
    param_2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    param_1 = (uint)uVar5;
  }
  iVar1 = unaff_r10 + 0x1dc;
  coprocessor_load(5,in_cr6,unaff_r10);
  if (cVar4 != in_OV) {
    iVar1 = *(int *)(unaff_r8 + -0xc);
    param_2 = *(undefined4 *)(unaff_r8 + -0x20);
  }
  if (!(bool)in_ZR && cVar4 == in_OV) {
    func_0x06ac2654(param_1,param_2);
  }
  func_0x0734aa9c();
  if (!(bool)in_ZR && cVar4 == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = extraout_r12;
  if (cVar4 == in_OV) {
    func_0x076366ec();
    iVar3 = extraout_r12_00;
  }
  if ((bool)in_ZR || cVar4 != in_OV) {
    coprocessor_load(7,in_cr10,unaff_r9 + 0x98);
    coprocessor_store(9,in_cr13,iVar3 + 0x264);
  }
  else {
    coprocessor_load(8,in_cr9,iVar1);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x07ace774();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

