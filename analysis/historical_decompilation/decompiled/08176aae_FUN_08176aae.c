
/* WARNING: Control flow encountered bad instruction data */

void FUN_08176aae(void)

{
  int unaff_r5;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr11;
  
  if (in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZR) {
    coprocessor_storelong(4,in_cr11,unaff_r5 + 0x40);
    func_0x081b4ab6();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

