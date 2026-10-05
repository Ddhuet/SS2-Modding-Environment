
/* WARNING: Control flow encountered bad instruction data */

void FUN_0866b484(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 unaff_r5;
  int unaff_r10;
  undefined2 in_r12;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  bool bVar2;
  undefined4 in_cr0;
  
  if (in_NG == in_OV) {
    in_OV = SBORROW4(unaff_r10,param_1 * 0x400);
    in_NG = (int)(unaff_r10 + param_1 * -0x400) < 0;
    in_ZR = unaff_r10 == param_1 * 0x400;
  }
  if (!(bool)in_NG) {
    coprocessor_moveto(0xd,5,5,unaff_r5,in_cr0,in_cr0);
  }
  bVar2 = false;
  if ((bool)in_ZR) {
    uVar1 = param_1 >> 1;
    in_OV = SBORROW4(0x866b498,uVar1);
    in_NG = (int)(0x866b498 - uVar1) < 0;
    bVar2 = uVar1 == 0x866b498;
  }
  if (!bVar2 && in_NG == in_OV) {
    *(undefined2 *)(param_1 + param_4) = in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

