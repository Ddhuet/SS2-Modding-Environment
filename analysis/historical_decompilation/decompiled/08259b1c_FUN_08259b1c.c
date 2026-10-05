
/* WARNING: Control flow encountered bad instruction data */

void FUN_08259b1c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_OV;
  
  if (in_OV) {
    *(int *)param_2 = param_2;
    *(undefined4 *)(param_2 + 4) = param_3;
    *(undefined4 *)(param_2 + 8) = param_4;
    *(undefined4 *)(param_2 + 0xc) = unaff_r4;
    *(undefined4 *)(param_2 + 0x10) = unaff_r7;
    *(undefined4 *)(param_2 + 0x14) = unaff_r8;
    *(undefined4 *)(param_2 + 0x18) = unaff_r10;
    *(undefined4 *)(param_2 + 0x1c) = in_r12;
    *(BADSPACEBASE **)(param_2 + 0x20) = register0x00000054;
    *(undefined4 *)(param_2 + 0x24) = 0x8259b24;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

