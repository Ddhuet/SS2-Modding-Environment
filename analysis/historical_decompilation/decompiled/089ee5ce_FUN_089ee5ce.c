
/* WARNING: Control flow encountered bad instruction data */

void FUN_089ee5ce(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 *unaff_r8;
  undefined4 unaff_r10;
  int *unaff_r11;
  undefined4 in_r12;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_CY && !in_ZR) {
    *unaff_r8 = param_2;
    unaff_r8[1] = unaff_r5;
    unaff_r8[2] = unaff_r8;
    unaff_r8[3] = unaff_r10;
    unaff_r8[4] = in_r12;
    unaff_r8[5] = register0x00000054;
    unaff_r8[6] = 0x89ee5d6;
    unaff_r6 = *unaff_r11;
  }
                    /* WARNING: Could not recover jumptable at 0x089ee5d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(unaff_r6 + -0xff5))();
  return;
}

