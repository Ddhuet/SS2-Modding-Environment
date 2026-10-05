
/* WARNING: Control flow encountered bad instruction data */

void FUN_085bf2f2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  undefined4 *unaff_r7;
  int unaff_r8;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_OV) {
    *unaff_r7 = param_2;
    unaff_r7[1] = param_4;
    unaff_r7[2] = unaff_r5;
    unaff_r7[3] = unaff_r7;
    unaff_r7[4] = unaff_r11;
    unaff_r7[5] = in_r12;
    unaff_r7[6] = register0x00000054;
    unaff_r7[7] = unaff_lr;
    param_1 = *(undefined4 *)(unaff_r8 + 4);
    param_2 = *(undefined4 *)(unaff_r8 + 8);
    param_3 = *(undefined4 *)(unaff_r8 + 0xc);
  }
  if (in_NG != in_OV) {
    func_0x0741cc9e(param_1,param_2,param_3);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x07ced5be();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

