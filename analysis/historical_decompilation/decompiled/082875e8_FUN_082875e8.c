
/* WARNING: Control flow encountered bad instruction data */

void FUN_082875e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint unaff_r4;
  bool in_CY;
  
  if (!in_CY) {
    *(undefined4 *)(param_4 - (unaff_r4 >> 0xf | unaff_r4 << 0x11)) = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

