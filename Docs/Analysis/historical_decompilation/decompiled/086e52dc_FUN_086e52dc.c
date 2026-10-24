
/* WARNING: Control flow encountered bad instruction data */

void FUN_086e52dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int extraout_r3;
  undefined4 unaff_r7;
  int unaff_r9;
  undefined4 in_r12;
  undefined4 extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined4 in_cr8;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if ((bool)in_CY && !(bool)in_ZR) {
    uVar2 = func_0x08492ab4();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_r9 = *(int *)(param_4 + -0x10);
    param_4 = param_4 + -0x18;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *(undefined4 *)(unaff_r9 + -4) = in_r12;
    *(undefined4 *)(unaff_r9 + -8) = unaff_r7;
    *(undefined4 *)(unaff_r9 + -0xc) = param_3;
    *(undefined8 *)(unaff_r9 + -0x14) = uVar2;
  }
  coprocessor_load2(0,in_cr8,iVar1 + -0x54);
                    /* WARNING: Could not recover jumptable at 0x086e52ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!(bool)in_OV) {
    (*(code *)(param_4 + iVar1 * 0x800 + (uint)(byte)in_CY))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

