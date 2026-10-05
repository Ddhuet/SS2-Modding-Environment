
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825f556(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int iVar2;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int in_r12;
  int iVar3;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool in_OV;
  undefined4 in_cr4;
  undefined4 in_cr7;
  
  uRam0825f582 = 0x825f55e;
  uVar1 = param_2;
  if (!(bool)in_NG) {
    in_CY = false;
    uVar1 = unaff_r7 ^ 0x200;
    in_NG = (int)uVar1 < 0;
    in_ZR = uVar1 == 0;
  }
  iVar3 = in_r12;
  if (!in_OV) {
    iVar3 = in_r12 + -0x1a4;
    coprocessor_loadlong(3,in_cr7,in_r12);
  }
  iVar2 = unaff_r8;
  if ((bool)in_ZR) {
    iVar2 = unaff_r8 + -0x188;
    coprocessor_store(5,in_cr4,iVar2);
  }
  uRam0825f562 = param_2;
  uRam0825f566 = param_4;
  uRam0825f56a = unaff_r4;
  uRam0825f56e = unaff_r7;
  iRam0825f572 = unaff_r8;
  uRam0825f576 = unaff_r10;
  iRam0825f57a = in_r12;
  puRam0825f57e = (undefined1 *)register0x00000054;
  if ((bool)in_NG == in_OV) {
    *(undefined4 *)(uVar1 + 4) = param_3;
    *(undefined4 *)(uVar1 + 8) = unaff_r4;
    *(undefined4 *)(uVar1 + 0xc) = unaff_r5;
    *(undefined4 *)(uVar1 + 0x10) = unaff_r6;
    *(uint *)(uVar1 + 0x14) = unaff_r7;
    *(int *)(uVar1 + 0x18) = iVar2;
    *(undefined4 *)(uVar1 + 0x1c) = unaff_r9;
    *(undefined4 *)(uVar1 + 0x20) = unaff_r11;
    *(int *)(uVar1 + 0x24) = iVar3;
    *(undefined4 *)(uVar1 + 0x28) = unaff_lr;
    *(undefined4 *)(uVar1 + 0x2c) = 0x825f56e;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x064033ca();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

