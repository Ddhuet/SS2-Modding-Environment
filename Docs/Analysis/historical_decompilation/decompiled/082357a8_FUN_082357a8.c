
/* WARNING: Control flow encountered bad instruction data */

void FUN_082357a8(void)

{
  int in_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  undefined4 unaff_pc;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == (bool)in_OV) {
    *(undefined4 *)(in_r3 + 4) = unaff_r4;
    *(undefined4 *)(in_r3 + 8) = unaff_r5;
    *(undefined4 *)(in_r3 + 0xc) = unaff_r7;
    *(undefined4 *)(in_r3 + 0x10) = unaff_r8;
    *(undefined4 *)(in_r3 + 0x14) = unaff_r10;
    *(undefined4 *)(in_r3 + 0x18) = in_r12;
    *(BADSPACEBASE **)(in_r3 + 0x1c) = register0x00000054;
    *(undefined4 *)(in_r3 + 0x20) = 0x82357b0;
  }
  if (in_ZR) {
    uRam082357b4 = unaff_pc;
  }
  if (!in_NG) {
    func_0x09347064();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

