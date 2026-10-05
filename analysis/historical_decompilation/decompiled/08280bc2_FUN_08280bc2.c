
/* WARNING: Control flow encountered bad instruction data */

void FUN_08280bc2(int param_1)

{
  undefined4 uVar1;
  int unaff_r5;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined8 in_d7;
  undefined8 in_d25;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,param_1 + 700);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_storelong(8,in_cr13,unaff_r5 + 0x34c);
  }
  else {
    coprocessor_storelong(9,in_cr12,0x8280ef6);
  }
  uVar1 = VectorGetElement(in_d7,1,4,0);
  FloatVectorMultiplySubtract(in_d25,uVar1,2,0x20);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

