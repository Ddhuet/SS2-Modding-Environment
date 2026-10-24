
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e3bf0(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr0;
  
  if (in_NG != in_OV) {
    func_0x073112f8();
  }
  if ((bool)in_ZR) {
    coprocessor_loadlong(3,in_cr0,0x82e3c00);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

