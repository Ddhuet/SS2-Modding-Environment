
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e629a(void)

{
  char in_NG;
  bool in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr7;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_ZR || in_NG != in_OV) {
    in_OV = SCARRY4((int)&stack0x00000000,0x3cc00000) != SCARRY4((int)&stack0x3cc00000,(uint)in_CY);
    in_NG = (int)(&stack0x3cc00000 + in_CY) < 0;
  }
  if ((bool)in_NG) {
    coprocessor_function(6,2,0,in_cr15,in_cr1,in_cr15);
  }
  if (in_NG != in_OV) {
    coprocessor_movefromRt(0xc,5,5,in_cr14,in_cr7);
  }
  if ((bool)in_NG) {
    coprocessor_movefromRt(0xb,0,5,in_cr13,in_cr13);
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

