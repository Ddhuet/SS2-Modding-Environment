
/* WARNING: Control flow encountered bad instruction data */

void FUN_08196bcc(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,undefined1 param_4)

{
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr9;
  
  software_interrupt(0xcdb5ad);
  if (in_NG) {
    *param_3 = param_4;
  }
  *param_1 = param_2;
  if (!in_ZR && in_NG == (bool)in_OV) {
    software_interrupt(0xc4c3cf);
  }
  if (in_CY) {
    return;
  }
  if (!in_ZR && in_NG == (bool)in_OV) {
    coprocessor_movefromRt(4,6,7,in_cr5,in_cr9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

