
/* WARNING: Control flow encountered bad instruction data */

void FUN_08224362(undefined4 param_1,char param_2)

{
  char *unaff_r5;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (in_NG == in_OV) {
    if (in_NG != in_OV) {
      coprocessor_movefromRt(0xc,5,5,in_cr13,in_cr11);
    }
    if (!in_ZR && in_NG == in_OV) {
      *unaff_r5 = param_2 - (!in_CY + -0x41);
      func_0x074d6a9a();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

