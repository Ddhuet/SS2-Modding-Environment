
/* WARNING: Control flow encountered bad instruction data */

void FUN_08173c74(undefined4 param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  uint unaff_r7;
  undefined1 *unaff_r8;
  undefined4 unaff_r9;
  undefined1 unaff_r10;
  int unaff_r11;
  undefined1 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (!(bool)in_NG) {
    iVar1 = (int)unaff_r8 >> 10;
    in_OV = SBORROW4(iVar1,(int)unaff_r8) != SBORROW4(iVar1 - (int)unaff_r8,(uint)!in_CY);
    unaff_r11 = iVar1 - (int)(unaff_r8 + !in_CY);
    in_NG = unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if ((bool)in_OV) {
    param_3 = param_3 + (unaff_r7 >> 0x1c | unaff_r7 << 4);
    *param_3 = unaff_r10;
  }
  if (in_NG != in_OV) {
    unaff_r8 = unaff_r8 + -0x4b5;
    *unaff_r8 = unaff_lr;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    param_2 = *(undefined4 *)(unaff_r7 + 4);
    unaff_r9 = *(undefined4 *)(unaff_r7 + 0x14);
    unaff_lr = (undefined1)*(undefined4 *)(unaff_r7 + 0x20);
  }
  if ((bool)in_OV) {
    coprocessor_loadlong(0xf,in_cr11,unaff_r9);
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(4,in_cr13,unaff_r11 + -0x2f0);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    param_4 = param_4 + 0x340;
    coprocessor_load(0xe,in_cr6,param_4);
  }
  if ((bool)in_OV) {
    unaff_lr = 0x9c;
    func_0x07b5f25c(param_1,param_2,param_3,param_4);
  }
  if (in_NG == in_OV) {
    *unaff_r8 = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

