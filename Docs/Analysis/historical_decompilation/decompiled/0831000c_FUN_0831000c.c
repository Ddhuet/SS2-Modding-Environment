
/* WARNING: Control flow encountered bad instruction data */

void FUN_0831000c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r11;
  uint in_r12;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (in_CY && !in_ZR) {
    coprocessor_load(5,in_cr11,unaff_r9 + 0x38c);
    in_ZR = (ulonglong)unaff_r4 * (ulonglong)in_r12 == 0;
    unaff_r8 = (undefined4)((ulonglong)unaff_r4 * (ulonglong)in_r12 >> 0x20);
  }
  else {
    uRam08310030 = 0x8310018;
    uRam08310018 = param_1;
    uRam0831001c = param_4;
    uRam08310020 = unaff_r7;
    uRam08310024 = unaff_r8;
    iRam08310028 = unaff_r9;
    uRam0831002c = unaff_r11;
  }
  if (!in_CY || in_ZR) {
    uRam08310024 = unaff_r8;
  }
  coprocessor_storelong(0,in_cr13,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

