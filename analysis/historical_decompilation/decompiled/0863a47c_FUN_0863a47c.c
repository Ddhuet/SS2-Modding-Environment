
/* WARNING: Control flow encountered bad instruction data */

void FUN_0863a47c(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 unaff_r4;
  uint unaff_r9;
  uint unaff_r11;
  undefined4 in_r12;
  bool in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool in_OV;
  bool bVar2;
  
  puVar1 = param_2;
  if (in_NG != in_OV) {
    puVar1 = param_2 + -((int)param_2 >> 10);
    *param_2 = (char)unaff_r11;
  }
  if ((bool)in_ZR) {
    unaff_r11 = ((int)puVar1 >> 0xe) - (int)puVar1;
  }
  bVar2 = false;
  if (in_NG) {
    in_CY = 1;
    bVar2 = (int)(unaff_r9 & 0x80000001) < 0;
    in_ZR = (unaff_r9 & 0x80000001) == 0;
  }
  if (in_OV) {
    in_CY = true;
    bVar2 = (int)(unaff_r11 & 0xa0000001) < 0;
    in_ZR = (unaff_r11 & 0xa0000001) == 0;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    *(undefined1 **)(param_1 + 4) = puVar1;
    *(undefined4 *)(param_1 + 8) = param_3;
    *(undefined4 *)(param_1 + 0xc) = param_4;
    *(undefined4 *)(param_1 + 0x10) = unaff_r4;
    *(undefined4 *)(param_1 + 0x14) = in_r12;
    *(undefined4 *)(param_1 + 0x18) = 0x863a494;
  }
  if (bVar2 == in_OV) {
    software_interrupt(0xf44bf0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

