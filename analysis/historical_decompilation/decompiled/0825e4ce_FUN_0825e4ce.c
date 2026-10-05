
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825e4ce(void)

{
  int unaff_r8;
  int iVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  iVar1 = unaff_r8;
  if (in_NG != in_OV) {
    iVar1 = unaff_r8 + 0x2c8;
    coprocessor_load(5,in_cr11,unaff_r8);
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(4,in_cr12,iVar1 + 0x300);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

