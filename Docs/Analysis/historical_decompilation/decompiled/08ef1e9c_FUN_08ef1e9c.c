
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ef1e9c(void)

{
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 *unaff_r10;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY && !in_ZR) {
    *unaff_r10 = in_r3;
    unaff_r10[1] = unaff_r4;
    unaff_r10[2] = unaff_r6;
    unaff_r10[3] = unaff_r10;
    unaff_r10[4] = in_r12;
    unaff_r10[5] = register0x00000054;
    unaff_r10[6] = 0x8ef1ea8;
    func_0x0799f008();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

