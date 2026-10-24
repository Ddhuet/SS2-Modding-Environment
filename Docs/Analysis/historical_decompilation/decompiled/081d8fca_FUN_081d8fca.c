
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d8fca(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    func_0x06f8669a();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x074cb6da();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

