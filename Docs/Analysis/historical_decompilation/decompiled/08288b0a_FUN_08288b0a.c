
/* WARNING: Control flow encountered bad instruction data */

void FUN_08288b0a(void)

{
  char in_NG;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    func_0x0692e58e();
  }
  if ((bool)in_CY) {
    coprocessor_function(8,0,6,in_cr14,in_cr11,in_cr4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

