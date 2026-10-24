
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827428e(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  uint uVar1;
  uint unaff_r4;
  undefined4 unaff_r5;
  int unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  uint unaff_r11;
  undefined4 in_r12;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (in_NG != in_OV) {
    unaff_r11 = unaff_r4 & 0xcdffffff;
    unaff_r7 = unaff_r7 + 0x2f4;
    coprocessor_load(1,in_cr12,unaff_r7);
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_load(0xb,in_cr11,unaff_lr + 0x2ec);
  }
  if (in_NG != in_OV) {
    uVar1 = unaff_r8 >> 0x13;
    in_OV = SCARRY4(unaff_r7,uVar1) != SCARRY4(unaff_r7 + uVar1,(uint)in_CY);
    unaff_r11 = unaff_r7 + uVar1 + (uint)in_CY;
    in_NG = (int)unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if (in_NG == in_OV) {
    param_3 = param_3 + 0x3ed;
    unaff_r11 = *param_3;
    unaff_r10 = coprocessor_movefromRt(0,5,5,in_cr0,in_cr11);
  }
  if (!in_ZR && in_NG == in_OV) {
    *(undefined4 *)(unaff_r11 + 4) = param_1;
    *(uint **)(unaff_r11 + 8) = param_3;
    *(undefined4 *)(unaff_r11 + 0xc) = param_4;
    *(uint *)(unaff_r11 + 0x10) = unaff_r4;
    *(undefined4 *)(unaff_r11 + 0x14) = unaff_r5;
    *(int *)(unaff_r11 + 0x18) = unaff_r7;
    *(undefined4 *)(unaff_r11 + 0x1c) = unaff_r9;
    *(undefined4 *)(unaff_r11 + 0x20) = unaff_r10;
    *(undefined4 *)(unaff_r11 + 0x24) = in_r12;
    *(BADSPACEBASE **)(unaff_r11 + 0x28) = register0x00000054;
    *(undefined4 *)(unaff_r11 + 0x2c) = 0x82742ae;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

