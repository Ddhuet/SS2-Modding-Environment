
/* WARNING: Control flow encountered bad instruction data */

void FUN_081deb02(uint param_1,undefined4 *param_2)

{
  undefined2 unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *(undefined2 *)(param_1 + 0x58) = unaff_r11;
  }
  if (!in_CY) {
    in_ZR = false;
    in_NG = '\0';
  }
  if (in_ZR) {
    param_2 = (undefined4 *)*param_2;
  }
  if (!in_ZR && in_NG == in_OV) {
    in_NG = (int)(param_1 & 0xfffffc47) < 0;
    in_ZR = (undefined1 *)(param_1 & 0xfffffc47) == (undefined1 *)0x0;
  }
  if (in_ZR || in_NG != in_OV) {
    *(undefined2 *)((int)param_2 + 0x5a) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

