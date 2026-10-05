
/* WARNING: Control flow encountered bad instruction data */

void FUN_0869a31c(undefined1 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int extraout_r3;
  undefined1 unaff_r4;
  int unaff_r5;
  undefined1 in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)(unaff_r5 - (unaff_r5 >> 2));
  }
  if ((bool)in_NG) {
    *(undefined1 *)((int)register0x00000054 + 0x5ce) = unaff_r4;
    uRam0869a375 = param_1;
  }
  if (!in_ZR && in_NG == in_OV) {
    param_1 = func_0x08aaba68();
    param_4 = extraout_r3;
  }
  software_interrupt(0x80ca45);
  if ((bool)in_NG) {
    *(undefined1 *)(param_4 + 0x400) = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

