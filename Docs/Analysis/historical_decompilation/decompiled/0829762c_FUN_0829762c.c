
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08297638) */

void FUN_0829762c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  uint uVar1;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  uVar1 = param_3 & 0xcfffffff;
  if (!in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZR && in_NG == in_OV) {
    *(uint *)(uVar1 + 4) = param_3;
    *(undefined4 *)(uVar1 + 8) = unaff_r4;
    *(undefined4 *)(uVar1 + 0xc) = unaff_r8;
    *(undefined4 *)(uVar1 + 0x10) = unaff_r9;
    *(uint *)(uVar1 + 0x14) = uVar1;
    *(BADSPACEBASE **)(uVar1 + 0x18) = register0x00000054;
    *(undefined4 *)(uVar1 + 0x1c) = unaff_lr;
    *(undefined4 *)(uVar1 + 0x20) = 0x829763c;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

