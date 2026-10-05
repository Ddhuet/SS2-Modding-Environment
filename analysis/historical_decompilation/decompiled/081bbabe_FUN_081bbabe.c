
/* WARNING: Control flow encountered bad instruction data */

void FUN_081bbabe(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr7;
  
  if (!(bool)in_NG) {
    *unaff_r6 = param_2;
    unaff_r6[1] = param_3;
    unaff_r6[2] = param_4;
    unaff_r6[3] = unaff_r4;
    unaff_r6[4] = unaff_r8;
    unaff_r6[5] = unaff_r10;
    unaff_r6[6] = in_r12;
    unaff_r6[7] = register0x00000054;
    unaff_r6[8] = 0x81bbac6;
  }
  if (in_CY) {
    func_0x07fef30a();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_movefromRt(0,0xb,in_cr7);
    coprocessor_movefromRt2(0,0xb,in_cr7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

