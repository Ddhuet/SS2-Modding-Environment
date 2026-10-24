
/* WARNING: Control flow encountered bad instruction data */

void FUN_08170cea(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r9;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined4 unaff_s23;
  
  iVar2 = param_2;
  if (in_NG == in_OV) {
    iVar2 = param_2 + 0x2dc;
    coprocessor_load(5,in_cr11,param_2);
  }
  uVar1 = unaff_s23;
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xd,in_cr12,unaff_r9 + 0x360);
    func_0x076a6442(param_1,iVar2);
    uVar1 = uRam08170fa8;
  }
  uRam08170fa8 = uVar1;
  if ((bool)in_CY && !(bool)in_ZR) {
    coprocessor_movefromRt(0xf,4,5,in_cr14,in_cr14);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

