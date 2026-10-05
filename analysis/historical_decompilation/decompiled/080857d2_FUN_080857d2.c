
/* WARNING: Control flow encountered bad instruction data */

void FUN_080857d2(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined1 *param_4)

{
  uint in_r12;
  bool in_NG;
  bool in_ZR;
  
  if (in_ZR) {
    param_3 = (undefined1)(in_r12 >> 0xb);
  }
  if (in_NG) {
    *param_4 = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

