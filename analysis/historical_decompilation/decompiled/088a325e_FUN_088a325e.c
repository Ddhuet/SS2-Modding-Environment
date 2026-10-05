
/* WARNING: Control flow encountered bad instruction data */

void FUN_088a325e(undefined4 param_1,undefined4 param_2,uint param_3,char *param_4)

{
  uint extraout_r2;
  uint extraout_r2_00;
  char *extraout_r3;
  char *extraout_r3_00;
  undefined1 *unaff_r6;
  int unaff_r8;
  int iVar1;
  uint unaff_r9;
  uint unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr3;
  
  if ((bool)in_CY) {
    unaff_r11 = param_3 ^ 0x14800000;
  }
  else {
    unaff_r9 = param_3 ^ 0x74000;
  }
  if (in_NG != in_OV) {
    func_0x06ac17be();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_store(2,in_cr2,unaff_r8);
  }
  iVar1 = unaff_r8;
  if (!(bool)in_CY || (bool)in_ZR) {
    iVar1 = unaff_r8 + 0x4c;
    coprocessor_load(2,in_cr2,unaff_r8);
  }
  if ((bool)in_NG) {
    coprocessor_storelong(2,in_cr2,unaff_r11);
  }
  else {
    coprocessor_storelong(2,in_cr2,iVar1 + 0x48);
    coprocessor_storelong(2,in_cr2,unaff_r9);
  }
  if ((bool)in_CY) {
    func_0x07ae7ace();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
  }
  else {
    coprocessor_load(2,in_cr3,unaff_r11);
  }
  if ((bool)in_OV) {
    *unaff_r6 = (char)param_3;
    *param_4 = (char)unaff_r6 - (char)(param_3 >> 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

