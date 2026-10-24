
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ef0534(void)

{
  undefined4 unaff_r8;
  int unaff_r11;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_moveto(5,7,5,unaff_r11,in_cr15,in_cr9);
  }
  software_interrupt(0xeefeee);
  coprocessor_moveto(0xe,7,7,unaff_lr,in_cr14,in_cr14);
  if (in_NG != in_OV) {
    func_0x0799f43c();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_CY) {
    coprocessor_storelong(0xd,in_cr13,unaff_r8);
  }
  if ((bool)in_NG) {
    if (!(bool)in_ZR && in_OV == '\x01') {
      coprocessor_function(0xd,0xf,6,in_cr13,in_cr14,in_cr12);
    }
    coprocessor_storelong(9,in_cr10,unaff_r11 + 0x2a8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

