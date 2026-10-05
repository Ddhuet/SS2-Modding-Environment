
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c752c8(undefined4 param_1,undefined4 param_2)

{
  int unaff_r4;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr11;
  
  if (in_ZR) {
    software_interrupt(0xddb550);
    coprocessor_store(4,in_cr1,param_2);
  }
  coprocessor_function(0,0xe,0,in_cr0,in_cr0,in_cr0);
  if (in_NG != in_OV) {
    func_0x07bf5554(param_1,param_2);
  }
  if (in_NG != in_OV) {
    func_0x0876155c();
  }
  coprocessor_function(0,0xb,0,in_cr11,in_cr4,in_cr0);
  if (!(bool)in_NG) {
    *(undefined4 *)(unaff_r4 + 0x800) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

