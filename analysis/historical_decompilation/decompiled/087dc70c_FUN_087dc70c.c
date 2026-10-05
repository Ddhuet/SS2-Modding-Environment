
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x087d1fb0) */

void FUN_087dc70c(void)

{
  int unaff_r8;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr11;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_ZR || (bool)in_NG != in_OV) {
    coprocessor_storelong(5,in_cr11,unaff_r8 + 0x48);
  }
  coprocessor_movefromRt(5,7,0,in_cr14,in_cr1);
  coprocessor_movefromRt(5,7,0,in_cr15,in_cr2);
  if (in_CY && !in_ZR) {
    software_interrupt(0xffa625);
  }
  if (!in_OV) {
    coprocessor_loadlong(6,in_cr11,0x87dc7ac);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

