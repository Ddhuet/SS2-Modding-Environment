
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_081cac08(void)

{
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    return *unaff_r9;
  }
  if (in_NG != in_OV) {
    coprocessor_load(10,in_cr11,unaff_r11 + 0x2e4);
  }
  coprocessor_storelong2(3,in_cr13,unaff_r8);
  coprocessor_loadlong2(2,in_cr0,0x81cac1c);
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

