
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819a6fe(int param_1,undefined1 param_2)

{
  undefined1 *unaff_r5;
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    coprocessor_store(5,in_cr11,in_r12 + 0x84);
    software_interrupt(0xf7ebbc);
  }
  if (!in_ZR) {
    coprocessor_function(1,0xf,4,in_cr10,in_cr15,in_cr7);
  }
  if (in_CY && !in_ZR) {
    *unaff_r5 = param_2;
  }
  if (in_CY) {
    coprocessor_store(7,in_cr14,param_1 + -0x2c8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

