
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0819fd50(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *unaff_r6;
  int unaff_r8;
  int unaff_r10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_ZR) {
    return *unaff_r6;
  }
  if ((bool)in_NG) {
    param_3 = param_3 - ((uint)&stack0x00000000 >> 8);
  }
  iVar1 = param_3;
  if (in_NG != in_OV) {
    coprocessor_storelong(10,in_cr15,unaff_r10 + 0x78);
    iVar1 = param_3 + 0x318;
    coprocessor_load(4,in_cr11,param_3);
  }
  if (in_CY) {
    func_0x069cf078(param_1,param_2,iVar1);
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined4 *)(unaff_r8 + 4);
}

