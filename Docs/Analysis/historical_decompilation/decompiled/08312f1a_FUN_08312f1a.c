
/* WARNING: Control flow encountered bad instruction data */

void FUN_08312f1a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_r6;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int unaff_lr;
  bool in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr11;
  
  if ((bool)in_ZR) {
    software_interrupt(0x54b506);
  }
  if (in_NG == (bool)in_OV) {
    coprocessor_movefromRt(2,0,5,in_cr4,in_cr0);
  }
  if (in_NG) {
    *unaff_r6 = param_3;
    unaff_r6[1] = param_4;
    unaff_r6[2] = unaff_r6;
    unaff_r6[3] = unaff_r8;
    unaff_r6[4] = unaff_r10;
    unaff_r6[5] = register0x00000054;
  }
  if (!in_CY) {
    unaff_lr = 0x8312f2a;
    func_0x093fb7e2();
  }
  if ((bool)in_ZR) {
    coprocessor_store(0xc,in_cr5,unaff_r7 + 0x88);
  }
  if ((bool)in_OV) {
    coprocessor_loadlong(2,in_cr11,unaff_lr + 0x198);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

