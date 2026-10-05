
/* WARNING: Control flow encountered bad instruction data */

void FUN_0832af68(undefined4 param_1,undefined1 param_2)

{
  bool in_NG;
  bool in_ZR;
  undefined4 in_cr0;
  undefined4 in_cr12;
  
  if (!in_NG) {
    uRam0832af74 = param_2;
  }
  if (in_ZR) {
    coprocessor_movefromRt(3,1,2,in_cr12,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

