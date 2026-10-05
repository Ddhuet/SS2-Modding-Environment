
/* WARNING: Control flow encountered bad instruction data */

void FUN_085b875a(void)

{
  uint unaff_r6;
  undefined1 *unaff_r8;
  undefined1 unaff_r11;
  undefined1 unaff_lr;
  bool in_OV;
  
  if (in_OV) {
    *unaff_r8 = unaff_r11;
    unaff_r8[-(unaff_r6 >> 10 | unaff_r6 << 0x16)] = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

