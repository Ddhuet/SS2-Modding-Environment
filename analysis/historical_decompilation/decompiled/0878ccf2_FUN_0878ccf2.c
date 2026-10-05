
/* WARNING: Control flow encountered bad instruction data */

void FUN_0878ccf2(void)

{
  uint unaff_r5;
  int unaff_r7;
  undefined1 unaff_r11;
  bool in_NG;
  bool in_ZR;
  
  if (!in_ZR) {
    *(undefined1 *)(unaff_r7 + (unaff_r5 >> 0xb)) = unaff_r11;
  }
  if (!in_NG) {
    func_0x0877118a();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

