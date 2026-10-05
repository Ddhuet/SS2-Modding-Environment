
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08aae3fa(int param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r8;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  char in_OV;
  bool bVar2;
  
  if (in_NG != in_OV) {
    param_1 = func_0x0a89baea();
    in_r12 = extraout_r12;
  }
  if (!(bool)in_OV) {
    *(int *)(unaff_r11 + 4) = param_1;
    *(undefined4 *)(unaff_r11 + 8) = unaff_r4;
    *(undefined4 *)(unaff_r11 + 0xc) = unaff_r8;
    *(undefined4 *)(unaff_r11 + 0x10) = in_r12;
  }
  bVar2 = false;
  bVar1 = (bool)in_CY;
  if ((bool)in_ZR) {
    bVar1 = (bool)in_CY != false;
    param_1 = -(uint)!(bool)in_CY;
    bVar2 = param_1 == 0;
  }
  if (bVar2) {
    software_interrupt(0xf);
  }
  if (bVar1 && !bVar2) {
    bVar2 = param_1 == 0;
  }
  if (!bVar1 || bVar2) {
    param_1 = *(int *)(param_1 + -0x20);
  }
  if (bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined4 *)(param_1 + -0x18);
}

