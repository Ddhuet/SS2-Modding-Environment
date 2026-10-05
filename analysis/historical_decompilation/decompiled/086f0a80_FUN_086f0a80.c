
/* WARNING: Control flow encountered bad instruction data */

void FUN_086f0a80(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 unaff_r4;
  byte unaff_r9;
  bool in_NG;
  bool in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined8 in_d3;
  undefined8 unaff_d9;
  undefined8 in_d18;
  
  if (in_NG) {
    coprocessor_movefromRt(5,5,0,in_cr11,in_cr7);
  }
  else {
    *(undefined4 *)(param_3 + -0xf21) = unaff_r4;
  }
  bVar1 = false;
  if (in_ZR) {
    in_CY = CARRY4(param_2,param_3 << (uint)unaff_r9);
    bVar1 = param_2 + (param_3 << (uint)unaff_r9) == 0;
  }
  if (!(bool)in_CY || bVar1) {
    *(byte *)(param_3 + -0x442) = unaff_r9;
  }
  FloatVectorMultiplyAccumulate(in_d18,unaff_d9,2,8);
  VectorShiftRight(in_d3,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

