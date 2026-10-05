
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e16370(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    func_0x076839e0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

