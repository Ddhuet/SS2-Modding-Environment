
/* WARNING: Control flow encountered bad instruction data */

void FUN_081dcc04(void)

{
  undefined4 unaff_r5;
  int unaff_r9;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr12;
  
  if (in_NG == in_OV) {
    func_0x06d0a320();
  }
  coprocessor_loadlong(1,in_cr12,unaff_r5);
  if (!(bool)in_CY) {
    func_0x08d63824();
  }
  if (!(bool)in_ZR) {
    coprocessor_store(3,in_cr3,unaff_r9 + -0xe8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

