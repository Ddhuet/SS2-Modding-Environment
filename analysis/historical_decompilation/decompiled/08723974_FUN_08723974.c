
/* WARNING: Control flow encountered bad instruction data */

void FUN_08723974(undefined4 *param_1)

{
  undefined4 *puVar1;
  int unaff_r9;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  byte in_CY;
  bool in_OV;
  undefined4 in_cr0;
  
  puVar1 = param_1;
  if ((bool)in_NG != in_OV) {
    puVar1 = (undefined4 *)((int)param_1 * -0x7ff);
    unaff_r11 = *param_1;
  }
  if (!in_OV) {
    coprocessor_moveto(7,4,0,unaff_r11,in_cr0,in_cr0);
  }
  if ((bool)in_NG == in_OV) {
    puVar1 = (undefined4 *)(unaff_r9 + (int)puVar1 * 0x40 + (uint)in_CY);
    software_interrupt(0xd03fac);
  }
  if (!in_ZR) {
    coprocessor_loadlong(1,in_cr0,puVar1);
    software_interrupt(0xf01d50);
    software_interrupt(0xf01ff0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

