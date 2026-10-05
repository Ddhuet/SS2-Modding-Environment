
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d3cd6(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0754134a();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_movefromRt(0,6,6,in_cr13,in_cr14);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

