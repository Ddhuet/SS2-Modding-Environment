
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0857e3de(void)

{
  undefined4 *unaff_r4;
  undefined4 *unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    return *unaff_r8;
  }
  if (in_NG == in_OV) {
    *(undefined4 *)(unaff_r9 + 0xb0) = unaff_r11;
    *unaff_r4 = unaff_r10;
    *(undefined4 *)(unaff_r9 + 0x554) = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

