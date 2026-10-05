
/* WARNING: Control flow encountered bad instruction data */

void FUN_08655bce(undefined4 *param_1)

{
  int unaff_r7;
  undefined4 unaff_r11;
  bool in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  
  if (in_NG != (bool)in_OV) {
    *param_1 = unaff_r11;
  }
  if (in_NG) {
    in_ZR = unaff_r7 * 2 + (uint)in_CY == 0;
  }
  if ((bool)in_ZR) {
    software_interrupt(0xf05ff0);
  }
  else {
    software_interrupt(0xd040b8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

