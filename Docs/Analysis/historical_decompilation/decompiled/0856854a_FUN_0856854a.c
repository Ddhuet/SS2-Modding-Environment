
/* WARNING: Control flow encountered bad instruction data */

void FUN_0856854a(void)

{
  undefined4 unaff_r5;
  int unaff_r11;
  int iVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  iVar1 = unaff_r11;
  if (in_NG != in_OV) {
    iVar1 = unaff_r11 + 0xd0;
    coprocessor_load(5,in_cr11,unaff_r11);
  }
  coprocessor_load(0xd,in_cr12,iVar1 + 0x36c);
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_load(0xb,in_cr13,unaff_r5);
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

