
/* WARNING: Control flow encountered bad instruction data */

void FUN_08aaed14(void)

{
  char in_NG;
  char in_OV;
  
  if ((bool)in_NG) {
    func_0x0799c284();
  }
  if (in_NG != in_OV) {
    func_0x077bf28c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

