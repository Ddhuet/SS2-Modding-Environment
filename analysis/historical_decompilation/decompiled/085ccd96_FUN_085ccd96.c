
/* WARNING: Control flow encountered bad instruction data */

void FUN_085ccd96(void)

{
  undefined1 *unaff_r4;
  undefined1 *unaff_r5;
  undefined1 unaff_r9;
  undefined1 unaff_r11;
  bool in_NG;
  bool in_OV;
  
  if (in_NG) {
    *unaff_r4 = unaff_r11;
    unaff_r4[-0x544] = unaff_r9;
    unaff_r4[-0xc88] = unaff_r9;
  }
  else {
    *unaff_r4 = unaff_r9;
  }
  if (!in_OV) {
    *unaff_r5 = unaff_r9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

