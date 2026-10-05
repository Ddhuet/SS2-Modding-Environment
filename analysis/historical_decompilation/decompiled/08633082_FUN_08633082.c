
/* WARNING: Control flow encountered bad instruction data */

void FUN_08633082(uint param_1)

{
  uint unaff_r7;
  uint uVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    uVar1 = unaff_r7 ^ 0x863308eU >> (param_1 & 0xff);
    in_NG = (int)uVar1 < 0;
    in_ZR = uVar1 == 0;
  }
  if (in_ZR || in_NG != in_OV) {
    (*(code *)0x0)();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

