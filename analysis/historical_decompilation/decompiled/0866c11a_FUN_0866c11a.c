
/* WARNING: Control flow encountered bad instruction data */

void FUN_0866c11a(undefined4 param_1)

{
  undefined4 unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_loadlong(5,in_cr11,in_r12 + 0x130);
  }
  if (in_NG != in_OV) {
    if (in_NG == in_OV) {
      func_0x09116cde(param_1);
    }
    if ((bool)in_CY) {
      coprocessor_store(0xb,in_cr2,unaff_r11);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000f4c = 0xf4c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

