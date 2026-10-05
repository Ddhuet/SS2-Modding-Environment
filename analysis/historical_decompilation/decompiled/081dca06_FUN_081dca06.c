
/* WARNING: Control flow encountered bad instruction data */

void FUN_081dca06(void)

{
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr5;
  undefined4 in_cr14;
  
  if (in_ZR) {
    coprocessor_movefromRt(9,7,6,in_cr14,in_cr5);
  }
  if (in_CY) {
    func_0x08be5682();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

