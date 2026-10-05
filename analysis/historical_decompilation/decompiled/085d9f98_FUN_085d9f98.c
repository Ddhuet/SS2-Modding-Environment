
/* WARNING: Control flow encountered bad instruction data */

void FUN_085d9f98(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r11;
  undefined4 in_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool in_OV;
  undefined4 in_cr7;
  
  if (!in_OV) {
    in_CY = false;
    unaff_r11 = param_4 & 0xd97fffff;
    in_NG = (int)unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    param_3 = *(undefined4 *)(unaff_r9 + 4);
    param_4 = *(uint *)(unaff_r9 + 8);
    unaff_r7 = *(undefined4 *)(unaff_r9 + 0x10);
    unaff_r8 = *(int *)(unaff_r9 + 0x14);
    unaff_r11 = *(uint *)(unaff_r9 + 0x18);
  }
  if ((bool)in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_NG == in_OV) {
    *(undefined4 *)(unaff_r8 + 4) = param_3;
    *(uint *)(unaff_r8 + 8) = param_4;
    *(undefined4 *)(unaff_r8 + 0xc) = unaff_r6;
    *(undefined4 *)(unaff_r8 + 0x10) = unaff_r7;
    *(uint *)(unaff_r8 + 0x14) = unaff_r11;
    *(undefined4 *)(unaff_r8 + 0x18) = in_r12;
    *(undefined4 *)(unaff_r8 + 0x1c) = 0x85d9fb4;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    return;
  }
  if ((bool)in_CY) {
    coprocessor_loadlong(0xb,in_cr7,param_2 + -0x44);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

