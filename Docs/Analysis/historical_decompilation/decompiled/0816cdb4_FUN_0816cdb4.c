
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0816cdb4(void)

{
  undefined8 *unaff_r5;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr7;
  
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0xa0b592);
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x06c99068();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    if (in_NG != in_OV) {
      software_interrupt(0xe7d9d4);
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_movefromRt(1,6,6,in_cr7,in_cr5);
    }
    if ((bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *unaff_r5;
}

