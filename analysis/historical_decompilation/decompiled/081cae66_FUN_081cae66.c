
/* WARNING: Control flow encountered bad instruction data */

void FUN_081cae66(void)

{
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    func_0x07078532();
  }
  if (in_NG != in_OV) {
    return;
  }
  if (in_NG == in_OV) {
    coprocessor_store(8,in_cr11,0x81cb162);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

