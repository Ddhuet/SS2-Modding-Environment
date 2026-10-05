
/* WARNING: Control flow encountered bad instruction data */

void FUN_0868b3ca(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  int extraout_r1;
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  undefined4 unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined1 uVar2;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(in_r12 + -0x50d) = unaff_r11;
  }
  uVar2 = false;
  if (in_ZR) {
    uVar1 = unaff_r8 >> (param_3 & 0x1f) | unaff_r8 << 0x20 - (param_3 & 0x1f);
    in_OV = SBORROW4(uVar1,unaff_r9);
    uVar2 = uVar1 == unaff_r9;
  }
  if (!(bool)in_OV) {
    func_0x07b29f22();
    param_2 = extraout_r1;
  }
  if ((bool)uVar2) {
    *(int *)(param_2 + 4) = param_2;
    *(undefined4 *)(param_2 + 8) = unaff_r4;
    *(undefined4 *)(param_2 + 0xc) = unaff_r6;
    *(undefined4 *)(param_2 + 0x10) = unaff_r7;
    *(undefined4 *)(param_2 + 0x14) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

