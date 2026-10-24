
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d39ac(undefined4 param_1,char param_2)

{
  char cVar1;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr11;
  
  cVar1 = '\0';
  if (in_NG != in_OV) {
    coprocessor_movefromRt(5,5,5,in_cr9,in_cr11);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    cVar1 = -(param_2 + !in_CY);
  }
  software_interrupt(0xdfd4ca);
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x073c8164();
  }
  if (!(bool)in_ZR) {
    cVar1 = cRam081d4197;
  }
  cRam081d4197 = cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

