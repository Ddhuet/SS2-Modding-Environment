
/* WARNING: Control flow encountered bad instruction data */

void FUN_0859dda0(void)

{
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  undefined1 in_NG;
  undefined1 in_CY;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr15;
  
  if ((bool)in_NG) {
    func_0x0740b378();
    in_r12 = extraout_r12;
  }
  if ((bool)in_NG) {
    func_0x0748b678();
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_NG) {
    func_0x0748be7c();
    in_r12 = extraout_r12_01;
  }
  if ((bool)in_NG) {
    coprocessor_load(0xb,in_cr11,unaff_r11);
  }
  if (!(bool)in_CY) {
    coprocessor_storelong(0xb,in_cr12,in_r12);
  }
  coprocessor_movefromRt(0xe,1,7,in_cr15,in_cr10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

