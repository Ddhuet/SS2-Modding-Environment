
/* WARNING: Control flow encountered bad instruction data */

void FUN_08627a02(undefined4 *param_1)

{
  undefined4 unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  
  if (in_NG != (bool)in_OV) {
    param_1 = (undefined4 *)((int)param_1 - ((int)param_1 >> 10));
    *param_1 = 0x8627a0e;
    param_1[-1] = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r10;
    param_1[-4] = unaff_r9;
    param_1[-5] = unaff_r8;
    param_1[-6] = unaff_r6;
  }
  if (in_NG) {
    in_ZR = unaff_r9 + (unaff_r8 << ((uint)param_1 & 0xff)) + (uint)in_CY == 0;
  }
  if (!(bool)in_ZR) {
    software_interrupt(0xb01ff0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

