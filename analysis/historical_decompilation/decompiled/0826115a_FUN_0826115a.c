
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0826115a(int param_1)

{
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    return CONCAT44(*(undefined4 *)(param_1 + 8),param_1 + 0x2c);
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_function(0xf,0xb,5,in_cr9,in_cr14,in_cr1);
  }
  if (!in_CY) {
    software_interrupt(0x3216fc);
  }
  if (!in_ZR) {
    register0x00000054 = *(BADSPACEBASE **)(in_r12 + -8);
  }
  if (in_NG != in_OV) {
    coprocessor_moveto(0xf,6,7,register0x00000054,in_cr6,in_cr9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

