
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819965e(void)

{
  int unaff_r9;
  bool in_ZR;
  undefined1 in_CY;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr7;
  
  if (in_ZR) {
    func_0x07546d42();
  }
  if ((bool)in_CY) {
    coprocessor_store(0xe,in_cr3,unaff_r9 + -0xb4);
  }
  coprocessor_function2(7,0xf,1,in_cr0,in_cr7,in_cr4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

