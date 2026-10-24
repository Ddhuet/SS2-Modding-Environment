
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e6b50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(param_1 + 4) = param_4;
    *(undefined4 *)(param_1 + 8) = unaff_r6;
    *(undefined4 *)(param_1 + 0xc) = unaff_r7;
    *(undefined4 *)(param_1 + 0x10) = unaff_r8;
    *(undefined4 *)(param_1 + 0x14) = unaff_r10;
    *(undefined4 *)(param_1 + 0x18) = in_r12;
    *(BADSPACEBASE **)(param_1 + 0x1c) = register0x00000054;
    *(undefined4 *)(param_1 + 0x20) = 0x82e6b58;
  }
  if (!in_CY) {
    coprocessor_loadlong(8,in_cr0,0x82e6b5c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

