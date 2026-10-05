
/* WARNING: Control flow encountered bad instruction data */

void FUN_081e9ee6(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint extraout_r3;
  int unaff_r6;
  int *unaff_r8;
  uint *unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar2;
  bool bVar3;
  undefined4 in_cr8;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    unaff_r11 = (uint *)(param_4 & 0xd8bfffff);
  }
  bVar2 = false;
  bVar3 = in_CY;
  if (in_ZR) {
    uVar1 = (uint)&stack0x00000000 >> 0x17;
    bVar3 = param_3 < uVar1 || uVar1 - param_3 < (uint)in_CY;
    in_OV = SBORROW4(uVar1,param_3) != SBORROW4(uVar1 - param_3,(uint)!in_CY);
    in_r12 = uVar1 - (param_3 + !in_CY);
    in_NG = in_r12 < 0;
    bVar2 = in_r12 == 0;
  }
  if (in_NG == in_OV) {
    iRam081e9ef6 = in_r12;
  }
  if (!bVar2 && in_NG == in_OV) {
    param_1 = (undefined4 *)((int)param_1 + 0xab);
    unaff_r11 = (uint *)*param_1;
  }
  if (in_NG == in_OV) {
    coprocessor_storelong(0xc,in_cr13,param_2 + 0x374);
  }
  if (!bVar2) {
    if ((bool)in_NG) {
      *unaff_r8 = param_2;
    }
    if (in_NG != in_OV) {
      coprocessor_loadlong(1,in_cr8,&stack0x00000044);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_NG) {
    param_3 = *unaff_r11;
  }
  if (bVar3) {
    func_0x0886efc2(param_1,param_2,param_3);
    param_4 = extraout_r3;
  }
  if (!(bool)in_NG) {
    *(char *)(unaff_r6 + -0xc36) = (char)param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

