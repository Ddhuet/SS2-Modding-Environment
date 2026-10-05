
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825aef8(undefined1 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_CY;
  
  if (in_CY) {
    *param_2 = param_1;
    param_2[1] = param_4;
    param_2[2] = unaff_r4;
    param_2[3] = unaff_r6;
    param_2[4] = unaff_r7;
    param_2[5] = unaff_r8;
    param_2[6] = unaff_r10;
    param_2[7] = in_r12;
    param_2[8] = register0x00000054;
    param_2[9] = 0x825af00;
  }
  if ((unaff_r8 & 0x22000000) != 0) {
    *param_1 = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

