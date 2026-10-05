
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ef72d0(void)

{
  int unaff_r7;
  undefined1 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(1,in_cr15,0x8224e10);
    *(undefined1 *)(unaff_r7 + 0x9eb) = unaff_lr;
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_function(1,0xd,7,in_cr14,in_cr15,in_cr3);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x08220a04();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x0798a5cc();
  }
  if (in_NG == in_OV) {
    func_0x0858e1d0();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

