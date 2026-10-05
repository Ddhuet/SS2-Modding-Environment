
/* WARNING: Control flow encountered bad instruction data */

void FUN_081464b6(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *(undefined4 *)(param_3 + 4) = param_2;
    *(undefined4 *)(param_3 + 8) = param_4;
    *(undefined4 *)(param_3 + 0xc) = unaff_r4;
    *(undefined4 *)(param_3 + 0x10) = unaff_r5;
    *(undefined4 *)(param_3 + 0x14) = unaff_r7;
    *(undefined4 *)(param_3 + 0x18) = unaff_r8;
    *(undefined4 *)(param_3 + 0x1c) = unaff_r10;
    *(undefined4 *)(param_3 + 0x20) = in_r12;
    *(BADSPACEBASE **)(param_3 + 0x24) = register0x00000054;
    *(undefined4 *)(param_3 + 0x28) = 0x81464be;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

