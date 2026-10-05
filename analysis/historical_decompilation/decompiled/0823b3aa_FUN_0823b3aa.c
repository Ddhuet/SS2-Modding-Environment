
/* WARNING: Control flow encountered bad instruction data */

void FUN_0823b3aa(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  int unaff_r5;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  byte bVar1;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr8;
  undefined4 in_cr11;
  
  if (in_ZR) {
    coprocessor_function(5,0xe,5,in_cr11,in_cr2,in_cr8);
  }
  if (!in_CY) {
    *(char *)(param_2 - (param_4 >> 0x1e)) = (char)param_4;
  }
  bVar1 = in_CY;
  if (in_ZR || in_NG != in_OV) {
    bVar1 = 0xf7dc4d0e < in_CY;
    param_2 = 200 - (!in_CY + 0x823b3ba);
  }
  if (-1 < (int)(unaff_r5 + 0xa80000 + (uint)bVar1)) {
    param_3 = param_3 & 0xffff | 0x960a0000;
  }
  func_0x08a8b0ea(param_1,param_2,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

