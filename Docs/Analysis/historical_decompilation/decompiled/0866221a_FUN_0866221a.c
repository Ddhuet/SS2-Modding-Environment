
/* WARNING: Control flow encountered bad instruction data */

void FUN_0866221a(uint param_1)

{
  undefined4 unaff_r11;
  char in_NG;
  bool in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x0866221e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uRam08662811 = unaff_r11;
  (*(code *)((0x8662226U >> (param_1 & 0x1f) | 0x8662226 << 0x20 - (param_1 & 0x1f)) -
            (!in_CY + 0x8662226)))();
  return;
}

