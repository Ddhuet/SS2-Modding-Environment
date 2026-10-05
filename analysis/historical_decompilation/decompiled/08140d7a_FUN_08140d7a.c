
/* WARNING: Control flow encountered bad instruction data */

void FUN_08140d7a(void)

{
  undefined4 *in_r3;
  undefined4 unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr10;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    *in_r3 = unaff_r11;
    func_0x06ee1022();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    coprocessor_store(0xe,in_cr10,&stack0x00000000);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

