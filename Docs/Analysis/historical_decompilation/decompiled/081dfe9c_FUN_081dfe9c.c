
/* WARNING: Control flow encountered bad instruction data */

void FUN_081dfe9c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  undefined4 unaff_r8;
  undefined1 *unaff_r9;
  int unaff_r10;
  undefined4 in_r12;
  int unaff_lr;
  undefined1 unaff_pc;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    *(undefined4 *)(unaff_lr + 4) = param_1;
    *(uint *)(unaff_lr + 8) = param_3;
    *(uint *)(unaff_lr + 0xc) = unaff_r6;
    *(uint *)(unaff_lr + 0x10) = unaff_r7;
    *(undefined4 *)(unaff_lr + 0x14) = unaff_r8;
    *(int *)(unaff_lr + 0x18) = unaff_r10;
    *(undefined4 *)(unaff_lr + 0x1c) = in_r12;
    *(BADSPACEBASE **)(unaff_lr + 0x20) = register0x00000054;
    *(undefined4 *)(unaff_lr + 0x24) = 0x81dfea4;
  }
  bVar2 = false;
  uVar3 = in_CY;
  if (in_ZR) {
    uVar3 = (undefined1 *)0xc000002a < &stack0x00000000 ||
            &stack0x3fffffd6 < (undefined1 *)(uint)in_CY;
    in_OV = SBORROW4((int)&stack0x00000000,-0x3fffffd6) !=
            SBORROW4((int)&stack0x3fffffd6,(uint)!in_CY);
    in_NG = (int)&stack0x00000000 - (int)(!in_CY + 0xc000002a) < 0;
    bVar2 = &stack0x00000000 == (undefined1 *)(!in_CY + 0xc000002a);
  }
  bVar4 = false;
  if ((bool)in_OV) {
    uVar1 = unaff_r6 >> 10;
    uVar3 = uVar1 <= unaff_r7;
    bVar4 = SBORROW4(unaff_r7,uVar1);
    in_NG = (int)(unaff_r7 - uVar1) < 0;
    bVar2 = unaff_r7 == uVar1;
  }
  if (!bVar2) {
    software_interrupt(0x354c5d);
  }
  if (bVar2 || (bool)in_NG != bVar4) {
    *unaff_r9 = unaff_pc;
  }
  if ((bool)in_NG == bVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_loadlong2(0xf,in_cr11,unaff_r10 + 0x2a8);
  bVar2 = false;
  if (bVar4) {
    param_3 = param_3 >> 2;
    uVar3 = param_3 <= unaff_r7;
    bVar2 = SBORROW4(unaff_r7,param_3);
    in_NG = (int)(unaff_r7 - param_3) < 0;
  }
  if ((bool)uVar3) {
    in_NG = (int)(unaff_r5 ^ 0x174) < 0;
  }
  if ((bool)in_NG != bVar2) {
    func_0x077cf178();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

