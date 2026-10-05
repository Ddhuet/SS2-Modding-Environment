
/* WARNING: Control flow encountered bad instruction data */

void FUN_08169e2c(void)

{
  undefined4 in_cr11;
  
  coprocessor_load2(5,in_cr11,0x8169e34);
  func_0x07d71202();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

