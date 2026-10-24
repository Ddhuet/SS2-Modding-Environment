
/* WARNING: Control flow encountered bad instruction data */

void FUN_0854d288(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined1 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  int iVar2;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_CY;
  bool bVar3;
  bool bVar4;
  undefined4 in_cr0;
  undefined4 in_cr15;
  
  bVar4 = SBORROW4(unaff_r9,0x34000000) != SBORROW4(unaff_r9 + -0x34000000,(uint)!in_CY);
  iVar2 = unaff_r9 - (!in_CY + 0x34000000);
  bVar3 = iVar2 < 0;
  puVar1 = param_2;
  if (bVar3) {
    puVar1 = param_2 + -(unaff_r7 >> 0x1e | unaff_r7 << 2);
    *param_2 = unaff_r4;
  }
  if (bVar3 != bVar4) {
    unaff_r9 = coprocessor_movefromRt(0,6,3,in_cr0,in_cr15);
  }
  if (iVar2 == 0 || bVar3 != bVar4) {
    software_interrupt(0xd5d5d5);
  }
  if (bVar3 != bVar4) {
    software_interrupt(0xbfd5df);
  }
  if (iVar2 != 0 && bVar3 == bVar4) {
    uRam0854d2d8 = 0x854d2a8;
    puRam0854d2ac = puVar1;
    uRam0854d2b0 = param_4;
    uRam0854d2b4 = unaff_r5;
    uRam0854d2b8 = unaff_r6;
    uRam0854d2bc = unaff_r7;
    uRam0854d2c0 = unaff_r8;
    iRam0854d2c4 = unaff_r9;
    uRam0854d2c8 = unaff_r10;
    iRam0854d2cc = iVar2;
    uRam0854d2d0 = in_r12;
    uRam0854d2d4 = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

