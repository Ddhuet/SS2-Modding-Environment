
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a55d4e(int param_1)

{
  int unaff_r10;
  int unaff_r11;
  int iVar1;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr10;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    unaff_lr = 0x8a55d52;
    param_1 = func_0x079431b2();
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8a55d56;
    param_1 = func_0x07844c46();
  }
  iVar1 = unaff_r11;
  if ((bool)in_ZR || in_NG != in_OV) {
    iVar1 = unaff_r11 + 0x370;
    coprocessor_load(0xd,in_cr13,unaff_r11);
  }
  if ((bool)in_CY) {
    coprocessor_load2(9,in_cr13,iVar1 + 0x88);
    if (in_NG != in_OV) {
      param_1 = func_0x07d15d6e();
    }
    if (in_NG != in_OV) {
      coprocessor_load(0,in_cr0,iVar1 + 0xc4);
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      param_1 = func_0x07d56162();
    }
    if (in_NG != in_OV) {
      coprocessor_loadlong(0,in_cr0,&stack0x000003f4);
    }
    if ((bool)in_CY) {
      param_1 = unaff_r10 + 0x10;
    }
    if (in_NG != in_OV) {
      func_0x0961216e(param_1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_loadlong(2,in_cr10,unaff_lr + 0x2b4);
  if (!(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)0x0)();
  return;
}

