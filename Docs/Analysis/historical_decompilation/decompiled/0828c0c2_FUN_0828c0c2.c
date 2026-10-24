
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828c0c2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG == in_OV) {
    *param_4 = param_3;
    param_4[1] = unaff_r6;
    param_4[2] = unaff_r7;
    param_4[3] = unaff_r8;
    param_4[4] = unaff_r10;
    param_4[5] = in_r12;
    param_4[6] = register0x00000054;
    param_4[7] = 0x828c0ca;
  }
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    if (in_NG != in_OV) {
      software_interrupt(0xe5bbad);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

