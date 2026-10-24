
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08dfedd8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int extraout_r3;
  int unaff_r4;
  undefined4 unaff_r5;
  int unaff_r7;
  int *unaff_r8;
  undefined4 *unaff_r9;
  undefined4 *unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if ((bool)in_CY && !(bool)in_ZR) {
    unaff_r10[1] = param_2;
    unaff_r10[2] = unaff_r4;
    unaff_r10[3] = unaff_r8;
    unaff_r10[4] = unaff_r10;
    unaff_r10[5] = in_r12;
    unaff_r10[6] = register0x00000054;
    unaff_r10[7] = 0x8dfede0;
    unaff_r10[8] = param_1;
    unaff_r10[9] = unaff_r4;
    unaff_r10[10] = unaff_r5;
    unaff_r10[0xb] = unaff_r9;
    unaff_r10[0xc] = register0x00000054;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    uVar1 = func_0x0768ba34();
    param_4 = extraout_r3;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    *unaff_r8 = param_4;
    unaff_r8[1] = unaff_r4;
    unaff_r8[2] = unaff_r7;
    unaff_r8[3] = (int)unaff_r9;
    unaff_r8[4] = unaff_r11;
    unaff_r8[5] = 0x8dfedf8;
  }
  else {
    *(BADSPACEBASE **)param_4 = register0x00000054;
    *(int **)(param_4 + -4) = unaff_r8;
    *(undefined4 *)(param_4 + -8) = unaff_r5;
    *(int *)(param_4 + -0xc) = unaff_r4;
    *(int *)(param_4 + -0x10) = param_4;
    *(int *)(param_4 + -0x14) = (int)((ulonglong)uVar1 >> 0x20);
    param_4 = param_4 + -0x18;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    unaff_r10 = (undefined4 *)(uint)*(byte *)(unaff_r8 + (int)unaff_r10 * -0x8000);
  }
  else {
    *unaff_r9 = (int)uVar1;
    unaff_r9[1] = param_4;
    unaff_r9[2] = unaff_r7;
    unaff_r9[3] = unaff_r11;
    unaff_r9[4] = 0x8dfee00;
  }
  if (!(bool)in_OV) {
    return unaff_r10[1];
  }
  if (in_NG == '\x01') {
    func_0x077ed06c();
  }
  if (in_NG != in_OV) {
    func_0x0ace54f0();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *unaff_r10;
}

