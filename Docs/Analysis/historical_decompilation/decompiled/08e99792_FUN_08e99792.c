
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e99792(uint param_1,undefined4 param_2,undefined4 *param_3,uint *param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint *extraout_r3;
  uint *unaff_r4;
  uint *unaff_r5;
  byte *unaff_r10;
  byte *unaff_r11;
  byte *pbVar3;
  undefined1 in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if ((bool)in_NG) {
    unaff_r11 = (byte *)*param_3;
    puVar1 = param_3 + -0x2a9;
    unaff_r5 = *(uint **)((int)param_3 + -0x55a);
    param_3 = (undefined4 *)((int)param_3 + -0xede);
    unaff_r4 = (uint *)*puVar1;
  }
  if (in_NG == in_OV) {
    puVar2 = (undefined1 *)*param_4;
    param_4 = (uint *)(puVar2 + -0x334);
    *puVar2 = (char)param_4;
  }
  if (in_ZR) {
    param_1 = func_0x07bd97ba((uint)unaff_r11 & param_1,param_2,param_3);
    param_4 = extraout_r3;
  }
  if (in_NG != in_OV) {
    *unaff_r5 = param_1;
  }
  if ((bool)in_NG) {
    *unaff_r4 = param_1;
  }
  if ((bool)in_CY) {
    in_CY = true;
    in_NG = 1;
  }
  else {
    *param_4 = param_1;
    param_4 = (uint *)((int)param_4 + 0xff7);
    *param_4 = (uint)unaff_r11;
  }
  if ((bool)in_CY) {
    unaff_r5 = (uint *)(unaff_r11 + -0xc800);
    unaff_r11 = (byte *)((uint)unaff_r11 ^ 0x32000000);
    in_NG = (int)unaff_r11 < 0;
  }
  pbVar3 = unaff_r11;
  if ((bool)in_NG) {
    pbVar3 = unaff_r11 + -0x554;
    unaff_r5 = (uint *)(uint)*unaff_r11;
  }
  if ((bool)in_OV) {
    pbVar3[-0x455] = (byte)param_4;
    *unaff_r10 = (byte)param_4;
    *unaff_r5 = (uint)param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

