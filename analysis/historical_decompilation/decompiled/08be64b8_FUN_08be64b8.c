
/* WARNING: Control flow encountered bad instruction data */

void FUN_08be64b8(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    func_0x078d3980();
  }
  if (in_NG != in_OV) {
    func_0x07ab30c4();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

