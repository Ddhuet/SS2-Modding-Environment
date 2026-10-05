
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08f5913e(int param_1)

{
  uint unaff_r5;
  int unaff_r9;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  
  if ((bool)in_CY && !(bool)in_ZR) {
    if (in_NG != in_OV) {
      unaff_r5 = (uint)*(byte *)(param_1 + -8);
    }
    if (!(bool)in_NG) {
      coprocessor_load(1,in_cr0,unaff_r9 + 0x60);
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      param_1 = func_0x07159152();
    }
    if (in_NG != in_OV) {
      param_1 = *(int *)(unaff_r5 - 8);
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      *(int *)(unaff_r5 - 5) = param_1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined4 *)(param_1 + -0x24);
}

