
/* WARNING: Control flow encountered bad instruction data */

void FUN_0805a368(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_r10;
  undefined4 unaff_r11;
  bool in_CY;
  undefined1 in_OV;
  
  if (in_CY) {
    *unaff_r10 = unaff_r11;
  }
  puVar1 = (undefined4 *)func_0x0829823c();
  if ((bool)in_OV) {
    *puVar1 = 0x805a370;
    puVar1[-1] = unaff_r11;
    puVar1[-2] = puVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

