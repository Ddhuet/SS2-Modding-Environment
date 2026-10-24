
/* WARNING: Control flow encountered bad instruction data */

void FUN_08118d5e(void)

{
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr7;
  undefined4 in_cr8;
  
  if (in_ZR || in_NG != in_OV) {
    func_0x07d11cc8();
    if (!in_ZR) {
      coprocessor_function(1,1,0,in_cr1,in_cr8,in_cr7);
    }
    if ((bool)in_CY) {
      software_interrupt(0x2b2723);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

