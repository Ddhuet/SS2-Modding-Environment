
/* WARNING: Control flow encountered bad instruction data */

void FUN_0826ea22(void)

{
  undefined4 *in_r3;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY || in_ZR) {
    coprocessor_function(0,8,4,in_cr8,in_cr11,in_cr7);
  }
  else {
    coprocessor_movefromRt(10,4,4,in_cr6,in_cr5);
  }
  if (in_NG == in_OV) {
    coprocessor_function(1,9,4,in_cr8,in_cr7,in_cr5);
  }
  if (!in_CY || in_ZR) {
    *in_r3 = unaff_r11;
  }
  if (in_ZR || in_NG != in_OV) {
    func_0x0791c8ae();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

