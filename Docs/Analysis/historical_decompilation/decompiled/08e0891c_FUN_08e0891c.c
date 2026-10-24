
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e0891c(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    func_0x07cf5dfc();
  }
  if (in_NG != in_OV) {
    func_0x0ab9d5ac();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

