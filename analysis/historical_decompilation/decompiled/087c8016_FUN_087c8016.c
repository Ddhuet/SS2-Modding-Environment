
/* WARNING: Control flow encountered bad instruction data */

void FUN_087c8016(void)

{
  undefined4 *in_r3;
  undefined4 *puVar1;
  uint unaff_r6;
  uint unaff_r7;
  undefined1 unaff_r11;
  char in_NG;
  bool in_OV;
  
  puVar1 = in_r3;
  if ((bool)in_NG == in_OV) {
    puVar1 = (undefined4 *)((int)in_r3 - (unaff_r6 >> 10 | unaff_r6 << 0x16));
    unaff_r11 = (undefined1)*in_r3;
  }
  if (!in_OV) {
    *(undefined1 *)((int)puVar1 - (unaff_r7 >> 0xb)) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

