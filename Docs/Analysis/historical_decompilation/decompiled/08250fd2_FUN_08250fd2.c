
/* WARNING: Control flow encountered bad instruction data */

void FUN_08250fd2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  
  *(undefined4 *)(unaff_r9 + 4) = param_3;
  *(undefined4 *)(unaff_r9 + 8) = param_4;
  *(undefined4 *)(unaff_r9 + 0xc) = unaff_r4;
  *(undefined4 *)(unaff_r9 + 0x10) = unaff_r7;
  *(undefined4 *)(unaff_r9 + 0x14) = unaff_r8;
  *(undefined4 *)(unaff_r9 + 0x18) = unaff_r10;
  *(undefined4 *)(unaff_r9 + 0x1c) = in_r12;
  *(BADSPACEBASE **)(unaff_r9 + 0x20) = register0x00000054;
  *(undefined4 *)(unaff_r9 + 0x24) = 0x8250fda;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

