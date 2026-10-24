
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c8c5c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_r6;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int in_r12;
  char in_NG;
  bool in_OV;
  undefined4 in_cr3;
  undefined4 in_cr14;
  
  if ((bool)in_NG == in_OV) {
    coprocessor_moveto(8,7,2,in_r12,in_cr14,in_cr3);
  }
  if (in_OV) {
    *(undefined4 *)(in_r12 + 4) = param_1;
    *(undefined4 *)(in_r12 + 8) = param_2;
    *(undefined4 *)(in_r12 + 0xc) = unaff_r6;
    *(undefined4 *)(in_r12 + 0x10) = unaff_r9;
    *(undefined4 *)(in_r12 + 0x14) = unaff_r10;
    *(BADSPACEBASE **)(in_r12 + 0x18) = register0x00000054;
    *(undefined4 *)(in_r12 + 0x1c) = 0x8c8c5d0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

