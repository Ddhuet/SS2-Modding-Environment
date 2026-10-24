
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d5e1c6(void)

{
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr10;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x07c4b6a6();
    in_r12 = extraout_r12;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x07c4ba9e();
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_load(3,in_cr5,unaff_r11);
    coprocessor_load(0xd,in_cr6,in_r12);
    coprocessor_storelong(0xd,in_cr3,&stack0x00000000);
    coprocessor_loadlong(0xd,in_cr3,&stack0x000002ec);
    coprocessor_loadlong(0xd,in_cr10,&stack0x000002ec);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

