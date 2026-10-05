
/* WARNING: Control flow encountered bad instruction data */

void FUN_08301d28(void)

{
  undefined4 unaff_r6;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr5;
  undefined4 in_cr13;
  
  func_0x0772f146();
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_function(3,1,6,in_cr0,in_cr5,in_cr13);
  }
  func_0x07778528();
  if (!(bool)in_CY) {
    coprocessor_loadlong(0xf,in_cr13,unaff_r6);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

