
/* WARNING: Control flow encountered bad instruction data */

void FUN_082fc830(void)

{
  int unaff_r9;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr3;
  undefined4 in_cr7;
  undefined4 in_cr8;
  
  if (!in_ZR) {
    coprocessor_storelong(8,in_cr8,unaff_r9 + 0x3e4);
  }
  if (in_CY) {
    coprocessor_movefromRt(0xd,0,1,in_cr3,in_cr7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

