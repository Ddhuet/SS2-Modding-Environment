
/* WARNING: Control flow encountered bad instruction data */

void FUN_08065a28(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined4 unaff_lr;
  bool in_ZR;
  
  if (!in_ZR) {
    *in_r12 = unaff_lr;
    in_r12[-1] = unaff_r11;
    in_r12[-2] = param_3;
    in_r12[-3] = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

