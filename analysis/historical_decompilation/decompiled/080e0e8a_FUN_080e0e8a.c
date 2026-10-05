
/* WARNING: Control flow encountered bad instruction data */

void FUN_080e0e8a(void)

{
  int in_r3;
  int unaff_r11;
  int unaff_lr;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_store(5,in_cr11,in_r3 + 0x37c);
  }
  if (in_ZR) {
    return;
  }
  *(undefined4 *)(unaff_lr - (unaff_r11 >> 1)) = unaff_pc;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

