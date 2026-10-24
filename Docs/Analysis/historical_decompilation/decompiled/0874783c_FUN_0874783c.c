
/* WARNING: Control flow encountered bad instruction data */

void FUN_0874783c(void)

{
  undefined4 in_r3;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_ZR;
  
  if (in_ZR) {
    *(undefined4 *)(unaff_r7 + -4) = unaff_lr;
    *(undefined4 *)(unaff_r7 + -8) = in_r12;
    *(undefined4 *)(unaff_r7 + -0xc) = unaff_r9;
    *(undefined4 *)(unaff_r7 + -0x10) = unaff_r8;
    *(undefined4 *)(unaff_r7 + -0x14) = in_r3;
    func_0x09c0a198();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

