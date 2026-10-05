
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0821a9b8(void)

{
  undefined4 *unaff_r5;
  undefined8 *unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
    return *(undefined8 *)(unaff_r8 + 4);
  }
  if (in_NG != in_OV) {
    coprocessor_movefromRt(0xb,5,5,in_cr13,in_cr10);
  }
  if (in_ZR || in_NG != in_OV) {
    return *unaff_r6;
  }
  *unaff_r5 = unaff_r6;
  unaff_r5[1] = unaff_r7;
  unaff_r5[2] = unaff_r8;
  unaff_r5[3] = unaff_r9;
  unaff_r5[4] = unaff_lr;
  unaff_r5[5] = 0x821a9d0;
  coprocessor_storelong(7,in_cr14,unaff_r10 + 0x390);
  func_0x08017da8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

