
/* WARNING: Control flow encountered bad instruction data */

void FUN_080180d2(undefined4 *param_1)

{
  uint uVar1;
  int unaff_r4;
  undefined4 unaff_r10;
  uint unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    uVar1 = unaff_r11 & 0xff;
    in_CY = uVar1 == 0 && in_CY || uVar1 != 0 && (bool)((byte)(unaff_r4 >> uVar1 - 1) & 1);
  }
  if (in_CY) {
    *param_1 = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

