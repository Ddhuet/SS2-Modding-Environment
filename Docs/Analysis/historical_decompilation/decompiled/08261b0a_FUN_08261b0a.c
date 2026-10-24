
/* WARNING: Control flow encountered bad instruction data */

void FUN_08261b0a(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_OV;
  
  if (!in_ZR && (bool)in_NG == in_OV) {
    uRam08261b2e = 0x8261b16;
    uRam08261b1a = param_2;
    uRam08261b1e = param_3;
    uRam08261b22 = unaff_r7;
    uRam08261b26 = unaff_r10;
    uRam08261b2a = in_r12;
  }
  if (!in_OV) {
    *(undefined1 *)(param_1 + -0xd38) = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

