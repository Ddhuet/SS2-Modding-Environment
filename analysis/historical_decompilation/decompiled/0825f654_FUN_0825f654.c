
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825f654(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 unaff_r4;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined1 *unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_CY || in_ZR) {
    in_OV = SCARRY4((int)&stack0x00000000,in_r12 >> 0xb);
    unaff_r11 = &stack0x00000000 + (in_r12 >> 0xb);
    in_NG = (int)unaff_r11 < 0;
    in_ZR = unaff_r11 == (undefined1 *)0x0;
  }
  if (in_NG != in_OV) {
    *param_1 = param_4;
    param_1[1] = unaff_r7;
    param_1[2] = unaff_r8;
    param_1[3] = unaff_r11;
    param_1[4] = 0x825f660;
    param_1 = param_1 + 5;
  }
  if (!in_ZR) {
    func_0x0831a1ac(param_1);
  }
  if (!(bool)in_OV) {
    *(undefined1 *)(unaff_r8 + -0xe35) = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

