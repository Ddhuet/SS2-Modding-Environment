
/* WARNING: Control flow encountered bad instruction data */

void FUN_080f0fc4(undefined1 param_1,undefined4 param_2,int param_3)

{
  uint unaff_r8;
  undefined4 unaff_r10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_CY && !in_ZR) {
    coprocessor_load(5,in_cr11,param_3 + 0x340);
  }
  if (in_NG == in_OV) {
    coprocessor_moveto(3,6,4,unaff_r10,in_cr10,in_cr14);
    if (in_NG != in_OV) {
      coprocessor_store(0xf,in_cr11,&stack0x00000000);
    }
    if (!in_ZR && in_NG == in_OV) {
      *(undefined1 *)(unaff_r8 + (unaff_r8 >> 3 | unaff_r8 << 0x1d)) = param_1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

