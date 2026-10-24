
/* WARNING: Control flow encountered bad instruction data */

void FUN_08bf329c(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr14;
  
  if ((bool)in_ZR) {
    func_0x09860708();
  }
  if ((bool)in_ZR) {
    func_0x09849fcc();
  }
  if (!(bool)in_ZR) {
    func_0x0a03876c();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr14,&stack0x000000c0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

