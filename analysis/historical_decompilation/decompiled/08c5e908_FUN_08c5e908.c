
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c5e908(void)

{
  undefined1 unaff_r4;
  undefined1 *unaff_r5;
  undefined1 unaff_r11;
  char in_NG;
  bool in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    *unaff_r5 = unaff_r11;
    unaff_r5[-0x5b3] = unaff_r4;
  }
  if (!in_CY) {
    func_0x09d8bde4();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

