
/* WARNING: Control flow encountered bad instruction data */

void FUN_088b5264(void)

{
  int unaff_r10;
  int unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(5,in_cr11,unaff_r10 + 0x150);
    coprocessor_storelong(0xc,in_cr11,unaff_r11 + 0x3b4);
    coprocessor_function(0xb,0xc,7,in_cr10,in_cr10,in_cr11);
  }
  if (in_NG != in_OV) {
    func_0x077e4228();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x0779c230();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

