
/* WARNING: Control flow encountered bad instruction data */

void FUN_081bc4b0(void)

{
  undefined4 unaff_r7;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  if (!in_CY) {
    coprocessor_storelong(5,in_cr11,unaff_r7);
  }
  if (!in_ZR) {
    func_0x083afcb0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

