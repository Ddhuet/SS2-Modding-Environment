
/* WARNING: Control flow encountered bad instruction data */

void FUN_0812a25c(int param_1)

{
  int unaff_r9;
  uint unaff_r10;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool in_OV;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  coprocessor_store(5,in_cr11,param_1 + 0x140);
  if (in_OV) {
    in_CY = false;
    in_OV = false;
    in_ZR = false;
  }
  else {
    coprocessor_loadlong(8,in_cr7,0x812a268);
    coprocessor_loadlong(0xd,in_cr7,0x812a070);
  }
  if (!in_OV) {
    coprocessor_function(0xf,7,3,in_cr7,in_cr15,in_cr11);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    in_OV = SCARRY4(unaff_r9,0x812a278U >> (unaff_r10 & 0x1f) |
                             0x812a278 << 0x20 - (unaff_r10 & 0x1f));
  }
  if (!in_OV) {
    coproc_movefrom_Peripheral_System(3,in_cr15,3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

