
/* WARNING: Control flow encountered bad instruction data */

void FUN_08109638(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r10;
  int in_r12;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr15;
  
  *(undefined4 *)(unaff_r4 + 4) = param_1;
  *(undefined4 *)(unaff_r4 + 8) = param_2;
  *(undefined4 *)(unaff_r4 + 0xc) = param_4;
  *(int *)(unaff_r4 + 0x10) = unaff_r4;
  *(undefined4 *)(unaff_r4 + 0x14) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x18) = unaff_r7;
  *(undefined4 **)(unaff_r4 + 0x1c) = unaff_r8;
  *(undefined4 *)(unaff_r4 + 0x20) = unaff_r10;
  *(int *)(unaff_r4 + 0x24) = in_r12;
  *(BADSPACEBASE **)(unaff_r4 + 0x28) = register0x00000054;
  *(undefined4 *)(unaff_r4 + 0x2c) = 0x8109640;
  if (in_ZR) {
    coprocessor_function(6,2,0,in_cr2,in_cr3,in_cr15);
  }
  if (in_OV) {
    *unaff_r8 = unaff_pc;
  }
  if ((bool)in_NG != in_OV) {
    coprocessor_storelong(1,in_cr1,in_r12 + 0x174);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

