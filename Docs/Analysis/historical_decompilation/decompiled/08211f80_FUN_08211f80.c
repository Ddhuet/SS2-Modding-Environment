
/* WARNING: Control flow encountered bad instruction data */

void FUN_08211f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint unaff_r4;
  int unaff_r8;
  undefined4 *unaff_r10;
  char in_NG;
  byte in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,unaff_r8 + 0x2d4);
  }
  if (unaff_r4 <= (uint)(param_4 >> 0x15) && (uint)in_CY <= unaff_r4 - (param_4 >> 0x15)) {
    *unaff_r10 = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

