
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df7e98(int param_1)

{
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr9;
  
  if (in_NG != in_OV) {
    in_CY = true;
    in_OV = '\0';
    in_NG = '\x01';
    in_ZR = 0;
  }
  if ((bool)in_CY) {
    software_interrupt(11599999);
  }
  software_interrupt(0xaf4fb0);
  if (in_NG == in_OV) {
    coprocessor_store(0xf,in_cr9,param_1 + -0x2b8);
    param_1 = func_0x0ade3270();
  }
  if (!(bool)in_OV) {
    software_interrupt(0xa85fa9);
  }
  if (!(bool)in_CY) {
    software_interrupt(0xa67fa7);
  }
  if (in_NG == in_OV) {
    in_CY = false;
    in_ZR = false;
    in_NG = '\0';
  }
  if ((bool)in_ZR) {
    software_interrupt(0x9f0fa0);
  }
  else {
    software_interrupt(0xa1001f);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_store(0xf,in_cr0,param_1 + -0x278);
    param_1 = func_0x091def14();
  }
  if ((bool)in_ZR) {
    in_CY = true;
    in_NG = false;
  }
  if (!(bool)in_NG) {
    software_interrupt(0x983f99);
  }
  if (!(bool)in_OV) {
    software_interrupt(0x967f97);
  }
  if (!(bool)in_CY) {
    in_CY = true;
  }
  if ((bool)in_CY) {
    software_interrupt(0x91007f);
    coprocessor_store(0xf,in_cr6,param_1 + -0x238);
    func_0x09ddb2b8();
  }
  else {
    software_interrupt(0x8f4f90);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

