
/* WARNING: Control flow encountered bad instruction data */

void FUN_08872e6a(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r8;
  undefined1 unaff_r9;
  bool in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool in_OV;
  
  if (in_NG) {
    in_CY = false;
    in_ZR = (param_2 & 0x20800000) == 0;
  }
  if (!in_OV) {
    param_2 = (uint)((ulonglong)
                     (CONCAT44(param_2,unaff_r8) +
                      (longlong)(short)param_2 * (longlong)(short)((uint)unaff_r4 >> 0x10) +
                     (longlong)(short)(param_2 >> 0x10) * (longlong)(short)unaff_r4) >> 0x20);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *(undefined1 *)(param_2 - (param_4 >> 0xe)) = unaff_r9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

