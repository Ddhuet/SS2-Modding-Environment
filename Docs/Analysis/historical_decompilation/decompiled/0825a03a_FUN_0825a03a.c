
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825a03a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_store(5,in_cr11,param_1);
  }
  if (in_ZR) {
    software_interrupt(0x902f5);
  }
  if (in_CY) {
    *param_4 = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

