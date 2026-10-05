
/* WARNING: Control flow encountered bad instruction data */

void FUN_087d2330(void)

{
  int unaff_r8;
  int unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr11;
  
  if ((bool)in_ZR) {
    coprocessor_load(5,in_cr11,unaff_r8 + 0x1e8);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x06df3890();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x06e349b0();
  }
  if ((bool)in_ZR) {
    coprocessor_load(9,in_cr9,unaff_r11 + 0x270);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

