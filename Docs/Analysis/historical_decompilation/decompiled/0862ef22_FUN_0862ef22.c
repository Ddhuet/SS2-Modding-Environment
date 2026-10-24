
/* WARNING: Control flow encountered bad instruction data */

void FUN_0862ef22(uint param_1)

{
  uint uVar1;
  uint unaff_r8;
  uint unaff_r9;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  
  if (!(bool)in_CY) {
    in_CY = 1;
    param_1 = param_1 & 0x218bbcd;
    in_ZR = param_1 == 0;
    in_NG = false;
  }
  if ((bool)in_ZR) {
    software_interrupt(0x991f10);
  }
  if ((bool)in_NG) {
    uVar1 = unaff_r8 >> (param_1 & 0x1f) | unaff_r8 << 0x20 - (param_1 & 0x1f);
    in_CY = unaff_r9 <= uVar1;
    in_ZR = uVar1 == unaff_r9;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    software_interrupt(0x71d9d3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

