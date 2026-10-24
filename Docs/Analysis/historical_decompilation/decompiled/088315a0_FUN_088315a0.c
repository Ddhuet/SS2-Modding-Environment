
/* WARNING: Control flow encountered bad instruction data */

void FUN_088315a0(void)

{
  undefined4 uVar1;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_store(6,in_cr14,unaff_lr);
  }
  func_0x07b630a8();
  uVar1 = coprocessor_movefromRt(0xc,6,6,in_cr7,in_cr13);
  coprocessor_storelong2(8,in_cr7,uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

