
/* WARNING: Control flow encountered bad instruction data */

void FUN_085fc09c(void)

{
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr11;
  
  if (!in_OV) {
    coprocessor_load(5,in_cr11,0x85fbeb0);
  }
  if (in_ZR) {
    func_0x08a09778();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

