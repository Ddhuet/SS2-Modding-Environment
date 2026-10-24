
/* WARNING: Control flow encountered bad instruction data */

void FUN_08241d16(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int in_r12;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(in_r12 + 4) = param_3;
    *(undefined4 *)(in_r12 + 8) = param_4;
    *(undefined4 *)(in_r12 + 0xc) = unaff_r4;
    *(undefined4 *)(in_r12 + 0x10) = unaff_r7;
    *(undefined4 *)(in_r12 + 0x14) = unaff_r8;
    *(undefined4 *)(in_r12 + 0x18) = unaff_r10;
    *(int *)(in_r12 + 0x1c) = in_r12;
    *(BADSPACEBASE **)(in_r12 + 0x20) = register0x00000054;
    *(undefined4 *)(in_r12 + 0x24) = 0x8241d1e;
  }
  if ((bool)in_OV) {
    func_0x09d5d29e();
    param_3 = extraout_r2;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_moveto(0xd,0,2,param_3,in_cr3,in_cr13);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

