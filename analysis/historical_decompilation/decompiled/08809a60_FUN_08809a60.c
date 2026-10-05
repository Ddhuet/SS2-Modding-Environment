
/* WARNING: Control flow encountered bad instruction data */

void FUN_08809a60(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined4 unaff_r11;
  int in_r12;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr1;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  coprocessor_load2(5,in_cr11,in_r12 + 0x44);
  coprocessor_moveto(5,6,0,unaff_r11,in_cr12,in_cr1);
  if (!in_OV) {
    unaff_r5 = (int)((((ulonglong)param_4 << 0x20) + (longlong)param_3 * (longlong)param_3 &
                     0xffffffff00000000) + (longlong)param_3 * (longlong)param_3 + 0x80000000 >>
                    0x20);
  }
  if (in_CY && !in_ZR) {
    *(char *)(unaff_r5 - ((int)param_4 >> 6)) = (char)unaff_r5;
  }
  if (in_OV) {
    *(char *)(unaff_r7 - ((int)param_4 >> 10)) = (char)unaff_r7;
  }
  else {
    unaff_r6 = (int)((ulonglong)
                     (CONCAT44(unaff_r6,unaff_r7) +
                     ((longlong)(short)param_3 * (longlong)(short)unaff_r5 -
                     (longlong)(short)((uint)param_3 >> 0x10) *
                     (longlong)(short)((uint)unaff_r5 >> 0x10))) >> 0x20);
  }
  if (!in_CY) {
    *(char *)(unaff_r6 + -0x434) = (char)unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

