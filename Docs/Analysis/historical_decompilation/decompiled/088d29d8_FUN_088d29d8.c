
/* WARNING: Control flow encountered bad instruction data */

void FUN_088d29d8(void)

{
  int unaff_r11;
  int iVar1;
  int iVar2;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  undefined4 extraout_r12_02;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_r11 = *(int *)(unaff_r11 + 0x55b);
  }
  if (!(bool)in_NG) {
    func_0x087a9038();
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    software_interrupt(0xfb5ee5);
    software_interrupt(0xb59ee9);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x077c18dc();
    in_r12 = extraout_r12_00;
  }
  iVar1 = unaff_r11;
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xb,in_cr11,in_r12);
    coprocessor_storelong(0xb,in_cr12,unaff_r11);
    coprocessor_storelong(0xc,in_cr12,unaff_r11);
    iVar1 = unaff_r11 + 0x74;
    coprocessor_load(0xc,in_cr11,unaff_r11);
    func_0x0773f0ac();
    in_r12 = extraout_r12_01;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x077c309c();
    in_r12 = extraout_r12_02;
  }
  iVar2 = iVar1;
  if (!(bool)in_ZR && in_NG == in_OV) {
    iVar2 = iVar1 + 0x294;
    coprocessor_load(1,in_cr12,iVar1);
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(0xc,in_cr12,iVar2);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    coprocessor_storelong(0xc,in_cr12,in_r12);
    func_0x07c05d5c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

