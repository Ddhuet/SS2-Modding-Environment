
/* WARNING: Control flow encountered bad instruction data */

void FUN_081a2a8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined1 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr5;
  undefined8 in_d5;
  undefined8 unaff_d15;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_storelong(0,in_cr5,param_4);
  }
  if (!in_ZR) {
    *(undefined4 *)(unaff_r8 + -4) = unaff_r7;
    *(undefined4 *)(unaff_r8 + -8) = unaff_r5;
    *(undefined4 *)(unaff_r8 + -0xc) = unaff_r4;
    *(undefined4 *)(unaff_r8 + -0x10) = param_2;
  }
  uVar1 = VectorGetElement(in_d5,1,2,0);
  VectorMultiply(unaff_d15,uVar1,2);
  if (in_CY) {
    uRam081a1ab9 = in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

