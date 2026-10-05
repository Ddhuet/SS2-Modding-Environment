
/* WARNING: Control flow encountered bad instruction data */

void FUN_0868db76(undefined4 param_1,undefined4 *param_2)

{
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_ZR;
  
  if (!in_ZR) {
    *param_2 = 0x868db7e;
    param_2[-1] = register0x00000054;
    param_2[-2] = in_r12;
    param_2[-3] = unaff_r10;
    param_2[-4] = unaff_r8;
    param_2[-5] = unaff_r6;
    param_2[-6] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

