
/* WARNING: Control flow encountered bad instruction data */

void FUN_0818bd02(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int unaff_r8;
  undefined1 *unaff_lr;
  undefined1 unaff_pc;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (in_CY) {
    coprocessor_store(0xc,in_cr13,param_2);
  }
  if (in_ZR || in_NG != in_OV) {
    UnsignedSaturate(param_4 << 0x1e,0x1b);
    UnsignedDoesSaturate(param_4 << 0x1e,0x1b);
  }
  coprocessor_loadlong(0xf,in_cr14,unaff_r8);
  if (!in_ZR) {
    coprocessor_load(5,in_cr13,unaff_r8 + 0x3e4);
  }
  if (in_CY && !in_ZR) {
    *unaff_lr = unaff_pc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

