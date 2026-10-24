
/* WARNING: Control flow encountered bad instruction data */

void FUN_08600352(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  bool in_CY;
  undefined4 in_cr3;
  
  if (!in_CY) {
    *param_3 = param_2;
    param_3[1] = unaff_r6;
    param_3[2] = unaff_r7;
    param_3[3] = unaff_r8;
    param_3[4] = unaff_r10;
    param_3[5] = in_r12;
    param_3[6] = register0x00000054;
    param_3[7] = 0x860035a;
  }
  if (!in_NG) {
    coprocessor_storelong(6,in_cr3,&stack0x0000026c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

