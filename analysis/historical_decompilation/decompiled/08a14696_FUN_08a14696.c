
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a14696(uint param_1)

{
  int unaff_r11;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  bool bVar1;
  
  if ((bool)in_OV) {
    param_1 = func_0x0771e07e();
  }
  else {
    unaff_r11 = *(int *)(unaff_r11 + 0x577);
  }
  if ((bool)in_OV) {
    param_1 = func_0x0771d03e();
  }
  bVar1 = false;
  if ((bool)in_ZR) {
    bVar1 = (param_1 & 0x8a146b6) == unaff_r11 + (uint)!(bool)in_CY;
  }
  if (bVar1) {
    software_interrupt(0xbb0000);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

