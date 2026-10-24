
/* WARNING: Control flow encountered bad instruction data */

void FUN_081fd48e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    software_interrupt(0xb2b5b9);
    *unaff_r8 = param_3;
    unaff_r8[1] = param_4;
    unaff_r8[2] = unaff_r5;
    unaff_r8[3] = unaff_r7;
    unaff_r8[4] = unaff_r9;
    unaff_r8[5] = unaff_r11;
    unaff_r8[6] = register0x00000054;
    unaff_r8[7] = 0x81fd49a;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

