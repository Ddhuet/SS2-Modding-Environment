
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827873e(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr15;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x072a5df6();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_movefromRt(7,6,6,in_cr10,in_cr3);
  }
  if ((bool)in_ZR) {
    coprocessor_function2(0xd,0xf,0,in_cr15,in_cr8,in_cr2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

