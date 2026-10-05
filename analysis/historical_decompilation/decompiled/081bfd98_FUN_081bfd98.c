
/* WARNING: Control flow encountered bad instruction data */

void FUN_081bfd98(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
    in_CY = (byte)(param_2 >> 10) & 1;
    param_1 = param_1 | (int)param_2 >> 0xb;
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
  }
  if (in_NG != in_OV) {
    *(uint *)(unaff_r8 + 4) = param_2;
    *(undefined4 *)(unaff_r8 + 8) = param_3;
    *(undefined4 *)(unaff_r8 + 0xc) = param_4;
    *(undefined4 *)(unaff_r8 + 0x10) = unaff_r7;
    *(undefined4 *)(unaff_r8 + 0x14) = unaff_r9;
    *(undefined4 *)(unaff_r8 + 0x18) = unaff_r10;
    *(undefined4 *)(unaff_r8 + 0x1c) = in_r12;
    *(undefined4 *)(unaff_r8 + 0x20) = 0x81bfda8;
    unaff_r8 = unaff_r8 + 0x20;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *unaff_r6 = param_3;
    unaff_r6[1] = unaff_r4;
    unaff_r6[2] = unaff_r5;
    unaff_r6[3] = unaff_r7;
    unaff_r6[4] = unaff_r8;
    unaff_r6[5] = unaff_r10;
    unaff_r6[6] = register0x00000054;
    unaff_r6[7] = 0x81bfdac;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

