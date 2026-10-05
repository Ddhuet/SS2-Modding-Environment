
/* WARNING: Control flow encountered bad instruction data */

void FUN_087bf97e(undefined4 param_1)

{
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  coprocessor_function(5,0xe,1,in_cr11,in_cr14,in_cr13);
  coprocessor_function(5,0xe,1,in_cr9,in_cr14,in_cr14);
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x071bf9ce(param_1);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    software_interrupt(0xff6777);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

