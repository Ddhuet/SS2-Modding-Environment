
/* WARNING: Control flow encountered bad instruction data */

void FUN_080180ce(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_r4;
  undefined4 unaff_r10;
  uint unaff_r11;
  undefined1 in_ZR;
  undefined1 in_CY;
  
  puVar2 = (undefined4 *)func_0x06a940dc();
  if ((bool)in_CY && !(bool)in_ZR) {
    uVar1 = unaff_r11 & 0xff;
    in_CY = uVar1 == 0 && (bool)in_CY || uVar1 != 0 && (bool)((byte)(unaff_r4 >> uVar1 - 1) & 1);
  }
  if ((bool)in_CY) {
    *puVar2 = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

