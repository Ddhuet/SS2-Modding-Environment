
/* WARNING: Control flow encountered bad instruction data */

void FUN_081f132e(void)

{
  undefined4 unaff_r7;
  int unaff_r9;
  int iVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  iVar1 = unaff_r9;
  if (in_NG != in_OV) {
    iVar1 = unaff_r9 + 0x2c4;
    coprocessor_load(5,in_cr11,unaff_r9);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x073e223a();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x077e627a();
  }
  coprocessor_storelong(3,in_cr14,unaff_r7);
  coprocessor_loadlong2(5,in_cr15,iVar1 + 0x3c0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

