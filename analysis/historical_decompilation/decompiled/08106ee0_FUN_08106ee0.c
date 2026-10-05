
/* WARNING: Control flow encountered bad instruction data */

void FUN_08106ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 *extraout_r3;
  undefined4 unaff_r5;
  uint unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined1 auStack_345 [837];
  
  if ((bool)in_ZR || in_NG != in_OV) {
    *param_4 = param_1;
    param_4[1] = param_3;
    param_4[2] = param_4;
    param_4[3] = unaff_r5;
    param_4[4] = unaff_r7;
    param_4[5] = unaff_r8;
    param_4[6] = unaff_r10;
    param_4[7] = in_r12;
    param_4[8] = register0x00000054;
    param_4[9] = 0x8106ee8;
  }
  if (!(bool)in_CY) {
    func_0x08a49eb0();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_NG) {
    in_CY = 0x12bfffff < unaff_r7;
    in_OV = SBORROW4(unaff_r7,0x12c00000);
    in_NG = (int)(unaff_r7 + 0xed400000) < 0;
    in_ZR = unaff_r7 == 0x12c00000;
  }
  if ((bool)in_ZR) {
    register0x00000054 = (BADSPACEBASE *)auStack_345;
    param_4 = param_5;
  }
  if (in_NG != in_OV) {
    *(char *)((int)param_4 + ((uint)in_r12 >> 0xb | (int)in_r12 << 0x15)) = (char)register0x00000054
    ;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    if ((bool)in_CY) {
      *in_r12 = param_4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

