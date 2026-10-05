
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_089fccf2(void)

{
  int unaff_r6;
  undefined1 unaff_r11;
  bool in_OV;
  
  if (in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(unaff_r6 + -0x566) = unaff_r11;
  return *(undefined4 *)(unaff_r6 + -0x562);
}

