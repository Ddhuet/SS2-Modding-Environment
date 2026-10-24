
/* WARNING: Control flow encountered bad instruction data */

void FUN_08273846(undefined4 param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined1 *unaff_r4;
  uint unaff_r5;
  uint unaff_r7;
  uint unaff_r8;
  uint *unaff_r10;
  uint unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr10;
  
  if (in_NG == in_OV) {
    unaff_r4 = unaff_r4 + (param_2 >> 0xb | param_2 << 0x15);
    *unaff_r4 = (char)unaff_r11;
  }
  if (!in_CY || in_ZR) {
    coprocessor_load(9,in_cr10,0x8273852);
  }
  if (in_NG == in_OV) {
    in_CY = true;
    in_NG = (int)((uint)param_4 | 0xe000000a) < 0;
    in_ZR = ((uint)param_4 | 0xe000000a) == 0;
  }
  puVar1 = param_4;
  if (in_CY && !in_ZR) {
    puVar1 = (undefined4 *)((int)param_4 + 0x582);
    *param_4 = unaff_r10;
  }
  if (in_NG == in_OV) {
    *unaff_r10 = param_2;
    unaff_r10[1] = param_3;
    unaff_r10[2] = (uint)puVar1;
    unaff_r10[3] = (uint)unaff_r4;
    unaff_r10[4] = unaff_r5;
    unaff_r10[5] = unaff_r7;
    unaff_r10[6] = unaff_r8;
    unaff_r10[7] = unaff_r11;
    unaff_r10[8] = (uint)register0x00000054;
    unaff_r10[9] = 0x827385e;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

