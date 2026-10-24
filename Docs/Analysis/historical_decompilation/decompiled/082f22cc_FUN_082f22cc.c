
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f22cc(void)

{
  char in_NG;
  undefined1 in_CY;
  char in_OV;
  
  if ((bool)in_OV) {
    func_0x088f4dcc();
  }
  if (!(bool)in_CY) {
    func_0x09a89438();
  }
  if (in_NG == in_OV) {
    func_0x06b9c91c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

