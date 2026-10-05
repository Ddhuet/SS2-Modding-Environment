
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828e688(void)

{
  bool in_ZR;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr11;
  
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_function(1,0xb,6,in_cr11,in_cr6,in_cr7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

