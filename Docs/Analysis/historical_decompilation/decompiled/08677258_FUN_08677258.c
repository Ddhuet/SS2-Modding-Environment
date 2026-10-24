
/* WARNING: Control flow encountered bad instruction data */

void FUN_08677258(uint param_1)

{
  int unaff_r10;
  uint unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr7;
  
  if (in_ZR) {
    in_OV = SBORROW4(param_1 * 0x400,unaff_r10);
    unaff_r11 = param_1 * 0x400 - unaff_r10;
    in_NG = (int)unaff_r11 < 0;
  }
  if (in_NG != in_OV) {
    in_OV = SBORROW4(unaff_r11 >> (param_1 & 0x1f) | unaff_r11 << 0x20 - (param_1 & 0x1f),in_r12);
  }
  if (!(bool)in_OV) {
    coprocessor_function(0xd,10,0,in_cr7,in_cr0,in_cr7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

