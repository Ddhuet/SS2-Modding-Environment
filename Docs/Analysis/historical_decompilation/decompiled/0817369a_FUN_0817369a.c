
/* WARNING: Control flow encountered bad instruction data */

void FUN_0817369a(void)

{
  undefined4 unaff_r5;
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr5;
  
  if (in_NG == in_OV) {
    software_interrupt(0x52f7b7);
  }
  else {
    unaff_r5 = *(undefined4 *)(unaff_r9 + 0xc);
  }
  if (in_ZR) {
    software_interrupt(0x3ab71e);
  }
  coprocessor_storelong(8,in_cr5,unaff_r5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

