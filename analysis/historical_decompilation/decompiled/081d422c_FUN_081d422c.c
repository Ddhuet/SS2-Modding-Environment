
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d422c(undefined4 param_1,uint param_2,undefined4 param_3,undefined1 param_4)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    coprocessor_store(5,in_cr11,unaff_r8);
    *in_r12 = param_1;
    in_r12[1] = unaff_r4;
    in_r12[2] = unaff_r5;
    in_r12[3] = unaff_r7;
    in_r12[4] = unaff_r8 + 0x2f0;
    in_r12[5] = unaff_r9;
    in_r12[6] = unaff_r11;
    in_r12[7] = in_r12;
    in_r12[8] = register0x00000054;
    in_r12[9] = 0x81d4238;
    in_r12 = in_r12 + 10;
  }
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_loadlong2(7,in_cr14,in_r12 + 10);
  if (!in_CY) {
    *(undefined1 *)(unaff_r4 - (param_2 >> 0x18)) = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

