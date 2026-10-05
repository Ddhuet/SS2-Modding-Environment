
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08ef0d1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int in_r12;
  bool in_CY;
  bool in_OV;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  undefined4 uStack00000024;
  
  if (!in_CY) {
    *(undefined4 *)(in_r12 + 4) = param_2;
    *(undefined4 *)(in_r12 + 8) = param_3;
    *(undefined4 *)(in_r12 + 0xc) = param_4;
    *(undefined4 *)(in_r12 + 0x10) = unaff_r4;
    *(undefined4 *)(in_r12 + 0x14) = unaff_r6;
    *(undefined4 *)(in_r12 + 0x18) = unaff_r8;
    *(undefined4 *)(in_r12 + 0x1c) = unaff_r10;
    *(int *)(in_r12 + 0x20) = in_r12;
    *(BADSPACEBASE **)(in_r12 + 0x24) = register0x00000054;
    *(undefined4 *)(in_r12 + 0x28) = 0x8ef0d24;
    uStack00000004 = param_1;
    uStack00000008 = param_3;
    uStack00000024 = 0x8ef0d28;
    register0x00000054 = (BADSPACEBASE *)&stack0x00000024;
  }
  if (!in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined4 *)((int)register0x00000054 + 4);
}

