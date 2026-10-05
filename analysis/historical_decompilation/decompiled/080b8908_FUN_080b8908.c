
/* WARNING: Control flow encountered bad instruction data */

int FUN_080b8908(uint param_1,uint *param_2)

{
  uint uVar1;
  uint unaff_r7;
  uint unaff_r10;
  uint in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_CY;
  bool bVar2;
  
  if (in_NG) {
    in_r12 = param_2[-1];
    unaff_r10 = param_2[-3];
    param_2 = param_2 + -5;
    param_1 = *param_2;
  }
  bVar2 = false;
  if (in_CY) {
    uVar1 = param_1 >> (unaff_r10 & 0xff);
    bVar2 = unaff_r7 <= uVar1;
    in_NG = (int)(uVar1 - unaff_r7) < 0;
  }
  if (!in_NG) {
    if (!bVar2 && (int)(param_1 & (uint)param_2) < 0) {
      *(undefined4 *)(unaff_r10 - 4) = unaff_lr;
      *(BADSPACEBASE **)(unaff_r10 - 8) = register0x00000054;
      *(uint *)(unaff_r10 - 0xc) = in_r12;
      *(uint *)(unaff_r10 - 0x10) = param_1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1 - 8;
}

