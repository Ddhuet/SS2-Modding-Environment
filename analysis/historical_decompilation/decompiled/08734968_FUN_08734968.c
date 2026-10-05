
/* WARNING: Control flow encountered bad instruction data */

void FUN_08734968(uint param_1)

{
  int unaff_r7;
  char in_NG;
  byte in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    param_1 = param_1 - (param_1 >> 10);
  }
  if (!(bool)in_NG) {
    in_OV = SCARRY4(unaff_r7,param_1) != SCARRY4(unaff_r7 + param_1,(uint)in_CY);
    in_NG = (int)(unaff_r7 + param_1 + (uint)in_CY) < 0;
  }
  if (in_NG != in_OV) {
    param_1 = func_0x09b34c64();
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(0xc,in_cr11,param_1 - 0x300);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

