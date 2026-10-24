
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f7a10(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int unaff_r5;
  undefined1 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined8 in_d5;
  undefined8 in_d28;
  undefined1 auVar2 [16];
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(5,in_cr11,param_2 + 0x2a4);
  }
  *(undefined1 *)(unaff_r5 + 0xd7) = unaff_lr;
  uVar1 = VectorGetElement(in_d5,1,4,0);
  auVar2 = VectorDoubleMultiplySubtractLong(in_d28,uVar1,4,0);
  SatQ(auVar2,4,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

