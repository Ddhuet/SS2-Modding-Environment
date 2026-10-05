
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a5df78(void)

{
  int extraout_r1;
  int extraout_r1_00;
  int iVar1;
  int extraout_r12;
  int extraout_r12_00;
  int iVar2;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr12;
  
  func_0x0798b4da();
  iVar1 = extraout_r1;
  iVar2 = extraout_r12;
  if (in_NG != in_OV) {
    func_0x0814ccf0();
    iVar1 = extraout_r1_00;
    iVar2 = extraout_r12_00;
  }
  coprocessor_load2(0xb,in_cr12,iVar2 + 0x2ec);
  if ((bool)in_ZR) {
    iVar1 = -(uint)!(bool)in_CY;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(1,in_cr1,iVar1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

