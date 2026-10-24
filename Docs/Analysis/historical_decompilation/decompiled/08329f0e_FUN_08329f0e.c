
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0862baf2) */

void FUN_08329f0e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  int *extraout_r1;
  int *piVar3;
  undefined1 *extraout_r3;
  undefined1 *extraout_r3_00;
  undefined1 *extraout_r3_01;
  undefined1 in_r12;
  undefined1 extraout_r12;
  undefined1 extraout_r12_00;
  undefined1 extraout_r12_01;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined8 uVar4;
  int iVar2;
  
  uVar4 = CONCAT44(param_2,param_1);
  if ((bool)in_ZR) {
    unaff_lr = 0x8329f12;
    uVar4 = func_0x07f975fa();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_CY) {
    in_r12 = (undefined1)*(undefined4 *)(unaff_lr + -8);
    unaff_lr = unaff_lr + -0x1c;
  }
  if (!(bool)in_ZR) {
    unaff_lr = 0x8329f1a;
    uVar4 = func_0x08cf9c1a();
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  piVar3 = (int *)((ulonglong)uVar4 >> 0x20);
  iVar2 = (int)uVar4;
  iVar1 = iVar2;
  if ((bool)in_ZR || in_NG != in_OV) {
    iVar1 = iVar2 + 0x98;
    coprocessor_storelong(2,in_cr0,iVar2);
  }
  if (!(bool)in_ZR) {
    unaff_lr = 0x8329f22;
    func_0x08727ebe(iVar1);
    piVar3 = extraout_r1;
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *param_4 = in_r12;
  }
  if (!(bool)in_ZR) {
    if ((bool)in_NG) {
      *piVar3 = unaff_lr;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

