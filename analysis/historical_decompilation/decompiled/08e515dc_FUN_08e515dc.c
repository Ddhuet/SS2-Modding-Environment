
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e515dc(void)

{
  char in_NG;
  char in_OV;
  
  if ((bool)in_NG) {
    func_0x07d3ecd0();
  }
  if (in_NG != in_OV) {
    func_0x0773a894();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

