
/* WARNING: Control flow encountered bad instruction data */

void FUN_08102d0c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_CY || in_ZR) {
    coprocessor_store(5,in_cr11,unaff_r9);
  }
  if (in_NG != in_OV) {
    uRam08102d3c = 0x8102d18;
    uRam08102d1c = param_2;
    uRam08102d20 = param_3;
    uRam08102d24 = unaff_r4;
    uRam08102d28 = unaff_r7;
    uRam08102d2c = unaff_r8;
    uRam08102d30 = unaff_r10;
    uRam08102d34 = unaff_r11;
    uRam08102d38 = in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

