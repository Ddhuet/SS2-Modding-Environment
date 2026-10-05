
/* WARNING: Control flow encountered bad instruction data */

void FUN_085a69b4(void)

{
  int unaff_r9;
  int unaff_r11;
  bool in_ZR;
  bool in_CY;
  undefined1 in_OV;
  undefined4 in_cr7;
  undefined4 in_cr11;
  
  if (!in_CY || in_ZR) {
    coprocessor_loadlong(5,in_cr11,unaff_r11 + 0x154);
    coprocessor_loadlong(7,in_cr7,unaff_r11 + 0x154);
    coprocessor_loadlong(5,in_cr7,unaff_r11 + 0x88);
    coprocessor_loadlong(2,in_cr7,unaff_r11 + 0x88);
  }
  if (!(bool)in_OV) {
    coprocessor_loadlong(2,in_cr7,unaff_r9 + 0x88);
    func_0x07403254();
  }
  if (!(bool)in_OV) {
    func_0x073fb218();
  }
  if (!(bool)in_OV) {
    func_0x06bfb21c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

