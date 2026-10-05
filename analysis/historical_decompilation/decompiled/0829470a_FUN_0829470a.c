
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x081542c6) */

void FUN_0829470a(undefined4 param_1)

{
  int in_r12;
  int extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr9;
  
  if (in_NG == in_OV) {
    param_1 = func_0x07041e0e();
    in_r12 = extraout_r12;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    software_interrupt(0xa1a6a6);
    coprocessor_load(0xd,in_cr9,in_r12);
    coprocessor_load(0xc,in_cr9,in_r12 + 0x270);
    software_interrupt(0x9e9e9d);
  }
  if (in_NG != in_OV) {
    in_ZR = false;
  }
  if ((bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x08093ede(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

