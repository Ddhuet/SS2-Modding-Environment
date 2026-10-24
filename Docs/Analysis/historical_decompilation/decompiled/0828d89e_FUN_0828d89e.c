
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0828d89e(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 extraout_r3;
  int unaff_r6;
  undefined4 unaff_r8;
  int unaff_r10;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr10;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    software_interrupt(0xc4b5b5);
  }
  if ((bool)in_NG) {
    param_2 = *(int *)(param_2 + -0x1f9);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x07cd1176(param_1,param_2);
    param_4 = extraout_r3;
  }
  if (in_NG != in_OV) {
    return *(undefined8 *)(unaff_r10 + 4);
  }
  if (!(bool)in_NG) {
    if ((bool)in_CY) {
      coprocessor_store(3,in_cr4,0x828d76e);
    }
    *(undefined1 *)(unaff_r6 + -0x82b) = param_4;
    if (!(bool)in_ZR) {
      uRam0828d159 = (undefined1)unaff_r6;
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      coprocessor_store(0xb,in_cr10,unaff_r8);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

