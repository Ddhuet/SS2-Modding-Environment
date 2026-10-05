
/* WARNING: Control flow encountered bad instruction data */

void FUN_08261f60(undefined1 param_1,undefined4 param_2,int param_3)

{
  int extraout_r2;
  undefined4 unaff_r4;
  int *unaff_r5;
  int *piVar1;
  int unaff_r9;
  undefined1 *in_r12;
  undefined1 *extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr4;
  
  if (in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar1 = unaff_r5;
  if (in_NG != in_OV) {
    piVar1 = (int *)((int)unaff_r5 + 0x687);
    *unaff_r5 = unaff_r9;
  }
  if (!(bool)in_ZR) {
    param_1 = func_0x082dbe94();
    param_3 = extraout_r2;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_OV) {
    coprocessor_storelong(0xd,in_cr4,unaff_r4);
  }
  if ((bool)in_NG) {
    piVar1 = *(int **)(unaff_r9 + -0x18);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(1,in_cr1,piVar1);
  }
  if (in_NG == in_OV) {
    if (!(bool)in_OV) {
      software_interrupt(0x6e553d);
    }
    if ((bool)in_NG) {
      in_OV = SBORROW4(param_3,-0x33ffffff);
      in_ZR = param_3 == -0x33ffffff;
    }
    if ((bool)in_ZR || ((bool)in_NG && param_3 + 0x33ffffff < 0) != (bool)in_OV) {
      *in_r12 = param_1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

