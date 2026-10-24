
/* WARNING: Control flow encountered bad instruction data */

void FUN_08be2994(void)

{
  int unaff_r4;
  uint unaff_r5;
  int unaff_r9;
  bool in_ZR;
  
  if ((in_ZR && unaff_r9 == unaff_r4 >> (unaff_r5 & 0xff)) && unaff_r9 == unaff_r4 >> 8) {
    func_0x09a4d6b4();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

